#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"

class Cat : public AAnimal
{

public:

	Cat( void );
	Cat( const Cat &source );
	~Cat( void );

	Cat&	operator=(const Cat& source);

	virtual void	makeSound( void ) const;
	Brain&			getBrain(void) const;

private:

	Brain	*brain;

};

#endif
