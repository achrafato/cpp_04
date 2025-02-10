/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:26:24 by aibn-che          #+#    #+#             */
/*   Updated: 2024/09/16 15:06:20 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal.hpp"

Animal::Animal(void)
{
	this->type = "Animal";
	cout << "Default Constructor " << this->type << endl;
}

Animal::~Animal(void)
{
	cout << "Destructor " << this->type << " animal" << endl;
}

Animal::Animal(string type)
{
	cout << "Constructor " << this->type << endl;
	this->type = type;
}

Animal::Animal(const Animal &a)
{
	cout << "Copy Constructor " << this->type << endl;
	this->type = a.type;
}

Animal &Animal::operator=(const Animal &a)
{
	cout << "Copy assignment operator called " << this->type << endl;
	this->type = a.type;
	return *this;
}

void Animal::makeSound(void) const
{
	cout << this->type << " sound!" << endl;
}

string Animal::getType(void) const
{
	return this->type;
}