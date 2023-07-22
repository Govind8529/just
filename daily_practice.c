#include<stdio.h>
#include<string.h>
int factorial();
char str_rev();
char str_len();
char str_cat();
char str_cpy();
char str_cmp();
char str_str();
char str_chr();
char string_even_or_odd();
char swap();
int  armstrong_num();
int fib();
int prime();
int integer_to_ascii();
int ascii_to_integer();
int palin_drome();
int harshad_num();

int main()
{
    int n;
    printf("enter the option:\n");
    scanf("%d",&n);
    
    switch(n)
    {
        case 1:
            factorial();
            break;

        case 2:
            str_rev();
            break;

        case 3:
            str_len();
            break;

        case 4:
            str_cat();
            break;
        
        case 5:
            str_cpy();
            break;

        case 6:
            str_cmp();
            break;

        case 7:
            string_even_or_odd();
            break;

        case 8:
            str_str();
            break;

        case 9:
            armstrong_num();
            break;
        
        case 10:
            fib();
            break;

        case 11:
            prime();
            break;

        case 12:
            integer_to_ascii();
            break;
        
        case 13:
            ascii_to_integer();
            break;
        
        case 14:
            str_chr();
            break;

        case 15:
            palin_drome();
            break;

        case 16:
            harshad_num();
            break;


        default:
            printf("Enter the valid option:\n");
    }
}

int factorial()
{
    int n;
    printf("Enter the value:\n");
    scanf("%d",&n);

    int fact=1,i;
    if(n<=1)
        return 1;
    else
    {
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
    }
    printf("Factorial of %d is %d\n",n,fact);
}
char str_rev()
{
    char str[100]="Linkwell telesystems pvt ltd";
    char temp;
    int i,j=0;

    j=strlen(str)-1;
    for(i=0;i<j;i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    //str[i]='\0';
    printf("String Reverse:%s\n",str);
}
char str_len()
{
    char str1[100]="Linkwell";
    int i,length=0;

    for(i=0;str1[i]!='\0';i++)
    {
        length++;
    }
    printf("String length:%d\n",length);
}
char str_cat()
{
    char str2[100]="Linkwell telesystems pvt ltd";
    char str3[100]="Visiontek";

    int i,j,len;
    len=strlen(str2);
    for (i = 0; str2[i]!='\0'; i++);//Iterating the from starting to end
    {
        for(j=0;str2[j]!='\0';j++,i++)
        {
            str2[i]=str3[j];
        }
    }
    str2[i]='\0';
    printf("String concatenation:%s\n",str2);
}
char str_cpy()
{
    char str4[100]="Linkwell Telesystems pvt ltd";
    char str5[100];

    int i;
    
    for(i=0;str4[i]!='\0';i++)
    {
        str5[i]=str4[i];
    }
    str5[i]='\0';
    printf("String 2 is copied:%s\n",str5);
}
char str_cmp()
{
    char str6[100]="Linkwell";
    char str7[100]="Private ltd";
    int i;
    int flag=0;
    for(i=0;i<strlen(str6);i++)
    {
        if(str6[i]!=str7[i])
        {
            flag=1;
            break;
        }
    }
    if(flag)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");
}
char str_str()
{
    char str[100]="Linkwelltelesystems";
    char *p;
    char substr[100]="tele";
    int flag=0;
    int i,j;

    for(i=0;i<strlen(str);i++)
    {
        flag=0;
        for(j=0;j<strlen(substr);j++)
        {
            if(substr[j]!=str[i+j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            p=&str[i];
            printf("%s\n",p);
        }
    }
}
char string_even_or_odd()
{
    char str[100]="Linkwell";
    char even[50];     
    char odd[50];
    int i,j;
   
    for(i=0;i<strlen(str);i++)
    {
        if(i%2 == 0) 
        {
            printf("Even Elements[%d] is %c\n",i,str[i]);
            // even[j++]=str[i];
            // i++;
        }  
    }
    
    //printf("Even %s\n",even);
    for(i=0;i<strlen(str);i++)
    {
        if(i%2!=0) 
        {
            printf("Odd Elements[%d] is %c\n",i,str[i]);
           //odd[j++]=str[i];
           //i++;
        }
    }
   // printf("Odd %s\n",odd);
}
int armstrong_num()
{
    int num=1634;
    int counter=0;
    int n=num,i,res=1,sum=0,j,a;
    while(n)
    {
        n=n/10;
        counter++;
    }
    n=num;
    printf("%d\n",counter);
    for(j=0;j<counter;j++)
    {
        res=1;
        a=n%10;
        n=n/10;
        for(i=0;i<counter;i++)
        {
            res=res*a;
        }
        sum=sum+res;
        printf("Sum %d--%d\n",sum,a);
    }
    if(sum==num)
    {
        printf("%d is armstrong",num);
    }
    else
    {
        printf("%d is not a armstrong",num);
    }
}
int fib()
{
    int a=1,b=1;
    int n,c;
    
    printf("enter the n value to generate the series\n");
    scanf("%d",&n);
    printf("\n Fibanacci series\n");
    printf("%d\t%d\t",a,b);
    for(int i=0;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\t",c);
    }
}
int prime()
{
    int n,i;
    int flag=0;
    printf("enter the n value:\n");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        printf("%d is a prime number",n);
    }
    else
    {
        printf("%d is not a prime number",n);
    }
}
int integer_to_ascii()
{
    int n=1234;
    int a,i=0,j;
    char str[100];
    int temp;
    while(n)
    {
        a=n%10;
        n=n/10;
        str[i]=a+48;
        i++;
    }
    printf("%s\n",str);
    j=strlen(str)-1;
    for(i=0;i<j;i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    printf("%s\n",str);
}

int ascii_to_integer()
{
    char str[100]="45671234569129";
    unsigned long int n=0;
    int a,i,j;
    for(i=0;i<strlen(str);i++)
    {
        n=n*10+str[i]-48;
    }
    printf("%lu\n",n);
    return 0;
}
char str_chr()
{
    char str[100]="Linkwell";
    char ch='k';
    int i;
    char *ptr;
    for(i=0;i<=strlen(str);i++)
    {
        if(str[i]==ch)
        {
            ptr=&str[i];
        }
    }
    printf("%s",ptr);
}
/*Roman Numbers*/
/*
#include<stdio.h>
int roman_numbers(int,int,char);
int main()
{
    int yr;
    printf("enter year\n");
    scanf("%d",&yr);
    yr=roman_numbers(yr,1000,'m');
    yr=roman_numbers(yr,500,'d');
    yr=roman_numbers(yr,100,'c');
    yr=roman_numbers(yr,50,'l');
    yr=roman_numbers(yr,10,'x');
    yr=roman_numbers(yr,5,'v');
    yr=roman_numbers(yr,1,'i');
    return 0;
}
int roman_numbers(int y,int k,char ch)
{
    int i,j;
    j=y/k;
    for(i=1;i<=j;i++)
    {
        printf("%c\t",ch);
    }
    return(y-k*j);
}
*/
// Prime number
/*
#include<stdio.h>
int main()
{
    int n,count=0;
    printf("enter the n value\n");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("%d is prime number",n);
    }
    else
    {
        printf("%d is not a prime number",n);
    }
}*/
// Printing even,odd,negative and positive elements in an array//
/*
#include<stdio.h>
int main()
{
    int arr[25];
    int n,i;
    int even=0,odd=0;
    printf("Enter the n value\n");
    scanf("%d",&n);
    printf("enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            printf("Even Elements%d\n",arr[i]);
            even++; 
        }
    }
    printf("Even elements are %d\n",even);
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            printf("Odd Elements%d\n",arr[i]);
            odd++;
        }
    }
    printf("Odd elements are %d\n",odd);
    for(i=0;i<n;i++)
    {
        if(arr[i]<=0)
        {
            printf("Negative ELements:%d\n",arr[i]);
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            printf("Positive Elements:%d\n",arr[i]);
        }
    }
}*/

// Multiplication of 2-Arrays
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char str_rev();
int main()
{
    str_rev();
}
char str_rev()
{
    char str[100]="Linkwell tele systems";
   char temp;
    int i,j,spaces=0;
   j=strlen(str)-1;

   for(i=0;i<j;i++,j--)
   {
        temp=str[i];
        str[i]= str[j];
        str[j]=temp;
   }
   printf("%s\n",str);
   for(i=0;i<strlen(str);i++)
   {
        if(str[i]==32)
        {
            spaces++;        
        }
   }
  // printf("%d\n",spaces);

   char *ptr=NULL;
   ptr=(char *)malloc(sizeof(char));
   for(i=0;i<strlen(str);i++)
   {
        if(spaces==1)
        {
            ptr=strchr(str,'s'); 
        }
   }
    printf("%s\n",ptr);
    free(ptr);
}*/

int palin_drome() 
{
    int n,num,rev=0,rem;
    printf("enter the number :\n");
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(num==rev)
    {
        printf("%d is a palindrome",num);
    }
    else
    {
        printf("%d is a not palindrome",num);
    }
}

int harshad_num()
{
    int n,k,rem,rev=0,sum=0;
    printf("Enter the number\n");//21
    scanf("%d",&n);
    int num=n;

    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    
    printf("%d\n",sum);//3
    
    if(n%sum==0)
    {
        printf("%d is a harshad number",n);
    }
    else
    {
        printf("%d is not a harshad number",n);
    }
}

