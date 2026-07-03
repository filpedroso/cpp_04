/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedroso <fpedroso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 20:32:40 by fpedroso          #+#    #+#             */
/*   Updated: 2026/07/02 20:32:40 by fpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
		std::string	type;

	public:
		WrongCat();
		WrongCat( const WrongCat& wcat );
		~WrongCat();
		WrongCat&	operator=( const WrongCat& rhs );

		void	makeSound() const;
		std::string	getType() const;

};

#endif
