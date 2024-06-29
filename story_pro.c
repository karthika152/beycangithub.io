#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char n1[20],p[20],n2[20];
    printf("Enter your name");
    scanf("%s",&n1);


    printf("Hello %s, tell me your native place",n1);
    scanf("%s",&p);

    printf("%s Please tell me your good friend name");
    scanf("%s",n2);


    printf("%s and %s are good friends, one day they planned to visit %s",n1,n2,p);
    getch();

}
