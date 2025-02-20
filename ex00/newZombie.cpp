/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:38:19 by sidiallo          #+#    #+#             */
/*   Updated: 2025/02/20 17:32:51 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie* Zombie::newZombie( std::string nameZombie )
{
    Zombie* newZombie  = new Zombie();
    newZombie->name = nameZombie; 
    return(newZombie);
}
