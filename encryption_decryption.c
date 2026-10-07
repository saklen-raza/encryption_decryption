#include <stdio.h>
#include <string.h>

int main()
{
    char pwd[20];
    char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
    int num[20], i, n, key;

    printf("Enter the password: ");
    scanf("%s", pwd);

    n = strlen(pwd);

    printf("Enter the key: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        num[i] = (pwd[i] - 'a' + key) % 26;
    }

    printf("Encrypted password: ");

    for (i = 0; i < n; i++)
    {
        printf("%c", alpha[num[i]]);
    }

    return 0;
}