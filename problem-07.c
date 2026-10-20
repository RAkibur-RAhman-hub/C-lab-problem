#include<stdio.h>
int main(){
    int n, temp;

    //input size of array
    printf("Enter the size of elements: ");
    scanf("%d",&n);

    int arr[n];

    //input elements of array
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    //sorting array in ascending order
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    //output sorted array
    printf("Array in ascending order: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}