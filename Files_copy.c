/* copying of files from one file to another file under construction.....
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[100];
    char str2[100];
    FILE *fs,*ft;
    printf("Enter the file name\n");
    scanf("%s",str);
    fs=fopen(str,"w");
    if(fs==NULL)
    {
        printf("Error! in Opening the file\n");
        return -1;
    }
    printf("Enter the file name\n");
    scanf("%s",str2);
    fs=fopen(str,"w");
    if(ft==NULL)
    {
        printf("Error! in Opening the file\n");
        return -1;
    }
    struct enter
    {
        char names[10];
    }s={"govind","teja","ajay","shiva"};
    fprintf(fs,"%s",s.names);
    
    ft=fs;
    fclose(fs);
    fclose(ft);
    
}*/
/* Creating a temprory File
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char str[100];
    printf("Enter the file name\n");
    scanf("%s",str);
    fp=fopen(str,"w");
    if(fp==NULL)
    {
        printf("Error! file can't be opened\n");
        return -1;
    }
    else
    {
        char str[100]="This is the temprory file";
        fprintf(fp,"%s",str);
    }
    fclose(fp);    
}*/
/* Rename the file name
#include<stdio.h>
int main()
{
    FILE *fp;
    char str[100];
    printf("enter the filename:\n");
    scanf("%s",str);
    fp=fopen(str,"w");
    // if(fp==NULL)
    // {
    //     printf("unable to open!");
    //     return -1;
    // }
    
        char chr[100]="This is the file...";
        fprintf(fp,"%s",chr);
        char str2[100];
        int  value;
        printf("enter the rename filename:");
        scanf("%s",str2);
        value =rename(str,str2);
        if(value!=NULL)
        {
            printf("file rename succesfully....");
        }
        else
        {
            printf("failed...");
        }   
    fclose(fp);
    return 0;
}*/
/*  C program to demonstrate use of rename()
#include<stdio.h>
int main()
{
	// Old file name
	char old_name[] = "geeks.txt";
    // FILE *fp;
    // fp=fopen(old_name,"w");
	// Any string
	char new_name[] = "geeksforgeeks.txt";
	int value;

	// File name is changed here
	value = rename(old_name, new_name);

	// Print the result
	if(!value)
	{
		printf("%s", "File name changed successfully");
	}
	else
	{
		perror("Error");
	}
    //fclose(fp);
	return 0;
}*/
/*
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    FILE *fp,*dp;
    char c;
    char str[100],chr[100]="linkwelll..";
    printf("enter the first filename:\n");
    scanf("%s",str);
    fp=fopen(str,"r");
    fprintf(fp,"%s",chr);

    char str2[100],chr2[100]="linkwelll..";
    printf("enter the second filename:\n");
    scanf("%s",str2);
    dp=fopen(str2,"r");
    fprintf(dp,"%s",chr2);
    
    
    int k=strcmp(fp,dp);
        
    if(k==0)
    {
        printf("Elements in the both the files are same\n");         
    }
    else
    {
        printf("Elements in the both files are not same\n");
    }
    fclose(fp);
    fclose(dp);
    return 0;
}*/
/*
// C program to compare two files and report
// mismatches by displaying line number and
// position of line.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void compareFiles(FILE *fp1, FILE *fp2)
{
	// fetching character of two file
	// in two variable ch1 and ch2
	char ch1 = getc(fp1);
	char ch2 = getc(fp2);

	// error keeps track of number of errors
	// pos keeps track of position of errors
	// line keeps track of error line
	int error = 0, pos = 0, line = 1;

	// iterate loop till end of file
	while (ch1 != EOF && ch2 != EOF)
	{
		pos++;

		// if both variable encounters new
		// line then line variable is incremented
		// and pos variable is set to 0
		if (ch1 == '\n' && ch2 == '\n')
		{
			line++;
			pos = 0;
		}

		// if fetched data is not equal then
		// error is incremented
		if (ch1 != ch2)
		{
			error++;
			printf("Line Number : %d \tError"" Position : %d \n", line, pos);
		}

		// fetching character until end of file
		ch1 = getc(fp1);
		ch2 = getc(fp2);
	}

	printf("Total Errors : %d\t", error);
}

// Driver code
int main()
{
	// opening both file in read only mode
	FILE *fp1 = fopen("class.txt", "r");
	FILE *fp2 = fopen("class2.txt", "r");

	if (fp1 == NULL || fp2 == NULL)
	{
	printf("Error : Files not open");
	exit(0);
	}

	compareFiles(fp1, fp2);

	// closing both file
	fclose(fp1);
	fclose(fp2);
	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    FILE *fp,*fs;
    fp=fopen("class.txt","r");
    fs=fopen("class2.txt","r");
    if(fp==NULL || fs==NULL)
    {
        printf("Error!");
        return -1;
    }
    //fs=fopen("class2.txt","r");
    char ch1=getc(fp);
    char ch2=getc(fs);
    fwrite(fs,13,sizeof(ch2) , fp );     
    while(1)
    {
        if(fs!=EOF)
        {
             
        }
    }
    fclose(fp);
    fclose(fs);   
}*/
/* fwrite example
#include<stdio.h>
int main () {
   FILE *fp;
   char str[] = "This is tutorialspoint.com";

   fp = fopen( "class2.txt" , "w" );
   fwrite(str , 10 , sizeof(str) , fp );

   fclose(fp);
  
   return(0);
}
*/
/* Doubt to be asked decision pending..
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp,*fs;
    int len;
    fp=fopen("class3.txt","r");
    fprintf(fp,"%s","wellcome");
    len=ftell(fp);
    char ch=getc(fp);
    printf("first char:%c\n",ch);
    printf("length:%d\n",len);
    fclose(fp);
}*/
/* digital to binary
#include<stdio.h>
long tobinary(int);
int main()
{
   long bno;
   int dno;
   printf(" Enter any decimal number : ");
   scanf("%d",&dno);
   bno = tobinary(dno);
   printf("The Binary value is : %ld",bno);
   return 0;
}
long tobinary(int dno)
{
   long bno=0,rem,f=1;
   while(dno != 0)
   {
      rem = dno % 16;
      bno = bno + rem * f;
      f = f * 10;
      dno = dno / 16;
   }
   return bno;;
}**/
/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[50]="TEJA";
    char *ptr=str;
    int i,j,k;
    for(i=1,j=65,k=97;i<=26,j<=90,k<=122;i++,j++,k++)
    {
        printf("%d-%c-%c\n",i,j,k);
    }  
    
    //sorting the 
    
    //printf("%c\n",ch);
}*/
/*Quadractic equation roots
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int x,a,b,c,d;
    printf("enter the a,b,c values\n");
    scanf("%d%d%d",&a,&b,&c);
    int quad=a*(pow(x,2))+b*x+c;
    int root_1=(-(b)+sqrt((pow(b,2)-4*a*c)))/2*a;
    int root_2=(-(b)-sqrt((pow(b,2)-4*a*c)))/2*a;
    printf("Roots of Quadractic equation is:%d %d\n",root_1,root_2);
    int sum = root_1+root_2;
    int product= (root_1 * root_2);
    printf("sum = %d and product= %d\n",sum,product);
}*/
/* perfect number 
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,sum=0;
    printf("enter the number:\n");
    scanf("%d",&n);

    int i;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
            printf("%d\n",sum);
        }
    }
    if(sum==n)
    {
        printf("Perfect number %d",n);
    }
    else
    {
        printf("Not a perfect number %d",n);
    }
}
/*
#include<stdio.h>
int main()
{
    int sum=0,i,n;
    printf("enter the end number:\n");
    scanf("%d",&n);
    // for(i=0;i<n;i++)
    // {
        
    // }
    n=(n*(n+1))/2;
    printf("sum:%d\n",n);
}*/
/* //factors of a number..
#include<stdio.h>
int main()
{
    int i,num;
    printf("enter the number:\n");
    scanf("%d",&num);
    printf("factors of %d are:\n",num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            printf("%d\n",i);   
        }     
    }
}*/

//Harshad Number

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,k,rem,rev=0,sum=0;
    printf("Enter the number\n");//21
    scanf("%d",&n);

    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
        
    }
    
    printf("%d\n",rev);//12
    while(rev)
    {
        k=rev%10;
        sum=sum+k;
        rev=rev/10;
        //printf("%d\n",sum);
    }
    printf("%d\n",sum);//3
    //int a=n%sum;
    if(n/sum==0)
    {
        printf("it is a harshad number");
    }
    else
    {
        printf("it is not a harshad number");
    }
}

    
