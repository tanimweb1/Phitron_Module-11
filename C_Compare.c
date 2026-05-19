#include<stdio.h>
#include<string.h>
int main(){

    char a[21],b[21];
    scanf("%s %s",a,b);

   int comp = strcmp(a,b);

    if(comp==0){
        printf("%s\n",a);
    }
    else if(comp>0){
        printf("%s\n",b);
    }


    else if(comp<0){
        printf("%s\n",a);
    }

return 0;
}