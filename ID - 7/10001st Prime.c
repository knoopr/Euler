#include <stdio.h>

int main(){
    long int i = 0;
    long int j = 0;
    int prime = 1;
    int primeCount = -2;
    
    for (i = 0 ; ; i++)
    {
        prime = 1;
        for (j = 2; j < i; j ++)
        {
            if(i%j == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime == 1){
            primeCount++;
            printf("%d:\t%ld\n", primeCount, i);
        }
        if (primeCount == 10001)
        {
            printf("\n\n%ld\n\n", i);
            break;
        }
    }
    return 0;
}