#include "PrimeNumberGenerator.h"

int PrimeNumberGenerator::m_primeNumber = 0;

int PrimeNumberGenerator::getNextPrime()
{
	while (!isPrime(++PrimeNumberGenerator::m_primeNumber))
	{
	}
	return PrimeNumberGenerator::m_primeNumber;
}

bool PrimeNumberGenerator::isPrime(int number)
{
	if (number == 2 || number == 3)
		return true;

	if (number % 2 == 0 || number % 3 == 0)
		return false;

	int divisor = 6;
	while (divisor * divisor - 2 * divisor + 1 <= number)
	{

		if (number % (divisor - 1) == 0)
			return false;

		if (number % (divisor + 1) == 0)
			return false;

		divisor += 6;

	}

	return true;

}
