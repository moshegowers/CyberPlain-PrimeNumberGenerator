#ifndef PRIME_MUBER_GENERATOR_H
#define PRIME_MUBER_GENERATOR_H

class PrimeNumberGenerator
{
public :
	static int getNextPrime();
private:
	PrimeNumberGenerator()
	{}
	static bool isPrime(int number);
	static int m_primeNumber;
};

#endif