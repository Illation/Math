#include "Vector.h"
#include <string>

// CONSTRUCTORS
//**************
template <typename T, char n>
math::Vector<T, n>::Vector()
{
	for(char i = 0; i < n; ++i) data[i] = 0;
}
template <typename T, char n>
math::Vector<T, n>::Vector(const T &lhs)
{
	for(char i = 0; i < n; ++i) data[i] = lhs;
}
template <typename T, char n>
math::Vector<T, n>::Vector(const T &lhs[n])
{
	for(char i = 0; i < n; ++i) data[i] = lhs[i];
}

// METHODS
//*********
template <typename T, char n>
std::string math::Vector<T, n>::ToString()
{
	std::string ret = "[" + std::string(data[0]);
	for(int i = 1; i < n; ++i)
	{
		ret += ", " + std::string(data[i]);	
	}
	ret += "]"
	return ret;
}

// FUNCTIONS
//***********
template <typename T, char n>
T math::dot(const Vector<T, n> &lhs, const Vector<T, n> &rhs) 
{
	T ret = 0;
	for(int i = 0; i < n; ++i) ret += lhs.data[i] * rhs.data[i];
	return ret;
}
