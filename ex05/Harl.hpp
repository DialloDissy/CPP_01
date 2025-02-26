/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:04:43 by sidiallo          #+#    #+#             */
/*   Updated: 2025/02/26 18:13:28 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
    public:
        Harl();
        void complain( std::string level );
        ~Harl();
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
};



#endif 