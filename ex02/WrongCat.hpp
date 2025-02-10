/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 09:42:24 by aibn-che          #+#    #+#             */
/*   Updated: 2024/09/16 14:43:54 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "./WrongAnimal.hpp"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		~WrongCat(void);
		WrongCat(string type);
		WrongCat(const WrongCat &w);
		WrongCat &operator=(const WrongCat &a);

		void makeSound(void) const;
		string getType(void) const;
};

#endif
