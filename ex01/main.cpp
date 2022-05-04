/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 18:23:57 by ldurante          #+#    #+#             */
/*   Updated: 2022/05/04 22:30:06 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
	private:
	int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template <typename T>
void printValues(T const &value)
{
	std::cout << value << std::endl;
}

int main(void)
{
	int arrayInt[5] = {10, 8, 5, 6, 43};
	char arrayChar[6] = {'K', 'I', 'L', 'L', 'M', 'E'};

	std::string strTab[3];
	strTab[0] = "Hello";
	strTab[1] = "From";
	strTab[2] = "Hell";

	iter(arrayInt, 5, printValues);
	iter(arrayChar, 6, printValues);
	iter(strTab, 3, printValues);

	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];
	iter(tab, 5, printValues);
	iter(tab2, 5, printValues);
	return (0);
}
