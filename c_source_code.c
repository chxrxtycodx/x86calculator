#include <stdio.h>
#include <math.h>

int main() {
    int num1, num2;
    int operation;
    
    printf("Enter two numbers ");
    scanf("%d %d", &num1, &num2);

    printf("Enter number to select operation\n\t1 for Division (A / B = result, discard remainder\r\t2 for A modulo B\n\tor\r\t3 for(A + B)/2, round down \n");
    scanf("%d", &operation);
    
    // OPTION 1 -> perform common operations
    int quot = num1 / num2;
    int rem = num1 % num2;
    int ave = floor((num1 + num2)/2);
    
    
    if (operation == 1){
        printf("%d / %d is %d \n", num1, num2, quot);
    }else if(operation == 2){   
        printf("rem dividing %d by %d is %d  \n", num1, num2,rem);
    }else{   
        printf("ave of %d and %d is %d \n", num1, num2,ave);
    }
    
    return 0;
}
