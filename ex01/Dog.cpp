/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:29:03 by aibn-che          #+#    #+#             */
/*   Updated: 2024/10/07 14:57:25 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	this->brain = NULL;
	cout << "Default Constructor (Dog)" << endl;
}

Dog::~Dog(void)
{
	cout << "Destructor (Dog)" << endl;
	if (this->brain)
		delete this->brain;
}

Dog::Dog(string type)
{
	cout << "Constructor (Dog)" << endl;
	this->type = type;
	this->brain = new Brain();
}

Dog::Dog(const Dog &a)
{
	cout << "Copy Constructor " << this->type << endl;
	*this = a;
}

Dog &Dog::operator=(const Dog &a)
{
	cout << "Copy assignment operator called (Dog)" << endl;
	if (this != &a)
	{
		if (this->brain)
			delete this->brain;
		this->type = a.type;
		this->brain = new Brain(*(a.brain));
	}
	return *this;
}

void Dog::makeSound(void) const
{
	cout << this->type << " Bark" << endl;
}

string Dog::getType(void) const
{
	return this->type;
}
