/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 10:36:14 by aibn-che          #+#    #+#             */
/*   Updated: 2024/10/08 10:08:25 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Ice.hpp"

Ice::Ice(void):AMateria("")
{
	this->type = "ice";
}

Ice::Ice(string const &type):AMateria(type)
{
	this->type = type;
}

AMateria*Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	cout << "* shoots an ice bolt at " << target.getName() << " *" << endl;
}

Ice::Ice(const Ice &i):AMateria(i.type)
{
	cout << "Copy Constructor " << this->type << endl;
	*this = i;
}

Ice&Ice::operator=(const Ice &a)
{
	cout << "Copy assignment operator called" << this->type << endl;
	if (this != &a)
	{
		this->type = a.getType();
	}
	return *this;
}
