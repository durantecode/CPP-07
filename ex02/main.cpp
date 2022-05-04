/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 20:57:49 by ldurante          #+#    #+#             */
/*   Updated: 2022/05/04 21:59:52 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

class TestClass 
{
	private:
		int m_number;
	public:
		TestClass(void) : m_number(42) {}
		int getNumber(void) const 
		{ 
			return this->m_number; 
		}
};

int main(void) 
{
	Array<TestClass>	arrayClass(5);
	Array<int>			arrayInt(3);
	Array<std::string>	arrayString(10);
	Array<int>			empty;

	std::cout << " -- Testing simple arrays --" << std::endl;
	arrayInt[2] = 2022;
	arrayString[9] = "Testing some string";
	std::cout << arrayInt[2] << std::endl << arrayString[9] << std::endl << std::endl;
	std::cout << "-------------------" << std::endl;

	std::cout << " -- Testing arrayClass array --" << std::endl;
	std::cout << arrayClass[4].getNumber() << std::endl << std::endl;
	std::cout << "-------------------" << std::endl;

	std::cout << " -- Testing array size --" << std::endl;
	std::cout << empty.size() << std::endl;
	std::cout << arrayInt.size() << std::endl;
	std::cout << arrayString.size() << std::endl;
	std::cout << arrayClass.size() << std::endl << std::endl;
	std::cout << "-------------------" << std::endl;

	std::cout << " -- Testing operator = --" << std::endl;
	std::cout << "Empty size before:" << std::endl;
	std::cout << empty.size() << std::endl;
	std::cout << "assigning arrayInt to empty" << std::endl;
	empty = arrayInt;
	std::cout << "Empty size after:" << std::endl;
	std::cout << empty.size() << std::endl;
	std::cout << "Values of empty[2] and arrayInt[2]:" << std::endl;
	std::cout << empty[2] << " and " << arrayInt[2] << std::endl;
	std::cout << "changing value of empty[2]" << std::endl;
	empty[2] = 999;
	std::cout << "Values of empty[2] and arrayInt[2]:" << std::endl;
	std::cout << empty[2] << " and " << arrayInt[2] << std::endl << std::endl;;
	std::cout << "-------------------" << std::endl;

	std::cout << " -- Testing exceptions --" << std::endl;
	try 
	{
		std::cout << arrayInt[10] << "This should not be printed ;)" << std::endl;
	}
	catch(std::exception &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	try {
		std::cout << arrayClass[-1].getNumber() << "This should not be printed ;)" << std::endl;
	}
	catch(std::exception &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	return (0);
}