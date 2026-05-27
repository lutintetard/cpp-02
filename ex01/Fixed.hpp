/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfournea <lfournea@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 12:36:37 by lfournea          #+#    #+#             */
/*   Updated: 2026/05/27 13:26:13 by lfournea         ###   ########.fr       */
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
	Fixed(int const val);
	Fixed(float const val);
	Fixed(Fixed const &copy);
	Fixed &operator=(const Fixed& other);
	
	~Fixed(void);
	float	toFloat(void) const;
	int	toInt(void) const;
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
private:
	int	_fixedpoint;
	static int const	fractionnal;
};

#endif
