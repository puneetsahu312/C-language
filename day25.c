#include<stdio.h>
void main()
{
int n;
int *pn;
pn=&n;
int *pn1;
pn1=pn+1;
printf("%d %d\n", pn,pn1);
double d;
double *pd;
pd=&d;
double *pd1;
pd1=pd+1;
printf("%d %d\n", pd,pd1);
}