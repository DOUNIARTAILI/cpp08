/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drtaili <drtaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 21:20:28 by drtaili           #+#    #+#             */
/*   Updated: 2023/12/21 20:52:28 by drtaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>

class not_found404 : public std::exception{
    public:
        virtual const char* what() const throw() {
            return "Value not found in container !";
        }
};
    
template <typename T>
int easyfind(T container, int value) {
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    
    if (it != container.end()) {
        return *it;
    } else {
        throw not_found404();
    }
}