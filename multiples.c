#include <stdio.h>
// Function to find sum of multiples of 3 & 5 below 1000;
int main() {
    int i, n = 1000, sum=0;
    for (int i = 1; i < n ; i++){
        if ((i % 3 == 0) || (i % 5 == 0) ){
            sum += i;
        } 
    }
    printf("The sum is: %d", sum);
    return 0;
}
