/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedroso <fpedroso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 19:50:37 by fpedroso          #+#    #+#             */
/*   Updated: 2026/07/02 19:50:37 by fpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
	private:
		std::string	type;

	public:
		Cat();
		Cat( const Cat& cat );
		~Cat();
		Cat&	operator=( const Cat& rhs );

		void	makeSound() const;
		std::string	getType() const;

};

#endif
