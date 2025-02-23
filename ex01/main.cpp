/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidy <sidy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 13:03:17 by sidy              #+#    #+#             */
/*   Updated: 2025/02/23 20:01:02 by sidy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
int main() 
{
    int N = 0;
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