/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drtaili <drtaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 21:20:28 by drtaili           #+#    #+#             */
/*   Updated: 2023/12/20 23:45:42 by drtaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
int easyfind(T container, int value) {
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    
    if (it != container.end()) {
        return *it;
    } else {
        throw std::out_of_range("Value not found in container");
    }
}