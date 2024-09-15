//LAB 4 Q4 24K 1011

#include <stdio.h>
int main(){
	 float cost;
	 float discount;
	 float newamount;
	 float saved;
  printf("enter cost of shopping:");
  scanf("%f",&cost);
if (cost>500 && cost<2000){
	discount=0.95;
}
else if (cost>2000 && cost<4000){
	discount= 0.9;
}
else if (cost>4000 && cost<6000){
    discount = 0.8;
}
else if(cost>6000){
	discount=0.65;
}
newamount= cost*discount;
saved=cost-newamount;

printf("actual amount: %f\n",cost);
printf("your saved amount is: %f\n",saved);
printf("Amount after Discount is: %f\n",newamount); 
}