#include <stdio.h>

int sum(int numberOne, int numberTwo){
    return numberOne + numberTwo;
}

int divide(int numberOne, int numberTwo){
    return numberOne / numberTwo;
}

int multiplicate (int numberOne, int numberTwo){
    return numberOne * numberTwo;
}

int subtraction(int numberOne, int numberTwo){
    return numberOne - numberTwo;

}

int main(void){
    int firstNumber, secNumber, operationType, result;
    printf("Hello, sweetheart. I am here to help with any operation types!, let's first tell what kind of operation you want to do!\n");
    printf("0 - SUM \n 1 - SUBTRACTION \n 2 - DIVISION \n 3 - MULTIPLICATION \n (Type the number of operation and tell enter.)\n");
    scanf("%d", &operationType);
    if(operationType == 0){
        printf("Nice, so you choose SUM! Now please, tell me two numbers, ok\n?");
    }
        else if(operationType == 1){
                printf("Nice, so you choose SUBTRACTION! Now please, tell me two numbers, ok?\n");
        }
        else if(operationType == 2){
            printf("Nice, so you choose DIVISION! Now please, tell me two numbers, ok?\n");
        }
        else if(operationType == 3){
            printf("Nice, so you choose MULTIPLICATION! Now please, tell me two numbers, ok?\n");
        }
        else{
            printf("Not a valid option, exiting program.\n");
            return 0;
        }
        
    
    scanf("%d", &firstNumber);
    scanf("%d", &secNumber);
    
    if(operationType == 0){
        result = sum(firstNumber, secNumber);
        printf("The result of your operation is equal to: %d" , result);
    }
        else if(operationType == 1){
            result = subtraction(firstNumber, secNumber);
            printf("The result of your operation is equal to: %d" , result);
        }
        else if(operationType == 2){
            result = divide(firstNumber, secNumber);
            printf("The result of your operation is equal to: %d" , result);
        }
        else if(operationType == 3){
            result = multiplicate(firstNumber, secNumber);
            printf("The result of your operation is equal to: %d" , result);
        }

    else{
        printf("Not valid numbers, exiting program.\n");
    }
}

