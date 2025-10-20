#include <stdio.h>

int main()
{
	
	int inp;
	printf("Enter How many Elements you want to Input\n");
	scanf("%d", &inp);
	
	int n=inp;
	int i;
	int VLA[n];
	
	for(i=0; i<n ; i++){
		printf("Enter the %d Element of the Array : \n",i+1);
		scanf("%d", &VLA[i] );
	}
	
	for(i=0; i<n ; i++){
		
		printf("The %d Element of the Array is : %d\n", i+1, VLA[i]);
	}
	
	printf("Enter the Idex of the Array you want to Modify : \n");
	scanf("%d", &i);
	
	printf("Enter the Value you want to Enter in the %d Element of the Array : \n", i);
	scanf("%d", &VLA[i-1]);
	
	for(i=0; i<n ; i++){
		
		printf("The %d Element of the Array is : %d\n", i+1, VLA[i]);
	}
	
	
	return 0;
}
