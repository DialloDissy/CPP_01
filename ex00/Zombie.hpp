/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 16:09:18 by sidiallo          #+#    #+#             */
/*   Updated: 2025/02/20 19:12:26 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
    public:
        Zombie();
        Zombie* newZombie( std::string nameZombie );
        void announce();
        void randomChump( std::string name );
        std::string getName()const;
        void setName(std::string name);
        ~Zombie();
        
    private:
        std::string name;
        int nbr;
      
};

#endif