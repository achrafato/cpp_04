/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:04:35 by aibn-che          #+#    #+#             */
/*   Updated: 2024/10/08 10:18:02 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Character.hpp"
#include <cstddef>


Character::Character(const std::string& name) : name(name)
{
	for (int i = 0; i < 214748; i++)
		p[i] = NULL;

	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character() : name("")
{
	for (int i = 0; i < 214748; i++)
		p[i] = NULL;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::~Character()
{
	AMateria** ptr = p;
	for (int i = 0; i < 214748; i++)
	{
		if (*ptr)
		{
			delete *ptr;
			*ptr = NULL;
		}
		else {
			break;
		}
		ptr++;
	}
}

string const&Character::getName() const
{
	return name;
}

void Character::equip(AMateria* m)
{
	int k = 0;
	for (int c = 0; c < 214748; ++c)
		if (p[c] == m)
			k = 1;
	int idxe = 0;
	if (!k) // only unique to avoid double free
	{
		while (idxe <= 214747)
		{
			if (!(p[idxe]))
			{
				p[idxe] = m;
				break ;
			}
			else if(idxe == 214747)
			{
				if (p[214747])
					delete p[214747];
				p[214747] = m;
			}
			idxe++;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && inventory[idx])
		if (inventory[idx])
			inventory[idx]->use(target);
}

Character::Character(const Character &i)
{
	cout << "Copy Constructor " << this->name << endl;
	*this = i;
}

Character&Character::operator=(const Character &a)
{
	int i = 0;
	cout << "Copy assignment operator called" << this->name << endl;
	if (this != &a)
	{
		if (*a.inventory)
		{
			while (i < 4)
				if (this->inventory[i++])
					delete this->inventory[i];
			i = 0;
			while (i < 4)
			{
				if (*a.inventory && a.inventory[i])
				{
					this->p[i] = a.inventory[i]->clone();
					this->inventory[i] = p[i];
				}
				i++;
			}
		}
		this->name = a.getName();
	}
	return *this;
}
