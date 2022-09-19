#include<stdio.h>

 void display(int arr[], int n){
    
    for(int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int IndDelection(int arr[], int size, int index){
    
    
    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i+1];
         
         

    }
    
}
int main()
{
int arr[100]={1, 2, 6,48, 78};
int size = 5,   index = 3;

display (arr, size);
IndDelection(arr, size, index);
size -=1;
display (arr, size);
}