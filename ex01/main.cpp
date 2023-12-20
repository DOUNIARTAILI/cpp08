/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drtaili <drtaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 17:38:46 by drtaili           #+#    #+#             */
/*   Updated: 2023/12/20 23:57:51 by drtaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try{
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "shortest Span : " << sp.shortestSpan() << std::endl;
        std::cout << "longest Span : " << sp.longestSpan() << std::endl;

        Span spm = Span(5);
        spm.addNumber(10);
        spm.addNumber(20);
        spm.addNumbers(3);
        spm.display();
        std::cout << "shortest Span : " << spm.shortestSpan() << std::endl;
        std::cout << "longest Span : " << spm.longestSpan() << std::endl;
    }catch (std::exception& e){
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}