/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:40:49 by sidiallo          #+#    #+#             */
/*   Updated: 2025/02/20 19:15:43 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


void Zombie::randomChump( std::string name)
{
    Zombie theZombie;
    
    theZombie.setName(name);
    theZombie.announce();
}