#include<stdio.h>
int myStrlen(const char *str)
{
    const char *ptr = str;
    while (*ptr)
    {
        ptr++;
    }
    return ptr - str;
}
int main()
{
    char str[] = "Sahu vlog";
    printf("String: %s\n", str);
    printf("Length: %d\n", myStrlen(str));
    return 0;
}