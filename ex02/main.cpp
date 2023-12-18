/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drtaili <drtaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 17:39:32 by drtaili           #+#    #+#             */
/*   Updated: 2023/12/18 19:36:47 by drtaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

class Employee{
public:
    int days;
    Employee(int days){
        std::cout << "constructor called" << days << std::endl;
    }
    Employee(const Employee &employee){
        std::cout << "copy constructor called" << employee.days << std::endl;
        this->days = employee.days;
    }
};

int main()
{
    // MutantStack<int> mstack;
    // mstack.push(5);
    // mstack.push(17);
    // std::cout << mstack.top() << std::endl;
    // mstack.pop();
    // std::cout << "mstack size : " << mstack.size() << std::endl;
    // mstack.push(3);
    // mstack.push(5);
    // mstack.push(0);
    // MutantStack<int>::iterator it = mstack.begin();
    // MutantStack<int>::iterator ite = mstack.end();
    // ++it;
    // --it;
    // std::cout << "-----------------------" << std::endl;
    // while (it != ite)
    // {
    //     std::cout << *it << std::endl;
    //     ++it;
    // }
    // std::cout << "-----------------------" << std::endl;
    // std::stack<int> s(mstack);
    // std::cout << "s size : " << s.size() << std::endl;
    // std::cout << "Elements of the stack: "<< std::endl;
    // while (!s.empty()) {
    //     std::cout << s.top() << std::endl;
    //     s.pop();
    // }
    // std::cout << "s size : " << s.size() << std::endl;

    // std::stack <Employee, std::deque<Employee> > employee_stack;
    // Employee joe(10);
    // employee_stack.push(joe);
    // employee_stack.emplace(joe); //the object was being created and emplaced at the same time
    // employee_stack.push_back(6);

    std::stack<int, std::deque<int> > st;
    st.push_back(20);
    
    return 0;
}

