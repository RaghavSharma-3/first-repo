#include <stdio.h>
int main(){
    // insertion at beginning
    int a[8]={10,20,30,40,50,60,70};
    int size=8;
    // traversing before inserting new number
    for(int i=0;i<8;i++){
        printf("%d\n",a[i]);
    }

    // shifting all elements to adj right
    for(int i=8;i>=0;i--){
        a[i]=a[i]-1;
    }
}