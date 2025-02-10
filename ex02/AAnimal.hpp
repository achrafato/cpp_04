/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:45:42 by aibn-che          #+#    #+#             */
/*   Updated: 2024/09/16 17:26:35 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class AAnimal
{
	protected:
		string type;
	public:
		AAnimal(void);
		virtual ~AAnimal(void);
		AAnimal(string type);
		AAnimal(const AAnimal &a);
		AAnimal &operator=(const AAnimal &a);

		void virtual makeSound(void) const = 0;
		string getType(void) const;
};

#endif