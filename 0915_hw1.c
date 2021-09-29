#include <stdio.h>

int main(void){

    char ch;

    printf("문자 입력 : A");
    printf("%c문자의 아스키 코드 값은 %d입니다.", ch);
    scanf ("%c", ch);
    printf("%d", ch);

    printf("문자 입력 : B");
    printf("%c문자의 아스키 코드 값은 %d입니다.", ch);
    scanf ("%c", ch);
    printf("%d", ch);


    return 0;

}