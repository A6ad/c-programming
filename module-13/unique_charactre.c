#include <stdio.h>
#include<string.h>
int main()
{
   char str[10] = "apple"; 
   int f[26] = {0};
   int len =strlen(str);

   for(int i=0;i<len;i++){
    char ch = str[i];       //taking each value from string   
    int index = ch - 'a';  //changing string to index
    f[index]= 1;          //updating frequency to 1
   }

   for(int i=0;i<26 ;i++){
     if(f[i] == 1){
    printf("%c %d\n",i+'a',f[i]);
    }
   } 

    return 0;
}