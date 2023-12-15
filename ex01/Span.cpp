#include "Span.hpp"

Span::Span(){

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
    int max = *std::max_element(vec.begin(), vec.end());
    int min = *std::min_element(vec.begin(), vec.end());
    return (std::abs(max - min));
}


void Span::addNumbers(const std::vector<int>& numbers) {
    vec.insert(vec.end(), numbers.begin(), numbers.end());
}
