//LAB 4 Q2 24K 1011

#include<stdio.h>
int main(){
	int num1;
	int num2;
	int result;
	char opertator;
	printf("enter num1 and num2: ");
	scanf("%d %d",&num1,&num2);
	while (getchar() != '\n'); 
	printf("enter operator:(+ - / *): ");
	scanf("%c",&opertator);
if (opertator== '+'){
	result=num1+num2;
}
else if(opertator=='-'){
	result=num1-num2;
}
else if(opertator=='/'){
 result=num1/num2;
}
else if (opertator=='*'){
	result=num1*num2;
}
printf("answer is: %d",result);
}