#include <stdio.h>

#void main() {
    int door_PIN;
    printf("Enter door PIN(4-digit NO):-");
    scanf("%d" ,&door_PIN);
    printf("enter value of Door PIN is %d\n" ,door_PIN);
    if (door_PIN == 1234) {
        printf("door is unlock");
    }
    else{
        printf("door is lock");
    }
}
     
