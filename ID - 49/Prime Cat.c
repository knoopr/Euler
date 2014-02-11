#include <stdio.h>

int In_prime_list(int the_Number, int prime_Array[]);

int main()
{
    int potential_Primes[10000];
    int i = 0, j = 0, k = 0;
    int true_Primes[5000];
    
    
    for (i = 0; i < 10000; i++)
    {
        potential_Primes[i] = i;
    }
    

    
    /*going to the sqrt of 100 rounded to the nearest 1*/
    for (i = 2; i < 100; )
    {
        /*removing all numbers that are multiples of that prime*/
        for (j= i+1; j < 10000; j++)
        {
            if (potential_Primes[j] % i == 0)
            {
                potential_Primes[j] = 0;
            }
        }
        
        
        /*Getting the next prime to take out*/
        for (j = i+1; j < 10000; j++)
        {
            if(potential_Primes[j] != 0)
            {
                i = j;
                break;
            }
        }
    }
    j = 0;
    for (i = 1000; i < 10000; i++)
    {
        if (potential_Primes[i] != 0)
        {
            true_Primes[j] = i;
            j++;
        }
    }
    
    for (i = 0; i < 5000;i++)
    {
        for (j = i; j < 5000; j++)
        {
            if (true_Primes[i] +3330 == true_Primes[j])
            {
                for (k = j; k < 5000; k++){
                    if (true_Primes[j] +3330 == true_Primes[k])
                    {
                        printf("%d%d%d\n", true_Primes[i], true_Primes[j], true_Primes[k]);
                    }
                }
                
            }
        }
        
    }
    
    
    return 0;
}

int In_prime_list(int the_Number, int prime_Array[])
{
    int i = 0;
    
    for(i = 0; i < 5000; i++)
    {
        if (prime_Array[i] == the_Number)
        {
            return 1;
        }
    }
    
    return 0;
}