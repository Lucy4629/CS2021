#include <stdio.h>

int main(void){

    char ch;

<<<<<<< HEAD
    printf("문자 입력 : A");
    printf("%c문자의 아스키 코드 값은 %d입니다.", ch);
    scanf ("%c", ch);
    printf("%d", ch);

    printf("문자 입력 : B");
    printf("%c문자의 아스키 코드 값은 %d입니다.", ch);
    scanf ("%c", ch);
    printf("%d", ch);

=======
    printf("문자 입력 : ");

    scanf ("%c", &ch);
    printf("%c문자의 아스키 코드 값은 %d입니다.\n", ch, ch);
>>>>>>> b0f9b819169812c30f6d0afb4327b1a8c6e13773

    return 0;

}