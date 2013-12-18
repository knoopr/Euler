#include <stdio.h>
#include <math.h>
void main(){
    int i = 0;
    int j = 0;
    int k = 1;
    int largePal = 0;
    int digits[10] = {0};
    int product = 0;
    int palTrue = 1;
    int ndigits = 0;
    int calc = 0;
    
    /*I don't imagine there won't be a palindromic number that matters below 900*/
    for (i = 900; i < 1000; i++){
        for(j = 900; j < 1000; j ++){
            palTrue = 1;
            product = i * j;
            
            for (k = 0; k < 10; k++){
                digits[k] = 0;
            }
            k = 1;
            
            
            calc = product;
            while (product > (int)pow(10,k-1))
            {
                digits[k-1] = calc % 10;
                calc /= 10;
                k++;
            }
            
            ndigits = floor(log10(product))+1;
            
            for (k = 0; k <= ndigits/2 ; k++)
            {
                if (digits[k] != digits[ndigits-k-1]){
                    palTrue = 0;
                    break;
                    }
            }
            
            if (palTrue == 1 && product > largePal)
            {
                largePal = product;
            }
            
        }
    }
    printf("%d\n", largePal);
}