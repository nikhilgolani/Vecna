// This code should print out the prime numbers.
// Task: Fix and improve the algorithm

#include <iostream>
int main() {
	std::cout << "Printing primes from 1 to 100" << std::endl;
  int i;
  int j;
  bool prime;
  for (i = 2; i <= 100; i++) 
	{
  	prime = true;
        
	//If it is an even number other than 2, dont check for prime
  	if( (i & 1) == 0 && i > 2)
		{  
     	prime=false;	
    }	
        
		// checking against divisors less than or equal to the square root of the number should suffice 
		// to check if the number is prime or not	
		else 
		{
    	for ( j = 2; j*j <= i; j++ ) 
			{
   	  	if (i % j == 0) 	
					{
          	prime = false; 
            break;
          }
       }	
   }
        
		if (prime) 
		{
    	std::cout << i << " ";
    }
  }
	
	std::cout << std::endl;	
  return 0;
}
