#pragma once

namespace math
{
	template <typename T, char n>
	struct Vector<T, n>
	{
		T data[n];

		static const int Size = n;

		Vector<T, n>();
		Vector<T, n>(const T &lhs);
		Vector<T, n>(const T &lhs[n]);

		std::string ToString() const; 
	};

	template <typename T, char n>
	T dot(const Vector<T, n> &lhs, const Vector<T, n> &rhs); 
}
