/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drtaili <drtaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 17:39:14 by drtaili           #+#    #+#             */
/*   Updated: 2023/12/21 21:16:41 by drtaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

class VectorFullException: public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return "Vector is already full!";
	}
};

class NotEnoughSizeException: public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return "No span can be found !";
	}
};

class rangetoobig: public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return "Range too big !";
	}
};

class Span{
public: 
    Span();
    Span(unsigned int n);
    ~Span();
    Span(const Span& other);
    const Span &operator=(const Span& other);
    void addNumber(int nb);
    unsigned int shortestSpan();
    unsigned int longestSpan();
    template <typename InputIt>
    void addNumbers(InputIt begin, InputIt end) {
        if (end - begin > n){
            throw rangetoobig();
        }
        vec.insert(vec.end(), begin, end);
    }
    void display();
private:
    std::vector<int> vec;
    unsigned int n;
};

#endif