/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 13:03:17 by sidy              #+#    #+#             */
/*   Updated: 2025/03/24 15:29:15 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
int main() 
{
    int N = 50;
    Zombie* horde = zombieHorde(N,"gims");

    if (horde) 
    {
        for (int i = 0; i < N; i++) 
        {
            horde[i].announce();
        }

        delete[] horde;
    }

    return 0;
}