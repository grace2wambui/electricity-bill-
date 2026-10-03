/*
Name:Grace Wambui
Reg No:CT100/G/30628/26
*/

#include<stdio.h>

int main(int argc, char** argv){
{
	float calculateBill(float amount);
	float units;
	//function call
	
	float bill=0;
	float result, electricitybill,amount;
	
	printf("enter units used:\t");
	scanf("%f", &units);
	
	;result=calculateBill(bill);
	;electricitybill='units*amount';
	
	printf("ELECTRICITY BILLL:\n");
	printf("============= \n");
	printf("units used: %f\n", units);
	printf("electricitybill: Ksh %f\n", electricitybill);
	printf("============= \n");
	
	return 0;
}
}
	//function definition
float calculateBill(float elecricitybill)
{
	float units;
	float amount;
	float electricitybill;
	
	if (units<100){
		electricitybill=10*units;	
	}
	
	else if(units<199){
		electricitybill=15*units;
	}
	
	else if(units>=200){
		electricitybill=20*units;
	}
	
	return amount;
}
