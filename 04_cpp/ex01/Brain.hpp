/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 13:34:13 by manujime          #+#    #+#             */
/*   Updated: 2023/08/31 19:41:38 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	public:
		Brain(void);
		Brain(Brain const & source);
		~Brain(void);

		Brain 	&operator=(Brain const & source);

		std::string	getIdea(int index) const;
		void		setIdea(int index, std::string idea);

	private:
		std::string	_ideas[100];

};

#endif