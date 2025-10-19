#include <stdio.h>

int main()
{
	float num[5];
	float output[5][3];
	int i;
	
	for(i=0;i<5;i++){
		
		printf("Enter the %d Number : \n", i+1);
		scanf("%f", &num[i]);
		
	}
	
		for(i=0;i<5;i++){
			
			output[i][0]=num[i]+10;
			output[i][1]=num[i]-5;
			output[i][2]=num[i]*2;
		}
	
	printf("The Original Numbers are : \n");
		for(i=0;i<5;i++){
		
		printf("The Number %d is :  %f\n", i, num[i]);}
		
		printf("The After Operation Numbers are : \t\t\n");
		
		for(i=0;i<5;i++){
			
			printf("The Number %d after operation is : \n%f\n%f\n%f\n",i,output[i][0],output[i][1],output[i][2]);
		}
		
		
	return 0;
}
