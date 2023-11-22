#include<stdio.h>
#include<conio.h>
void main(){
int number;
clrscr();
      printf("Enter the number:-  ");
      scanf("%d",&number);

      (number %2==0)?printf("This number is even....!")
		    :printf("This number is odd....!");

getch();
}