// My name is Kartikey Gupta, batch 36 sapid:590027194.
// My project is based on Electricity Bill Management System.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Customer {
    int id;
    char name[50];
    float units;
    float bill;
};

// Calculate bill based on given rates
float calculateBill(float units) {
    if (units <= 100) return units * 5.0f;
    else if (units <= 200) return (100 * 5.0f) + (units - 100) * 7.0f;
    else return (100 * 5.0f) + (100 * 7.0f) + (units - 200) * 10.0f;
}

// Add customer record (append to file)
void addCustomer() {
    struct Customer c;
    FILE *fp = fopen("bills.txt", "a");
    if (!fp) { printf("Error opening file!\n"); return; }

    printf("Enter Customer ID: ");
    scanf("%d", &c.id);

    printf("Enter Customer Name: ");
    scanf("%49s", c.name); // reads up to 49 chars, no spaces

    printf("Enter Units Consumed: ");
    scanf("%f", &c.units);

    c.bill = calculateBill(c.units);
    fprintf(fp, "%d %s %.2f %.2f\n", c.id, c.name, c.units, c.bill);
    fclose(fp);

    printf("Record added successfully!\n");
}

// Display all records (read from file)
void displayAll() {
    struct Customer c;
    FILE *fp = fopen("bills.txt", "r");
    if (!fp) { printf("No records found!\n"); return; }

    printf("\n--- All Customer Records ---\n");
    while (fscanf(fp, "%d %49s %f %f", &c.id, c.name, &c.units, &c.bill) == 4) {
        printf("ID: %d | Name: %s | Units: %.2f | Bill: %.2f\n",
               c.id, c.name, c.units, c.bill);
    }
    fclose(fp);
}

// Search by ID
void searchByID() {
    int id, found = 0;
    struct Customer c;
    FILE *fp = fopen("bills.txt", "r");
    if (!fp) { printf("No records found!\n"); return; }

    printf("Enter Customer ID to search: ");
    scanf("%d", &id);

    while (fscanf(fp, "%d %49s %f %f", &c.id, c.name, &c.units, &c.bill) == 4) {
        if (c.id == id) {
            printf("\n--- Customer Found ---\n");
            printf("ID: %d | Name: %s | Units: %.2f | Bill: %.2f\n",
                   c.id, c.name, c.units, c.bill);
            found = 1;
            break;
        }
    }
    fclose(fp);
    if (!found) printf("Customer with ID %d not found!\n", id);
}

// Search by Name (exact match)
void searchByName() {
    char name[50];
    int found = 0;
    struct Customer c;
    FILE *fp = fopen("bills.txt", "r");
    if (!fp) { printf("No records found!\n"); return; }

    printf("Enter Customer Name to search: ");
    scanf("%49s", name);

    while (fscanf(fp, "%d %49s %f %f", &c.id, c.name, &c.units, &c.bill) == 4) {
        if (strcmp(c.name, name) == 0) {
            if (!found) printf("\n--- Matching Customers ---\n");
            printf("ID: %d | Name: %s | Units: %.2f | Bill: %.2f\n",
                   c.id, c.name, c.units, c.bill);
            found = 1;
        }
    }
    fclose(fp);
    if (!found) printf("Customer with name %s not found!\n", name);
}

// Update record by ID (rewrite file using temp)
void updateRecord() {
    int id, found = 0;
    struct Customer c;
    FILE *fp = fopen("bills.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    if (!fp || !temp) { printf("Error opening file!\n"); if(fp) fclose(fp); if(temp) fclose(temp); return; }

    printf("Enter Customer ID to update: ");
    scanf("%d", &id);

    while (fscanf(fp, "%d %49s %f %f", &c.id, c.name, &c.units, &c.bill) == 4) {
        if (c.id == id) {
            printf("Enter new units: ");
            scanf("%f", &c.units);
            c.bill = calculateBill(c.units);
            found = 1;
        }
        fprintf(temp, "%d %s %.2f %.2f\n", c.id, c.name, c.units, c.bill);
    }
    fclose(fp); fclose(temp);

    remove("bills.txt");
    rename("temp.txt", "bills.txt");

    if (found) printf("Record updated successfully!\n");
    else printf("Customer with ID %d not found!\n", id);
}

// Delete record by ID (rewrite file excluding the record)
void deleteRecord() {
    int id, found = 0;
    struct Customer c;
    FILE *fp = fopen("bills.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    if (!fp || !temp) { printf("Error opening file!\n"); if(fp) fclose(fp); if(temp) fclose(temp); return; }

    printf("Enter Customer ID to delete: ");
    scanf("%d", &id);

    while (fscanf(fp, "%d %49s %f %f", &c.id, c.name, &c.units, &c.bill) == 4) {
        if (c.id == id) { found = 1; continue; }
        fprintf(temp, "%d %s %.2f %.2f\n", c.id, c.name, c.units, c.bill);
    }
    fclose(fp); fclose(temp);

    remove("bills.txt");
    rename("temp.txt", "bills.txt");

    if (found) printf("Record deleted successfully!\n");
    else printf("Customer with ID %d not found!\n", id);
}

// Load all records into array (for sorting/display)
int loadRecords(struct Customer arr[]) {
    struct Customer c;
    int count = 0;
    FILE *fp = fopen("bills.txt", "r");
    if (!fp) return 0;

    while (fscanf(fp, "%d %49s %f %f", &c.id, c.name, &c.units, &c.bill) == 4) {
        arr[count++] = c;
        if (count >= 100) break; // prevent overflow
    }
    fclose(fp);
    return count;
}

// Display records from array (used by sort views)
void displayRecords(struct Customer arr[], int n) {
    if (n == 0) { printf("No records found!\n"); return; }
    printf("\n--- Customer Records ---\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d | Name: %s | Units: %.2f | Bill: %.2f\n",
               arr[i].id, arr[i].name, arr[i].units, arr[i].bill);
    }
}

// Sort by Name (ascending, lexicographical)
void sortByName() {
    struct Customer arr[100];
    int n = loadRecords(arr);
    if (n == 0) { printf("No records found!\n"); return; }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[i].name, arr[j].name) > 0) {
                struct Customer tmp = arr[i]; arr[i] = arr[j]; arr[j] = tmp;
            }
        }
    }
    printf("\n--- Records Sorted by Name ---\n");
    displayRecords(arr, n);
}

// Sort by Bill Amount (ascending)
void sortByBill() {
    struct Customer arr[100];
    int n = loadRecords(arr);
    if (n == 0) { printf("No records found!\n"); return; }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i].bill > arr[j].bill) {
                struct Customer tmp = arr[i]; arr[i] = arr[j]; arr[j] = tmp;
            }
        }
    }
    printf("\n--- Records Sorted by Bill Amount ---\n");
    displayRecords(arr, n);
}

// Sort by Units Consumed (ascending)
void sortByUnits() {
    struct Customer arr[100];
    int n = loadRecords(arr);
    if (n == 0) { printf("No records found!\n"); return; }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i].units > arr[j].units) {
                struct Customer tmp = arr[i]; arr[i] = arr[j]; arr[j] = tmp;
            }
        }
    }
    printf("\n--- Records Sorted by Units Consumed ---\n");
    displayRecords(arr, n);
}

int main() {
    int choice;
    do {
        printf("\n--- Electricity Bill System ---\n");
        printf("1. Add Customer Record\n");
        printf("2. Display All Records\n");
        printf("3. Search by ID\n");
        printf("4. Search by Name\n");
        printf("5. Update Record (by ID)\n");
        printf("6. Delete Record (by ID)\n");
        printf("7. Sort by Name\n");
        printf("8. Sort by Bill Amount\n");
        printf("9. Sort by Units Consumed\n");
        printf("10. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) { // handle non-integer input
            printf("Invalid input. Exiting.\n");
            break;
        }

        switch (choice) {
            case 1: addCustomer(); break;
            case 2: displayAll(); break;
            case 3: searchByID(); break;
            case 4: searchByName(); break;
            case 5: updateRecord(); break;
            case 6: deleteRecord(); break;
            case 7: sortByName(); break;
            case 8: sortByBill(); break;
            case 9: sortByUnits(); break;
            case 10: printf("Exiting program...\n"); break;
            default: printf("Invalid choice! Try again.\n");
        }
    } while (choice != 10);

    return 0;
}
