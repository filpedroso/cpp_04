/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedroso <fpedroso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 20:32:27 by fpedroso          #+#    #+#             */
/*   Updated: 2026/07/02 20:32:27 by fpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	private:
		std::string	type;

	public:
		WrongAnimal();
		WrongAnimal( const WrongAnimal& wanim );
		~WrongAnimal();
		WrongAnimal&	operator=( const WrongAnimal& rhs );

		void		makeSound() const;
		std::string	getType() const;
};

#endif
