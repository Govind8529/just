#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void sort_names(char**,int);
void swap(char*,char*);
int main()
{
    char ch='i', *help[30],name[50],*p;
    int i,j, tot_names;
    FILE *fp;
    fp=fopen("students_record.txt","w");
    if(fp==NULL)
    {
        printf("error!");
        exit(1);
    }
    else
    {
        struct student_age
        {
            char names[10];
            int age;
        }s={"govind",26},s1={"teja",25},s2={"ajay",22},s3={"shiva",23};
        
        fprintf(fp,"%s--%d\n",s.names,s.age);
        fprintf(fp,"%s--%d\n",s1.names,s1.age);
        fprintf(fp,"%s--%d\n",s2.names,s2.age);
        fprintf(fp,"%s--%d\n",s3.names,s3.age);
    }
    for(i=0;ch!='\n';i++)
    {
        ch=fgetc(fp);
        for(j=0;ch!='\n';j++)
        { 
            if(ch==EOF)
            {
                break;
            }
            name[j]=ch;
            ch=fgetc(fp);
        }
        name[j]='\0';
        p=(char*) malloc(50);
        strcpy(p,name);
        help[i]=p;
    }
    tot_names=i-1;
    sort_names(help,tot_names);
    for(j=0;j<=tot_names;j++)
    {
        puts(help[j]);
    }
    fclose(fp);
    return 0;
}
void swap(char *a,char*b)
{
    char temp[20];
    strcpy(temp,a);
    strcpy(a,b);
    strcpy(b,temp);
}
void sort_names(char** name_list, int tot_names)
{
    int i,j,k=0;
    for(i=0;i<=tot_names;i++)
    {
        for(j=i+1;j<=tot_names;j++)
        {
            for(k=0;name_list[i][k] == name_list[j][k];k++)
            {
                if(name_list[i][k] > name_list[j][k])
                {
                    swap(name_list[j],name_list[i]);
                }
            }
        }
    }
}