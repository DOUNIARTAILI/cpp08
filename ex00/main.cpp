/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drtaili <drtaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 21:20:31 by drtaili           #+#    #+#             */
/*   Updated: 2023/12/21 20:52:50 by drtaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main() {
    std::vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(20);
    numbers.push_back(3);
    numbers.push_back(6);
    numbers.push_back(9);

    int searchValue = 20;

    try {
        int result = easyfind(numbers, searchValue);
        std::cout << "Value found : " << result << std::endl;
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}