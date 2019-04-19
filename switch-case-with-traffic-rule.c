#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("Select and Enter value to find the Fines of Traffic Offences\n");
printf("1.Driving by a minor.\n2.Driving bikes without wearing a helmet.\n 3.Driving on Footpath.\n4.Violating the Yellow Line.\n");
scanf("Enter the Value %d",&n);
switch (n)
{
     case 1: printf("INR 500"); 
               break; 
     case 2: printf("INR 100"); 
                break; 
     case 3: printf("INR 100"); 
               break; 
     case 4: printf("INR 100"); 
               break;
     default: printf("wrong value selected"); 
                break;   
}
getch();
}
