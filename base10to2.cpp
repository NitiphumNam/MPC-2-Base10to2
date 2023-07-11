#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
    int result[100];
main(){
	int number;
	int bin,left,i=0;
	int temp=0,j=0;
	printf("Put Your number:");
	scanf("%d",&number);
	system("cls");
	printf("Your result is:");
	do{
	bin = number % 2;
	result[j] = bin;
	left = number / 2;
	number = left;
	temp += 1;
	j++;
    }while(number); // while(number) == while(number != 0)
    for(i=temp-1;i>=0;i--)
	{
		printf("%d",result[i]);
	}
}
