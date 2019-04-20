
#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("Traffic lights");
printf("Select the value of trafic light signal \n1.Red Light. \n2.Yellow Light. \n3.Green Light");
scanf("Enter your choice:-\t%d",&a);
if(a==1)
{
  printf("\nA red signal light means STOP.");
}
else if(a==2)
{
printf("\nA yellow signal light warns you that the red signal is about to appear");
}
else if(a==3)
{
printf("\nA green light means GO");
}
else
{
printf("WRONG CHOICE");
}
getch();
}
