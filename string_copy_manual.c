#include<stdio.h>
#include<string.h>

int main(){

    //string copy
    char a[101];
    scanf("%s",&a);
    char b[101];
scanf("%s",b);
    int ln = strlen(a);

    for(int i = 0;i<=ln;i++){
        b[i] = a[i];
    }

 
        printf("%s %s", b,a);
    

return 0;
}
