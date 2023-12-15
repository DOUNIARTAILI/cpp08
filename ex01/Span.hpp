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
    void addNumbers(const std::vector<int>& numbers);
private:
    std::vector<int> vec;
    unsigned int n;
};

#endif