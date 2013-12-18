#include <stdio.h>

int main(){
    int sum = 0;
    int first = 0;
    int second = 1;
    int swap = 0;
    
    while (second < 4000000) {
        second += first;
        first = second - first;
        if (second%2 == 0){
            sum += second;
        }
    }
    
    printf("%d\n", sum);
}