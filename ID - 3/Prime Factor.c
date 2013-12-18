#include <stdio.h>

int find_Prime(int startPrime, long int endNumb);


int main(){
    int i = 0;
    long int endNumb = 600851475143;
    int nextPrime = 2;
    
    for (i = 2; i< endNumb; i++ )
    {
        if (endNumb % nextPrime == 0)
        {
            endNumb /= nextPrime;
            if (endNumb == 1){
                printf("%d\n", nextPrime);
                break;
            }
        }
        else
        {
            nextPrime = find_Prime(nextPrime+1, endNumb);
        }
    }
    
    
    return 0;
}

int find_Prime(int startPrime, long int endNumb)
{
    int i = 0;
    int j = 0;
    int found = 1;
    
    for (i = startPrime; i < endNumb; i++)
    {
        found = 1;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)     /*if i isn't a prime*/
            {
                j = i;
                found = 0;
            }
        }
        if (found == 1) {
            return i;
        }
    }
    return i;
    
}