#include<stdio.h>
#include<string.h>
char str_rev();
int main()
{
    char s[100];
    printf("enter the string:\n");
    gets(s);
    str_rev();
}
char str_rev()
{
    char s[100];
    char t;
    int i,j;
    j=strlen(s)-1;
    for(i=0;i<j;i++,j--)
    {
        t=s[i];
        s[i]=s[j];
        s[j]=t;
    }
    printf("Rev%s\n",s);

}