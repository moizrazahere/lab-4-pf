//LAB 4 Q5 24K 1011
#include<stdio.h> 
int main(){
	int unit;
	float bill;
	char name[20];
	float surcharge;
	float newbill;
	float charge;
     int id;
    printf("enter id 4 digits:");
    scanf("%d",&id);
   printf("enter name:");
  scanf("%s",&name);
   //getline("%s",name);
   printf("enter unit:");
   scanf ("%d",&unit);
if (unit<=199){
	charge=16.2;
 
}
else if (unit>=200 &&  unit<=300){
	charge=20.1;
}
else if (unit>=300 && unit<=400){
	charge=27.1;
}
else if (unit>=500){
	charge=35.9;
}
bill=unit*charge; 
if (bill>18000){
	surcharge=bill*0.15;
	bill=bill+surcharge;
}
printf("Customer Name: %s\n",name);
printf("Customer ID: %d\n",id);
printf("Units Consumed: %d\n",unit);
printf("Amount charges @%f per unit:%f\n",charge,bill);
printf("Surcharge Amount: %f\n",surcharge);
printf("Net Amount paid by Customer: %f\n",bill);

}