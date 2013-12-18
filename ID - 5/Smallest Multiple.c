#include <stdio.h>

void main(){
    long int i = 5000;
    int j = 0;
    long int smallest = 0;
    int found = 1;
    
    
    while (smallest == 0)
    {
        found = 1;
        for (j = 20; j > 0; j--)
        {
            if (i%j != 0)
            {
                found = 0;
                i++;
                break;
            }
        }
        
        if (found == 1)
        {
            smallest = i;
            break;
        }
    }
    
    printf("%ld\n", smallest);
    
}