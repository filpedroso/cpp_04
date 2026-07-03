/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedroso <fpedroso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 19:18:54 by fpedroso          #+#    #+#             */
/*   Updated: 2026/07/02 19:18:54 by fpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	private:
		std::string	type;

	public:
		Animal();
		Animal( const Animal& anim );
		virtual ~Animal();
		Animal&	operator=( const Animal& rhs );

		virtual void		makeSound() const;
		virtual std::string	getType() const;
};

#endif
