#include <stdio.h>
#include <string.h>

char *strtrimc(char *s)
{
    char *p1 = s;
    char *p2 = s;
    while (*p1 != '\0')
    {
        while (*p1 == ' ' || *p1 == '\t')
        {
            p1++;
        }
        *p2++ = *p1++;
    }
    *p2 = '\0';
    return (s);
}

void main(void)
{
    char str;
    printf("請輸入字串owo");//提供使用者輸入
    scanf("%c", &str);
    printf("%s\n", strtrimc(str)); //輸出
}
