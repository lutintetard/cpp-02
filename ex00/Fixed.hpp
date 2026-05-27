/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfournea <lfournea@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 12:36:37 by lfournea          #+#    #+#             */
/*   Updated: 2026/05/27 12:53:55 by lfournea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <iostream>

class	Fixed
{
public:
	Fixed(void);
	Fixed(Fixed const &copy);
	Fixed &operator=(const Fixed& other);
	~Fixed(void);
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
private:
	int	_fixedpoint;
	static int const	fractionnal;
};

#endif
