/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drtaili <drtaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 17:39:27 by drtaili           #+#    #+#             */
/*   Updated: 2023/12/17 22:50:32 by drtaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    // the typedef lines are creating aliases iterator and const_iterator for the iterator 
    // and const_iterator types of the underlying container, making it easier to use them in the rest of your MutantStack class.
    // The container_type is an alias provided by std::stack for its underlying container type. In this case, 
    // it refers to the type of the container used to implement the stack, which defaults to std::deque<T>.
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;

    MutantStack() : std::stack<T>() {}
    ~MutantStack() {}
    MutantStack(const MutantStack& other) : std::stack<T>(other) {}
    const MutantStack& operator=(const MutantStack& other)
    {
        if (this != &other)
        {
            std::stack<T>::operator=(other);
        }
        return *this;
    }

    iterator begin() { return this->c.begin(); } 
    iterator end() { return this->c.end(); }
    // The const_iterator is used when the object is const-qualified, 
    // ensuring that you cannot modify the elements through that iterator.
    const_iterator begin() const { return this->c.begin(); }
    const_iterator end() const { return this->c.end(); }
};

#endif

