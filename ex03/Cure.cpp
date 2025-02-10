/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 10:57:29 by aibn-che          #+#    #+#             */
/*   Updated: 2024/10/06 17:26:10 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cure.hpp"

Cure::Cure(void):AMateria("")
{
	this->type = "cure";
}

AMateria*Cure::clone() const
{
	Cure *a = new Cure();
	return (a);
}

void Cure::use(ICharacter& target)
{
	cout << "* heals "<< target.getName() << "’s wounds *" << endl;
}

Cure::Cure(const Cure &i):AMateria("")
{
	cout << "Copy Constructor " << this->type << endl;
	*this = i;
}

Cure&Cure::operator=(const Cure &a)
{
	cout << "Copy assignment operator called" << this->type << endl;
	if (this != &a)
	{
		this->type = a.getType();
	}
	return *this;
}
