#include <stdio.h>

int main()
{
    int course;
    char grade;

    printf("Enter Course Number (1, 2 or 3) : \n");
    scanf("%d", &course);

    switch(course){
        case 1:
        case 2:
        case 3:
            printf("Enter Grade (A,B,C,D,F)\n");
            scanf(" %c", &grade); 

            switch(grade){
                case 'A':
                    printf("Excellent work\n");
                    break;
                case 'B':
                    printf("Nice work\n");
                    break;
                case 'C':
                    printf("Normal work\n");
                    break;
                case 'D':
                    printf("Can do better work\n");
                    break;
                case 'F':
                    printf("Failed course\n");
                    break;
                default:
                    printf("Invalid grade Entered\n");
            }
            break;
        default:
            printf("Invalid course number entered\n");
    }

    return 0;
}
