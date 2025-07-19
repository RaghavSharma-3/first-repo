// wap to delete an element from the beginning of an array and display the before and after state of the array
#include <stdio.h>
int main()
{
    int arr[6] = {18, 13, 3, 2, 5, 7};
    int i, size=6;
    // displaying the array
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }

    for(i=0;i<size-1;i++){
        arr[i]= arr[i+1];    
    }

    size= size-1;
    // displaying after deletion
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }

}