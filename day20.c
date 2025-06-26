#include<stdio.h>
void copyString( char *dest, const char *src)
{
    while(*src !='\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0'; //null
}
int main()
{
    char src[100], dest[100];
    printf("enter a string to copy: ");
    fgets(src, sizeof(src), stdin);
    copyString(dest, src);
    printf("Copied string: %s\n", dest);
    return 0;
}