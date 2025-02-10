/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:58:12 by aibn-che          #+#    #+#             */
/*   Updated: 2024/10/05 17:19:15 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./AMateria.hpp"

AMateria::AMateria(string const &type)
{
	this->type = type;
}

string const AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	cout << "AMateria type : " << this->type << "target : " << target.getName() << endl;
}

AMateria::~AMateria(){}
