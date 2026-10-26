#include<stdio.h>
void main()
{
float order_amount,discount=0,delivery_charge=0,final_amount;
int type;
printf("Entre order amount:");
scanf("%f", & order_amount);
printf("Enter type(1for permium,0 for regular):");
scanf("%d",&type);
if (order_amount >=500)
{
delivery_charge=0.0;
}
if(type==1)
{
discount= 0.10*order_amount;
}
 else
 {
 delivery_charge=50.0;
 discount =0.0;
 }
 final_amount =order_amount-discount+delivery_charge;
 printf("Final payable amount:₹%.2f\n",final_amount);
 }