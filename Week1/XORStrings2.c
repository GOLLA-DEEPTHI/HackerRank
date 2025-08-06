#include <stdio.h>


int main() {
    char s[100], t[100];
    scanf("%s", s);
    scanf("%s", t);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == t[i])
            s[i] = '0';
        else
            s[i] = '1';
    }

    printf("%s\n", s);
    return 0;
}
