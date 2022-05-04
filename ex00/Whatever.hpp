/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 18:08:06 by ldurante          #+#    #+#             */
/*   Updated: 2022/05/04 18:16:34 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T const &min(T const &a, T const &b)
{
	if (a < b)
		return a;
	return b;
}

template <typename T>
T const &max(T const &a, T const &b)
{
	if (a > b)
		return a;
	return b;
}

#endif