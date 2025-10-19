#include<stdio.h>

int main()
{    
   float grade[10];
   int i,highest_index=0,lowest_index=0;
   float average,sum=0,highest,lowest;
   
   for(i=0; i<10; i++){
	
		printf("Enter The Grade(1-100) of %d Student : \n" ,i+1);
		scanf(" %f", &grade[i]);
			}
			
	printf("The Grade of all Student are : \n");		
	for(i=0; i<10; i++){
			
			printf(" %d Student obtained : %f \n", i+1 , grade[i]);
			
		}
   	
   	highest=lowest=grade[0];
	for(i=0; i<10 ;i++)
	{
		sum+=grade[i];
		
		if(grade[i]>highest){
			highest=grade[i];
			highest_index=i;
		}
			if(grade[i]<lowest){
			lowest=grade[i];
			lowest_index=i;
		}
	}
	
	average=sum/10;
	printf("The Average of the Class is : %.2f \n",average );
		
		
		printf("The Highest Index is %d and the grade is %.2f\n",highest_index+1, highest );
			printf("The Lowest Index is %d and the grade is %.2f\n",lowest_index+1, lowest );


	-
	 printf("\nEnter new grade for the student with the lowest score: ");
    scanf("%f", &grade[lowest_index]);



	printf("The Updated Grades of the class are : \n");
	
	for(i=0; i<10; i++){
			
			printf(" %d Student obtained : %f \n", i+1 , grade[i]);
	
}
	
	
	return 0;
	
}

