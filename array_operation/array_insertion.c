    #include <stdio.h>
    int a[10000];
    int main() {
    int length;
      printf("input array length: ");
      scanf("%d",&length);
      for(int i=0;i<length;i++){
        scanf("%d",&a[i]);
    }

        int index,value;
        scanf("%d %d",&value,&index); //in which position i want to insert and the value i want to insert
      length++;                        //making a gap
      
                            
      for(int i=length-1;i>index;i--){
        a[i-1]=a[i];                    //shifting
    }
        a[index]=value;                 //adding the value in the index
     for(int i=0;i<length;i++){
         printf("%d ",a[i]);
    }
   return 0;
    }