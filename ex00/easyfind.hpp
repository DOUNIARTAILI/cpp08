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

template <typename T>
typename T::const_iterator easyfind(const T& container, int value){
    int result = std::find(container.begin(), container.end(), value);
    if (result == container.end())
        throw std::out_of_range("Value not found in container");
    return result;
}