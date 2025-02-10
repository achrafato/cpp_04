/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:45:53 by aibn-che          #+#    #+#             */
/*   Updated: 2024/09/16 16:51:47 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./AAnimal.hpp"

AAnimal::AAnimal(void)
{
	this->type = "AAnimal";
	cout << "Default Constructor " << this->type << endl;
}

AAnimal::~AAnimal(void)
{
	cout << "Destructor " << this->type << " AAnimal" << endl;
}

AAnimal::AAnimal(string type)
{
	cout << "Constructor " << this->type << endl;
	this->type = type;
}

AAnimal::AAnimal(const AAnimal &a)
{
	cout << "Copy Constructor " << this->type << endl;
	this->type = a.type;
}

AAnimal &AAnimal::operator=(const AAnimal &a)
{
	cout << "Copy assignment operator called " << this->type << endl;
	this->type = a.type;
	return *this;
}

string AAnimal::getType(void) const
{
	return this->type;
}
