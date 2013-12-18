#include <stdio.h>
#include <math.h>

void main(){
    int i =0;
    long int sumSquares = 0;
    long int squareSum = 0;
    
    for(i=0; i <= 100; i++)
    {
        sumSquares += pow(i, 2);
        squareSum += i;
    }
    
    squareSum = pow(squareSum,2);
    
    printf("%ld\n", squareSum - sumSquares);
    
}