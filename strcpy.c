#include<stdio.h>
#include<string.h>
int main(){

    // string copy with build in function

    char s[101],t[101];
    scanf("%s %s",s,t);

strcpy(t,s);
printf("%s %s",t,s);



return 0;
}