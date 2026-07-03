/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedroso <fpedroso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 19:55:39 by fpedroso          #+#    #+#             */
/*   Updated: 2026/07/02 19:55:39 by fpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
	private:
		std::string	type;

	public:
		Dog();
		Dog( const Dog& dog );
		~Dog();
		Dog&	operator=( const Dog& rhs );

		void	makeSound() const;
		std::string	getType() const;

};

#endif
