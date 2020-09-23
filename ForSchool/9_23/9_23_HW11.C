#include <stdio.h>
int main()
{
       int id, pass;

       printf("아이디와 패스워드를 4개의 숫자로 입력하십시오:");

       printf("id: ____ \b\b\b\b\b");
       scanf("%d", &id);

       printf("pass: ____ \b\b\b\b\b");
       scanf("%d", &pass);
       printf("\a입력된 아이디는 \"%d\"이고 패스워드는 \"%d\"입니다.", id, pass);

       return 0;
}