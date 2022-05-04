/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 18:23:57 by ldurante          #+#    #+#             */
/*   Updated: 2022/05/04 19:30:53 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

template <typename T>
void printValues(T const &value)
{
	std::cout << value << std::endl;
}

int main(void)
{
	int arrayInt[5] = {10, 8, 5, 6, 43};
	char arrayChar[7] = {'K', 'I', 'L', 'L', ' ', 'M', 'E'};

	std::string strTab[3];
	strTab[0] = "Hello";
	strTab[1] = "From";
	strTab[2] = "Hell";

	iter(arrayInt, 5, printValues);
	iter(arrayChar, 7, printValues);
	iter(strTab, 3, printValues);
	return (0);
}