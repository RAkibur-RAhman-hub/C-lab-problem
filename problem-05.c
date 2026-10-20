#include<stdio.h>
#include<stdbool.h>

// Function to check if a number is prime
bool checkPrime(int num){
    if (num < 2) return false;
    for (int i = 2; i*i <= num; i++){
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;

    printf("Enter the value of n: \n");
    scanf("%d", &n);

    if (n <= 0){
        printf("Please enter a positive integer.\n");
        return 0;
    }

    printf("FIRST %d PRIME NUMBERS \n",n);

    int count = 0;
    int num = 2;

    while (count < n){
        if (checkPrime(num)){
            printf("%-8d ", num);
            count++;
        

        if (count % 5 == 0){
            printf("\n");
            }
        } 
        num++;
    }

    printf("\n");
    return 0;
}