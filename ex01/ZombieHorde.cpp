/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidy <sidy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 13:09:19 by sidy              #+#    #+#             */
/*   Updated: 2025/02/23 18:55:09 by sidy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N <= 0)
        return(0);

    Zombie* horde = new Zombie[N];

    for (int i = 0; i < N; i++) 
    {
        horde[i].setName(name);
    }

    return (horde);
    
}
