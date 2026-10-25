#include <stdio.h>

int main() {
    char studentName[50], course[50];
    int rollNo;
    float tuitionFee, libraryFee, examFee, total;

    printf("----- COLLEGE BILL RECEIPT -----\n");
https://github.com/notifications
    printf("Enter Student Name: ");
    scanf("%s", studentName);

    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter Course Name: ");
    scanf("%s", course);

    printf("-----------------------------\n");
    printf("Enter Tuition Fee: ");
    scanf("%f", &tuitionFee);

    printf("Enter Library Fee: ");
    scanf("%f", &libraryFee);

    printf("Enter Exam Fee: ");
    scanf("%f", &examFee);

    total = tuitionFee + libraryFee + examFee;

    printf("\n------ COLLEGE BILL ------\n");
    printf("Roll No: %d\n", rollNo);
    printf("Student Name: %s\n", studentName);
    printf("Course: %s\n", course);
    printf("-----------------------------\n");
    printf("Tuition Fee: %.f\n", tuitionFee);
    printf("Library Fee: %.f\n", libraryFee);
    printf("Exam Fee: %.f\n", examFee);
    printf("-----------------------------\n");
    printf("Total Payable: %.f\n", total);
    printf("-----------------------------\n");

    return 0;
}
