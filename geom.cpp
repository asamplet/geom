#include <cstring>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a[100], b[100], emp[] = "\0";
    int i;
    scanf("%s", a);
    for (i = 0; i < 100; i++) {
        if (a[i] == '(')
            break;
        b[i] = a[i];
    }
    strcat(b, emp);
    if (strcmp(b, "circle") == 0)
        printf("%s", b);

    return 0;
}
