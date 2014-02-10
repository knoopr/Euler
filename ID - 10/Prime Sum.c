#include <stdio.h>

int main()
{
    int potential_Primes[2000000];
    int i = 0, j = 0;
    long int prime_Sum = 0; /*needs to be long, was running into a bug before I realized it*/
    
    
    for (i = 0; i < 2000000; i++)
    {
        potential_Primes[i] = i;
    }
    

    
    /*going to the sqrt of 2,000,000 rounded to the nearest 1*/
    for (i = 2; i < 1414; )
    {
        /*removing all numbers that are multiples of that prime*/
        for (j= i+1; j < 2000000; j++)
        {
            if (potential_Primes[j] % i == 0)
            {
                potential_Primes[j] = 0;
            }
        }
        
        
        /*Getting the next prime to take out*/
        for (j = i+1; j < 2000000; j++)
        {
            if(potential_Primes[j] != 0)
            {
                i = j;
                break;
            }
        }
    }
    
    for (i = 2; i < 2000000; i++)
    {
        if (potential_Primes[i] != 0)
        {
            prime_Sum += i;
        }
    }
    
    printf("%ld\n", prime_Sum);
    
    
    return 0;
}