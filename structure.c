/*
#include<stdio.h>
#include<stdlib.h>

struct student_details
{
    char name[10];
    int roll_no;
    float marks;
};
struct student_details s,*ptr;
int main()
{
    ptr=&s;

    printf("Enter the roll no of student\n");
    scanf("%d",&ptr->roll_no);

   printf("Enter the name\n");
   scanf("%s",&ptr->name);

   printf("enter the marks\n");
   scanf("%f",&ptr->marks);

   //Displaying the details
   printf("Displaying the student details\n");
   printf("Name of the student %s\n",ptr->name);
   printf("Roll_no of the student is %d\n",ptr->roll_no);
   printf("Marks of the student is %f\n",ptr->marks);

}*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student_details
{
    char name[10];
    long int pin;
    int marks;
    char blood_group[10];
    long long int phone_number;
};
// struct student_details s1={"Teja",500018,90,"A+ve",9011111125};
// struct student_details s2={"Krishna",507002,95,"A+ve",9876543210};

int main()
{

    struct student_details s1,s2;
    // struct student_details s1={"Teja",500018,90,"A+ve",9011111125};
    // struct student_details s2={"Krishna",507002,95,"A+ve",9876543210};
    strcpy(s1.name,"Teja"); 
    strcpy(s2.name,"Krishna");

    printf("Enter the pin number\n");
    scanf("%d",&s1.pin);
    scanf("%d",&s2.pin);

    printf("Enter the marks of the students\n");
    scanf("%d",&s1.marks);
    scanf("%d",&s2.marks);

    strcpy(s1.blood_group,"A+ve");
    strcpy(s2.blood_group,"A+ve");

    printf("Enter the phone number\n");
    scanf("%lld",&s1.phone_number); 
    scanf("%lld",&s2.phone_number); 
    // Displaying the student details
    if((s1.pin) || (s2.pin) == 1 )
    {
        printf(" %s %ld %d %s %lld\n",s1.name,s1.pin,s1.marks,s1.blood_group,s1.phone_number);
        printf(" %s %ld %d %s %lld\n",s2.name,s2.pin,s2.marks,s2.blood_group,s2.phone_number);
    }
    return 0;

}
