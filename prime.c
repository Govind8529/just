/*
#include<stdio.h>
#include<ctype.h>
#include<string.h>
char str_rev();
int main()
{
    str_rev();
    
}
char str_rev()
{
    char str2[100];
    char str[100]="Linkwell Telesystems pvt ltd";
    int i,spaces=0;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==32)
        {
            spaces++;
        }
    }
    printf("%d\n",spaces);

    for(i=spaces;i<spaces;spaces--)
    {
        if(spaces==32)
        {
            str2[i]=str[i];
        }
    }
    printf("%s",str2);
   
    /*char str2[100];
    char s;
    int i,j,k;
    j=strlen(str)-1;
    for(i=0;i<j;i++,j--)
    {
        s=str[i];
        str[i]=str[j];
        str[j]=s;
    }
    printf("%s\n",str);// string reverse
    // for(i=0;i<strlen(str);i++)
    // {
    //     if(str[i]==32)
    //     {
    //         str[i]='\n';
    //     }  
    // }
    char *first_ptr=str;
    first_ptr=strchr(str2,'d');
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]=='\0')
        {
            str2[i+j]=str[i]; 
        }     
    }
    printf("%s",str2);*/
//}
//Str_str
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100]="Linkwell Telesystems pvt ltd";
    char s2[100];
    char s3[100];
    char s4[100];
    int i,j,k=0;
    char *ptr=NULL;

    printf("Enter the word\n");
    scanf("%s",s2);
    printf("Enter the word to replace\n");
    scanf("%s",s3);
    if(strstr(s1,s2)==NULL)
    {
        printf("Given string not available\n");
        return -1;
    }
    ptr=strstr(s1,s2);
    printf("***%s",ptr);
    for(i=0,j=0;i<strlen(s1);i++)
    {
        if(ptr==&s1[i])
        {
           
            break;
        }
        s4[i]=s1[i];
    }

    for(j=0;j<strlen(s3);j++)
    {
        s4[i+j]=s3[j];
    }
    ptr=ptr+strlen(s2);
    for(;*ptr;)
    {
        s4[i+j]=*ptr;
        j++;
        ptr++;
    }
    printf("\n%s\n",s4);
}
