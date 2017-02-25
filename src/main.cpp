//simple math library to be extended as needed

#include <iostream>

#include "Math.h"

int main(int argc, char *argv[])
{
	math::Vec3 test = math::Vec3();
	test.x = 1;
	test.y = 2;
	test.z = 3;

	std::cout << test.ToString() << std::endl;
	
	std::cin.get();
}
