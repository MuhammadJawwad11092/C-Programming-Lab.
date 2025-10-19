#include<stdio.h>

int main()
{
	int i,j,swap;
	float median;
	
	int score[10]={23,34,56,82,54,87,54,65,29,30};
	
	for(i=0; i<10-1 ;i++){
		for(j=0;j<10-i-1;j++){
			if(score[j]>score[j+1]){
				swap=score[j];
				score[j]=score[j+1];
				score[j+1]=swap;
			}
		}
	}
	for(i=0;i<10;i++){
	
	printf("The Sorted Number are: %d\n",score[i]);
}

median=(score[4]+score[5])/2.0;

printf("The Median is  : %.2f \n ", median);
	return 0;
	
	
}
