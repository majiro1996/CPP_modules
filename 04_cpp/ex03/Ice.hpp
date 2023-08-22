/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:40:19 by manujime          #+#    #+#             */
/*   Updated: 2023/08/22 11:40:38 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>

class Ice : public AMateria
{
	protected:

	public:
		Ice(void);
		Ice(Ice const &source);
		virtual ~Ice(void);

		Ice		&operator=(Ice const &source);

		AMateria	*clone(void) const;
		void		use(ICharacter &target);
};

#endif