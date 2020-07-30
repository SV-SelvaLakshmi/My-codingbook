#include<stdio.h>
int main(){
    char letter;int number;long number2;unsigned long number3;float number4;
    scanf("%c\n",&letter);
    scanf("%d\n",&number);
    scanf("%ld\n",&number2);
    scanf("%lu\n",&number3);
    scanf("%f",&number4);
    
    
    
    printf("%c\n",letter);
    printf("%d\n",number);
    printf("%ld\n",number2);
    printf("%lu\n",number3);
    printf("%.3f",number4);


    return 0;
}
