#include<stdio.h>

int main()
{
	int i,j,remv;
	int originalid[10],newidsize=10;
	
	for(i=0 ; i<10 ; i++){
		
		printf("Enter the %d Product Id (3 digits each)\n", i+1);
		scanf("%d", &originalid[i]);
	}
	
	
	printf("Enter the Product Id you want to remove from the list\n");
	scanf("%d", &remv);
	
	for(i=0; i<newidsize ;i++){
		if(originalid[i]==remv){
			for(j=i ; j<newidsize-1;j++){
				originalid[j]=originalid[j+1];
			}
			newidsize--;
			i--;
		}
	}
	
	
	printf("The New ID IS : \n");
	for(i=0 ; i<newidsize ; i++){
		
		printf("%d\n", originalid[i]);
	}	
	if(newidsize==0){
		
		printf("All Ids were removed \n");
	}
	
	
	
	
	return 0;
}
