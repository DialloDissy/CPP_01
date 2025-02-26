/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:04:39 by sidiallo          #+#    #+#             */
/*   Updated: 2025/02/26 19:00:09 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

int main (int ac , char **av)
{
   if(ac == 2)
   {
        Harl action;
    
        std::string level = av[1];
        action.complain(level);
   }
   return(0); 
}