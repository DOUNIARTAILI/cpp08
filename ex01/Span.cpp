/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drtaili <drtaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 17:39:07 by drtaili           #+#    #+#             */
/*   Updated: 2023/12/21 21:32:07 by drtaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : n(50){

}
Span::Span(unsigned int n){
    this->n = n;
}
Span::~Span(){

}
Span::Span(const Span& other){
    this->vec = other.vec;
    this->n= other.n;
}
const Span &Span::operator=(const Span& other){
    if (this != &other)
    {
        this->vec = other.vec;
        this->n= other.n;
    }
    return (*this);
}
void Span::addNumber(int nb){
    if (vec.size() >= this->n)
        throw VectorFullException();
    this->vec.push_back(nb);
}
unsigned int Span::shortestSpan(){
    if (vec.size() < 2)
        throw NotEnoughSizeException();
    std::sort(this->vec.begin(), this->vec.end());
    std::vector<int>::iterator it;
    int minvalue = std::numeric_limits<int>::max();
    for (it = vec.begin(); it != vec.end() - 1; it++){
        if (*(it + 1) - *it < minvalue)
        {
            minvalue = *(it + 1) - *it;
        }
    }
    return minvalue;
}

unsigned int Span::longestSpan(){
    if (vec.size() < 2)
        throw NotEnoughSizeException();
    int max = *max_element(vec.begin(), vec.end());
    int min = *min_element(vec.begin(), vec.end());
    return (abs(max - min));
}

void Span::display(){
    std::vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end(); it++){
       std::cout << *it << " ";
    }
    std::cout << "\n";
}