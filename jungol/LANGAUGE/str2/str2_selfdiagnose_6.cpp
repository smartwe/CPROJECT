#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str1[21];
    char str2[21];

    scanf("%s %s", str1, str2);
    strncpy(str2, str1, 2);
    strncat(str2, str1, 2);

    printf("%s", str2);
}