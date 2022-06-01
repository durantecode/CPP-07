/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 18:23:20 by ldurante          #+#    #+#             */
/*   Updated: 2022/06/01 20:43:36 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void iter(T const *array, int len, void (*f)(const T&))
{
	for (int i = 0; i < len; i++)
		(*f)(array[i]);
}

#endif
