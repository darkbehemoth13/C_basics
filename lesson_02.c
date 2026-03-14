#include <stdio.h>

 int sum (int num1, int num2){
    return num1 + num2;
}

int main(){
    int num1, num2;
    printf("Please, tell me two numbers, I will sum them for you!\n");
    scanf("%d %d", &num1, &num2);
    int result = sum(num1, num2);
    printf("The sum of these two numbers is equal to: %d", result);
    return 0;
}