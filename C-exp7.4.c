#include <stdio.h>
#include <string.h>

// Define union with 6 string fields
union Address {
    char name[100];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[20];
};

int main() {
    union Address addr;

    // Set present address (hostel)
    strcpy(addr.hostel_address, "Room 204, Sunrise Hostel, Vikasnagar");

    // Display present address
    printf("Present Address: %s\n", addr.hostel_address);

    return 0;
}
