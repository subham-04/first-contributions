#include <stdio.h>

void printArray(int* A, int n){
    printf("\n");
    for(int i=0; i<n; i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

void bubbleSort(int* A, int n){
    int temp;
    int sorted=0;
    for (int i = 0; i < n-1; i++)
    {
        sorted=1;
        for (int j = 0; j < n-1-i; j++)
        {
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                sorted=0;
            }
        }
        if (sorted)
        {
            return;
        }
        
    }
}

int main(){
    int A[] ={2, 3, 0, 4, 6, 8, 12};
    int n=7;
    bubbleSort(A,n);
    printArray(A,n);

}