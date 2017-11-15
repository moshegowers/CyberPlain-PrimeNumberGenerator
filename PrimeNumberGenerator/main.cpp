#include <iostream>
#include "PrimeNumberGenerator.h"

void main(void)
{
	for (size_t i = 0; i < 10; i++)
	{
		std::cout << PrimeNumberGenerator::getNextPrime() << std::endl;
	}
}