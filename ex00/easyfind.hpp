/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drtaili <drtaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 21:20:28 by drtaili           #+#    #+#             */
/*   Updated: 2023/12/14 21:52:45 by drtaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// template <typename T>
// int easyfind(T container, int value){
//     typename T::iterator it;
//     it = std::find(container.begin(), container.end(), value);
//     if (it == container.end())
//         throw std::out_of_range("Value not found in container");
//     return *it;
// }

template <typename T>
int easyfind(T container, int value){
    typename T::iterator it;
    for (it = container.begin(); it != container.end(); it++){
        if (*it == value)
            return *it;
    }
    if (it == container.end())
        throw std::out_of_range("Value not found in container");
    return 0;
}