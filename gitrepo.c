#include <stdio.h>

int main()
{
    char name[50];
    int roll, marks[5];
    int total, choice, i;
    float percentage;
    char grade;
    int pass;

    do
    {
        printf("\n==============================\n");
        printf(" STUDENT MARKS MANAGEMENT SYSTEM\n");
        printf("==============================\n");

        printf("1. Calculate Student Result\n");
        printf("2. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            total = 0;
            pass = 1;

            printf("\nEnter student name: ");
            scanf("%49s", name);

            printf("Enter roll number: ");
            scanf("%d", &roll);

            printf("\nEnter marks in 5 subjects:\n");

            for(i = 0; i < 5; i++)
            {
                do
                {
                    printf("Subject %d: ", i + 1);
                    scanf("%d", &marks[i]);

                    if(marks[i] < 0 || marks[i] > 100)
                    {
                        printf("Invalid marks! Enter between 0 and 100.\n");
                    }

                } while(marks[i] < 0 || marks[i] > 100);

                total = total + marks[i];

                if(marks[i] < 40)
                {
                    pass = 0;
                }
            }

            percentage = total / 5.0;

            if(percentage >= 90)
            {
                grade = 'A';
            }
            else if(percentage >= 80)
            {
                grade = 'B';
            }
            else if(percentage >= 70)
            {
                grade = 'C';
            }
            else if(percentage >= 60)
            {
                grade = 'D';
            }
            else if(percentage >= 40)
            {
                grade = 'E';
            }
            else
            {
                grade = 'F';
            }

            printf("\n========== STUDENT RESULT ==========\n");

            printf("Student Name: %s\n", name);
            printf("Roll Number: %d\n", roll);

            printf("Total Marks: %d/500\n", total);
            printf("Percentage: %.2f%%\n", percentage);
            printf("Grade: %c\n", grade);

            if(pass == 1)
            {
                printf("Result: PASS\n");
            }
            else
            {
                printf("Result: FAIL\n");
            }

            printf("====================================\n");
        }
        else if(choice == 2)
        {
            printf("\nThank you for using the program!\n");
        }
        else
        {
            printf("\nInvalid choice! Please select 1 or 2.\n");
        }

    } while(choice != 2);

    return 0;
}