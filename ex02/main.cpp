/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drtaili <drtaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 17:39:32 by drtaili           #+#    #+#             */
/*   Updated: 2023/12/21 00:42:49 by drtaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

class Employee{
public:
    int days;
    Employee(int days){
        std::cout << "constructor called " << days << std::endl;
        this->days = days;
    }
    Employee(const Employee& employee){
        std::cout << "copy constructor called " << employee.days << std::endl;
        this->days = employee.days;
    }
};
std::ostream & operator<<(std::ostream & o, Employee const & i){
    o << i.days;
	return o;
}
int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "mstack size : " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    std::cout << "-----------------------" << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << "mstack size after iterating: " << mstack.size() << std::endl;
    std::cout << "-----------------------" << std::endl;
    std::stack<int> s(mstack);
    std::cout << "Elements of the stack: "<< std::endl;
    while (!s.empty()) {
        std::cout << s.top() << std::endl;
        s.pop();
    }
    std::cout << "s size after iterating : " << s.size() << std::endl;
    
    MutantStack<Employee> employee_stack;
    Employee joe(10);
    employee_stack.push(joe);
    std::cout << "top of : " <<  employee_stack.top() << std::endl;
    MutantStack<Employee> stack_lakhor;
    Employee dd(99);
    stack_lakhor.push(dd);
    stack_lakhor.swap(employee_stack);
    MutantStack<Employee>::iterator itt = stack_lakhor.begin();
    MutantStack<Employee>::iterator itee = stack_lakhor.end();
    while (itt != itee)
    {
        std::cout << *itt << std::endl;
        ++itt;
    }
    puts("-----");
    MutantStack<Employee>::iterator iti = employee_stack.begin();
    MutantStack<Employee>::iterator itn = employee_stack.end();
    while (iti != itn)
    {
        std::cout << *iti << std::endl;
        ++iti;
    }
    return 0;
}

