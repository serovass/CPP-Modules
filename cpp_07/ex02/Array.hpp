#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>


template<typename T>
class Array
{

public:

	Array<T>( void ): arraySize(0), arrayT(nullptr)
	{
	}
//-----------

	Array<T>( const unsigned int arraySize ): arraySize(arraySize)
	{
		if (arraySize < 0)
			throw std::overflow_error("Index out of bounds");
		else if (arraySize == 0)
			this->arrayT = nullptr;
		else
			this->arrayT = new T[arraySize];
	}
//-----------

	Array<T>( const Array<T> &src )
	{
		*this = src;
	}
//-----------

	~Array<T>( void )
	{
		if (this->arraySize > 0)
			delete [] this->arrayT;
	}

//---------------------- = [] ------------------------

	Array<T>    &operator=( const Array<T> &rhs )
	{
		if (this == &rhs)
			return *this;
            
		if (this->arraySize > 0)
			delete [] this->arrayT;

		this->arraySize = rhs.size();
		this->arrayT = new T[this->arraySize];
        
		for (int i = 0; i < this->arraySize; i++)
			this->arrayT[i] = rhs[i];

		return *this;
	}
//-----------

	T   &operator[](const int index) const
	{
		if (index >= this->arraySize || index < 0 || this->arrayT == nullptr)
			throw std::overflow_error("Index is out of bounds");

		return this->arrayT[index];
	}

//--------------------- size -----------------------------

	int			size( void ) const
	{
		return this->arraySize;
	}

private:
	int		arraySize;
	T		*arrayT;
};


#endif
