/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidy <sidy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:38:19 by sidiallo          #+#    #+#             */
/*   Updated: 2025/02/23 19:05:59 by sidy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie* newZombie( std::string nameZombie )
{
    Zombie* newZombie  = new Zombie();
    newZombie->setName(nameZombie);
    return(newZombie);
}
