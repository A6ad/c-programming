#include <stdio.h>
int arr[1000];
int main() {
    int n=5,index,value;
    int arr[1000]={1,2,3,4,5};

    printf("Enter index and value\n");

    scanf("%d %d",&index,&value);
    n++;  //step 1(incriminting array size by 1)

    for(int i=n-1;i>=index;i--){
        arr[i+1]=arr[i];                //step 2(shifting starts from index and ends in last element
                                        //(last element = array size - 1)
     }

     arr[index]=value;                 //step 3

for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}

 
return 0;
}