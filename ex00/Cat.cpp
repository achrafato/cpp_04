/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:45:32 by aibn-che          #+#    #+#             */
/*   Updated: 2024/10/07 12:21:13 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
    this->type = "Cat";
	cout << "Default Constructor (Cat)" << endl;
}

Cat::~Cat(void)
{
	cout << "Destructor (Cat)" << endl;
}

Cat::Cat(string type)
{
	cout << "Constructor (Cat)" << endl;
	this->type = type;
}

Cat &Cat::operator=(const Cat &a)
{
	cout << "Copy assignment operator called (Cat)" << endl;
	this->type = a.type;
	return *this;
}

Cat::Cat(const Cat &c)
{
	cout << "Copy Constructor " << this->type << endl;
	this->type = c.type;	
}

void Cat::makeSound(void) const
{
	cout << this->type << " Meows" << endl;
}

string Cat::getType(void) const
{
	return this->type;
}
