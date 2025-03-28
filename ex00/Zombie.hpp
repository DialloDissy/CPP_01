/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidy <sidy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 16:09:18 by sidiallo          #+#    #+#             */
/*   Updated: 2025/02/23 19:07:20 by sidy             ###   ########.fr       */
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
    
    void randomChump( std::string name );
    Zombie* newZombie( std::string nameZombie );

#endif