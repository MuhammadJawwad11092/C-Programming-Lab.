#include <stdio.h>
#include<string.h>

int main()
{
	int i,j;
	char text[100];
	
	printf("Enter a string: \n");
    scanf("%[^\n]", &text);
    
    for(i=0; text[i]!='\0'; i++){
    	
    	if(text[i]=='a' || text[i]=='e' || text[i]=='i' || text[i]=='o' || text[i]=='u'){
    		text[i]=text[i]-32;
		}
	}
	
	printf("The Transformed String is %s", text);
	
	


	

	return 0;
}
