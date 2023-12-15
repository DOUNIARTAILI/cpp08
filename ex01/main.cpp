#include "Span.hpp"

// int main(){
//     Span v = Span(5);
//     v.addNumber(5);
//     v.addNumber(44);
//     v.addNumber(1);
//     v.addNumber(9);
//     v.addNumber(3);

//     std::cout << "Shortest Span is : " << v.shortestSpan() << std::endl;
//     std::cout << "longest Span is : " << v.longestSpan() << std::endl;
// }

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::vector<int> numbersToAdd;
    for (int i = 1; i <= 10000; ++i) {
        numbersToAdd.push_back(i);
    }

    sp.addNumbers(numbersToAdd);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}