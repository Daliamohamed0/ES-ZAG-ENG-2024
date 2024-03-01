#include<stdio.h>

enum students {
    student_1 = 1,
    student_2,
    student_3
};

int main() {
    enum students stds;
    char co_ans[5], ans[5];
    int wrong_ans[5] = {0};

    printf("Enter correct answers:\n");
    for (int i = 0; i < 5; i++) {
        scanf(" %c", &co_ans[i]);
    }

    for (stds = student_1; stds <= student_3; stds++) {
        int score = 0;
        printf("Enter student %d's answers:\n", stds);
        for (int i = 0; i < 5; i++) {
            scanf(" %c", &ans[i]);
            if (co_ans[i] == ans[i]) {
                score++;
            } else {
                wrong_ans[i]++;
            }
        }
        printf("Student %d\n", stds);
        printf("Score: %d\n", score);
        printf("Wrong answers: ");
        for (int i = 0; i < 5; i++) {
            if (wrong_ans[i] > 0) {
                printf("%d  ", i + 1);
            }
        }
        printf("\n");
    }

    return 0;
}

