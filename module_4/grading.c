    #include <stdio.h>

    int main() {
        int marks;
        scanf("%d",&marks);

        if(marks >= 33 && marks<=100){
           

            printf("You have passed\n");

            if(marks>=80 && marks <=100){
                printf("You have got A+\n");
                if(marks>=90){
                    printf("congratulation, you you have got scholarship\n");
                }
            }
            else if(marks>=70 && marks <= 79){
                printf("You have got A grade");
            }
            else if(marks>=60 && marks <= 69){
                printf("You have got A- garde");
            }
            else if(marks>=50 && marks<=59){
                printf("You have got B garde");
            }
            else if( marks >= 40 && marks <=49){
                printf("You have got C grade");         
            }
            else if (marks >= 33&& marks <=39 ){
                printf("You have got D grade");
            }

          else if(marks<=32 && marks>=0){
            printf("Sorry you failed.Try again harder");
          }  

        else {
            printf("invalid number");
        }
        return 0;
    }
    }