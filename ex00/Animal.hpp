/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:26:34 by aibn-che          #+#    #+#             */
/*   Updated: 2024/10/07 12:41:04 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Animal
{
	protected:
		string type;
	public:
		Animal(void);
		virtual ~Animal(void);
		Animal(string type);
		Animal(const Animal &a);
		Animal &operator=(const Animal &a);

		void virtual makeSound(void) const;
		string getType(void) const;
};

#endif