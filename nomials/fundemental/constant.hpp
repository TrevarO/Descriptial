#ifndef CONSTANT
#define CONSTANT
#include "..\..\nomial.hpp"
template<class T>
class constant : public nomial<T>
{
public:
	T value;
	constant(T param)
	{
		value=param;
	}
	virtual T eval(T)
	{
		return(value);
	}
	virtual constant * clone() const
	{
		return(new constant(value));
	}
};
#endif
