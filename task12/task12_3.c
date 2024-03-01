#include <stdio.h>


#define MAX_STUDENTS 50

typedef struct {
    char name[50];
    float score;
} Student;

int main() {
    Student students[MAX_STUDENTS];
    int num_students;
    float total_score = 0, average_score, highest_score = 0;
    char highest_students[MAX_STUDENTS][50];
    int num_highest_students = 0;


    printf("Enter the number of students (max %d): ", MAX_STUDENTS);
    scanf("%d", &num_students);

    printf("Enter students' names and scores:\n");
    for (int i = 0; i < num_students; ++i) {
        printf("Student %d name: ", i + 1);
        scanf("%s", students[i].name);
        printf("Student %d score: ", i + 1);
        scanf("%f", &students[i].score);

        total_score += students[i].score;


        if (students[i].score > highest_score) {
            highest_score = students[i].score;
            num_highest_students = 1;
            strcpy(highest_students[0], students[i].name);
        } else if (students[i].score == highest_score) {
            strcpy(highest_students[num_highest_students], students[i].name);
            num_highest_students++;
        }
    }


    average_score = total_score / num_students;


    printf("\nAverage score: %.2f\n", average_score);


    printf("Students below average:\n");
    for (int i = 0; i < num_students; ++i) {
        if (students[i].score < average_score) {
            printf("%s\n", students[i].name);
        }
    }


    printf("\nHighest score: %.2f\n", highest_score);
    printf("Students with the highest score:\n");
    for (int i = 0; i < num_highest_students; ++i) {
        printf("%s \n", highest_students[i]);
    }

    return 0;
}

