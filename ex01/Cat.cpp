/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:45:32 by aibn-che          #+#    #+#             */
/*   Updated: 2024/10/07 14:57:50 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	this->brain = NULL;
	cout << "Default Constructor (Cat)" << endl;
}

Cat::~Cat(void)
{
	cout << "Destructor (Cat)" << endl;
	if (this->brain)
		delete this->brain;
}

Cat::Cat(string type)
{
	cout << "Constructor (Cat)" << endl;
	this->type = type;
	this->brain = new Brain();
}

Cat::Cat(const Cat &a)
{
	cout << "Copy Constructor " << this->type << endl;
	*this = a;
}

Cat &Cat::operator=(const Cat &a)
{
	cout << "Copy assignment operator called (Cat)" << endl;
	if (this != &a)
	{
		if (this->brain)
			delete this->brain;
		this->type = a.type;
		this->brain = new Brain(*(a.brain));
	}
	return *this;
}

void Cat::makeSound(void) const
{
	cout << this->type << " Meows" << endl;
}

string Cat::getType(void) const
{
	return this->type;
}
