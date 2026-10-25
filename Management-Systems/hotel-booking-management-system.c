#include <stdio.h>

struct booking {
    int room_no;
    char guest_name[50];
    float room_rent;
};

int main() {
    struct booking b[10], temp;
    int n, i,j;

    printf("Enter number of guests: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter room number: ");
        scanf("%d", &b[i].room_no);

        printf("Enter guest name: ");
        scanf("%s", b[i].guest_name);

        printf("Enter room rent: ");
        scanf("%f", &b[i].room_rent);
    }
    
    for(i=0;i<n;i++) {
           printf("\nRoom No: %d", b[i].room_no);
        printf("\nGuest Name: %s", b[i].guest_name);
        printf("\nRoom Rent: %f\n", b[i].room_rent);
    }


for(i=0;i<n;i++) {
    for(j=i+1;j<n;j++) {
        if(b[i].room_rent >
b[j].room_rent) {
            temp =b[i];
            b[i] =b[j];
            b[j] =temp;
        }
    }
}
    printf("\n----Sorted Hotel Booking Details(by Room Rent) ----\n");
    for(i = 0; i < n; i++) {
        printf("\nRoom No: %d", b[i].room_no);
        printf("\nGuest Name: %s", b[i].guest_name);
        printf("\nRoom Rent: %f\n", b[i].room_rent);
    }

    return 0;
}
