//Array size 4 and perform addiction of all element 

#include <stdio.h>

int main() {
   
    int arr[4] = {10, 20, 30, 40};
    int sum = 0;


    for (int i = 0; i < 4; i++) {
        sum += arr[i];
    }

   
    printf("Sum: %d\n", sum);

    return 0;
}