#include <stdio.h>

int main() {
    float salary, attendance, increment, newSalary;
    
    printf("Enter current salary:");
    scanf("%f", &salary);
    
    printf("Enter attendance percentage:");
    scanf("%f", &attendance);
    
    if(attendance >=90) {
        printf("Grade: A\n");
        increment = salary * 0.10;
        newSalary = salary+increment;
       }
       else if(attendance >=75) {
           printf("Grade: B\n");
           increment = salary * 0.05;
           newSalary = salary +increment;
       }
       else if (attendance >=60) {
           printf("Grade: C\n");
           increment =0;
           newSalary = salary+increment;
       }
       else {
           printf("Grade: D\n");
           increment =-(salary * 0.05);
           newSalary = salary +increment;
       }
       printf("Increment/Decrement: %.2f\n", increment);
       printf("Updated Salary: %.2f\n",newSalary);
       
       return 0;
       
}
