#include <stdio.h>

int main() {
    char username[100];   
    int length = 0; 
       int i;
    int valid = 1;
    printf("Enter username: ");
    scanf("%[^\n]", username);  
      while (username[length] != '\0') {
        length++;
    }

    if (length < 5) {
        printf("Invalid username: It must have at least 5 characters.\n");
        valid = 0; 
     }
    for (i = 0; i < length && valid; i++) {
        if (username[i] == ' ') {
            printf("Invalid username: It should not contain spaces.\n");
            valid = 0;        }
    }
    if (valid) {
        printf("Username is Valid. \n");
    }

    return 0;
}
