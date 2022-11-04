#include<stdio.h>
#include<stdlib.h>

void swap(int * x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void bs(int arr[5]){
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
            
        }
        
    }
    
}

void print(int arr[5]){
    for (int i = 0; i < 5; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    
}
int main(){
    int arr[5]={5,7,6,4,2};
    bs(arr);
    print(arr);
return 0;
}