/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:29:03 by aibn-che          #+#    #+#             */
/*   Updated: 2024/10/04 09:47:51 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	cout << "Default Constructor (Dog)" << endl;
}

Dog::~Dog(void)
{
	cout << "Destructor (Dog)" << endl;
}

Dog::Dog(string type)
{
	cout << "Constructor (Dog)" << endl;
	this->type = type;
}

Dog &Dog::operator=(const Dog &a)
{
	cout << "Copy assignment operator called (Dog)" << endl;
	this->type = a.type;
	return *this;
}

Dog::Dog(const Dog &c)
{
	cout << "Copy Constructor " << this->type << endl;
	this->type = c.type;	
}

void Dog::makeSound(void) const
{
	cout << this->type << " Bark" << endl;
}

string Dog::getType(void) const
{
	return this->type;
}