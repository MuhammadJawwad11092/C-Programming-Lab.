#include <stdio.h>
int main()
{
	int i , even=0 , odd=0;
	char ans;
	
	do{
		
		printf("Enter a Number \n");
		scanf("%d", &i);
		
	if(i%2==0){
		even++;
		printf("Even Number Entered\n");
	} else{
		odd++;
		printf("Odd Number Entered\n");
	} 
	
	    printf("Do You Want To Continue?(Y/N) \n");
	    scanf(" %c", &ans);
	} while(ans=='Y' || ans=='y' );
	
	printf("The Even Number Count is : %d \n ", even);
	printf("The Odd Number Count is : %d \n ", odd);

	return 0;
}
