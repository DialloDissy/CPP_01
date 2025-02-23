/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidy <sidy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 13:04:52 by sidy              #+#    #+#             */
/*   Updated: 2025/02/23 18:52:29 by sidy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
    public:
        Zombie();
        void announce();
        std::string getName()const;
        void setName(std::string name);
        ~Zombie();
        
        private:
        std::string name;
        
        
    };
    
    Zombie* zombieHorde( int N, std::string name );
    

#endif