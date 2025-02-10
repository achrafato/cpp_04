/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:26:24 by aibn-che          #+#    #+#             */
/*   Updated: 2024/09/16 14:46:04 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal.hpp"

Animal::Animal(void)
{
	this->type = "Animal";
	cout << "Default Constructor (Animal)" << endl;
}

Animal::~Animal(void)
{
	cout << "Destructor (Animal)" << endl;
}

Animal::Animal(string type)
{
	cout << "Constructor (Animal)" << endl;
	this->type = type;
}

Animal &Animal::operator=(const Animal &a)
{
	cout << "Copy assignment operator called (Animal)" << endl;
	this->type = a.type;
	return *this;
}

Animal::Animal(const Animal &a)
{
	cout << "Copy Constructor " << this->type << endl;
	this->type = a.type;
}

void Animal::makeSound(void) const
{
	cout << "Animal sound!" << endl;
}

string Animal::getType(void) const
{
	return this->type;
}
