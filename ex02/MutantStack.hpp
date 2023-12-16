/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drtaili <drtaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 17:39:27 by drtaili           #+#    #+#             */
/*   Updated: 2023/12/16 18:43:42 by drtaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <vector>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    using std::stack<T>::c;  // Bring the base class member 'c' into scope

    // Iterator typedefs
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;

    // Begin and end functions to access iterators
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
    const_iterator begin() const { return this->c.begin(); }
    const_iterator end() const { return this->c.end(); }
};


#endif
