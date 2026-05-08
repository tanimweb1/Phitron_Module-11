#include <stdio.h>
#include <string.h>

int main()
{

    // string concat with manual formula

    char s[101], t[101];
    scanf("%s %s", s, t);

    int sl = strlen(s);
    int tl = strlen(t);

    for (int i = 0; i <= tl; i++)
    {
        s[i + sl] = t[i];
    }

    printf("%s %s", s, t);

    return 0;
}
