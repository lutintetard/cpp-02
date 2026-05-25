#ifndef FIXED_HPP
# define FIXED_HPP

class	Fixed
{
public:
	Fixed(void);
	Fixed(Fixed copy);
	~Fixed(void);
	int	Fixed::getRawBits(void) const;
	int	Fixed::setRawBits(void);
private:
	int	_fixed-point;
}

static int const	fractionnal;

#endif
