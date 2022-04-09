#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain
{

public:

	Brain( void );
	Brain( const Brain& source );
	~Brain( void );

	Brain&  operator=( const Brain& source );
	void setIdea(int index, std::string idea);
	std::string getIdea(int index);

private:

	static const int	ideasNum = 100;
	std::string		ideas[ideasNum];
};

#endif
