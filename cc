#include <stdio.h>
int main(void)
{

    float num1, num2, num3;

    printf("3개의 실수를 입력하세요.");

    
    scanf("%f %f %f",&num1,&num2,&num3);

    if(num1 > num2 && num1 > num3){
        num1= num1+(num1/3);
        printf("%0.1f",num1);
    }
    else if(num2 > num1 && num2 > num3){
        num2 = num2+(num2/3);
        printf("%0.1f",num2);
    }
    else if(num3 > num1 && num3 > num2){
        num3 = num3+(num3/3);
        printf("%0.1f",num3);
    }
}
