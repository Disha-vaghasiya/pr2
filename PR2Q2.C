#include<stdio.h>
#include<conio.h>
void main(){
int units;
float amount,total;
clrscr();
   printf("enter units...:-  ");
   scanf("%d",&units);

   if{(units<50) amount=units*0.50;}
   else if{(units<150) amount=25 + ((units-50)*0.75;)}
   else if{(units<=250) amount=100 + ((units-150)*1.20;)}
  else {amount=220 + ((units-250)*1.50)}

total=amount*20/100;
printf("Electricity bill is :%f",total+amount)
  }
getch();
}
