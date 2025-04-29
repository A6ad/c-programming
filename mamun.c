#include <stdio.h>
#include<string.h>
int main() {
    char str[20]= "mamun69";
   int sz = strlen(str);
    int flag = 0;
    int vowel_count = 0;
    int consonant_count = 0;
    int special =0;
 for(int i=0;i<sz;i++)
 {
    if((str[i] == 'a') || (str[i]=='e') || (str[i] =='i') || (str[i] == 'o') || (str[i] == 'u'))
    vowel_count ++;
    
    else if(str[i] >= 0 && str[i]<=64) 
    special++;

    else
    consonant_count++;
 }
 printf("total count : %d\n",sz);
printf(" vowel count=%d\n",vowel_count);
printf("consonat = %d\n",consonant_count);
printf("special : %d",special);
    
    return 0;
}