#include <stdio.h>
#include <string.h>

// Define structures
struct player {
    char name[20];
    char team[20];
};

struct bowl {
    char type[10]; // seemer, pacer, spinner // N/A
    char arm[7];   // left or right
    struct player ply;
};

struct bat {
    char type[10]; // top order, middle order, lower order
    char handed[8]; // lefty or righty
    struct bowl ply2;
};

FILE *fptr;

// Function to create player data
void create() {
    fptr = fopen("player.txt", "w");
    struct bat ply3[5];
    for (int i = 0; i < 1; i++) {
        printf("Enter player name: ");
        fgets(ply3[i].ply2.ply.name, sizeof(ply3[i].ply2.ply.name), stdin);
        ply3[i].ply2.ply.name[strcspn(ply3[i].ply2.ply.name, "\n")] = '\0';

        printf("Enter player team: ");
        fgets(ply3[i].ply2.ply.team, sizeof(ply3[i].ply2.ply.team), stdin);
        ply3[i].ply2.ply.team[strcspn(ply3[i].ply2.ply.team, "\n")] = '\0';

        printf("Enter player bowling type (// seemer, pacer, spinner // N/A): ");
        fgets(ply3[i].ply2.type, sizeof(ply3[i].ply2.type), stdin);
        ply3[i].ply2.type[strcspn(ply3[i].ply2.type, "\n")] = '\0';

        printf("Enter player bowling arm (left or right): ");
        fgets(ply3[i].ply2.arm, sizeof(ply3[i].ply2.arm), stdin);
        ply3[i].ply2.arm[strcspn(ply3[i].ply2.arm, "\n")] = '\0';

        printf("Enter batting type (// top order, middle order, lower order): ");
        fgets(ply3[i].type, sizeof(ply3[i].type), stdin);
        ply3[i].type[strcspn(ply3[i].type, "\n")] = '\0';

        printf("Enter lefty or righty: ");
        fgets(ply3[i].handed, sizeof(ply3[i].handed), stdin);
        ply3[i].handed[strcspn(ply3[i].handed, "\n")] = '\0';

        fprintf(fptr, "%s\n%s\n%s\n%s\n%s\n%s\n", ply3[i].ply2.ply.name, ply3[i].ply2.ply.team,
                ply3[i].ply2.type, ply3[i].ply2.arm, ply3[i].type, ply3[i].handed);
    }
    fclose(fptr);
}

// Function to read player data
void read() {
    char content[256];
    int count = 0, r = 0;
    fptr = fopen("player.txt", "r");
    while (fgets(content, sizeof(content), fptr)) {
        count++;
        r = count % 6;
        switch (r) {
            case 1:
                printf("Name: %s", content);
                break;
            case 2:
                printf("Team: %s", content);
                break;
            case 3:
                printf("Bowling Type: %s", content);
                break;
            case 4:
                printf("Bowling Arm: %s", content);
                break;
            case 5:
                printf("Batting Type: %s", content);
                break;
            case 0:
                printf("Handed: %s", content);
                break;
        }
    }
    fclose(fptr);
}

// Function to update player data
void update() {
    fptr = fopen("player.txt", "r");
    FILE *fptr1 = fopen("temp.txt", "w");
    char name1[20], content[256], value[256];
    int count = 0, target;
    int found = 0;

    printf("Enter player name to update: ");
    getchar(); // Clear newline from input buffer
    fgets(name1, sizeof(name1), stdin);
    name1[strcspn(name1, "\n")] = '\0';

    printf("1 ---- Team\n2 ---- Bowling Type\n3 ---- Bowling Arm\n4 ---- Batting Type\n5 ---- Handed\n");
    printf("Enter your choice: ");
    scanf("%d", &target);

    printf("Enter the new value: ");
    getchar(); // Clear newline from input buffer
    fgets(value, sizeof(value), stdin);
    value[strcspn(value, "\n")] = '\0';

    while (fgets(content, sizeof(content), fptr)) {
        count++;
        if ((count - 1) % 6 == 0 && strcmp(content, name1) == 0) {
            found = 1;
        }
        if (found && (count - 1) % 6 == target - 1) {
            fprintf(fptr1, "%s\n", value);
            found = 0; // Reset for the next set
        } else {
            fprintf(fptr1, "%s", content);
        }
    }

    fclose(fptr);
    fclose(fptr1);
    remove("player.txt");
    rename("temp.txt", "player.txt");
    printf("Record updated successfully!\n");
}

// Function to delete player data
void delete() {
    fptr = fopen("player.txt", "r");
    FILE *fptr1 = fopen("temp.txt", "w");
    char name1[20], content[256];
    int count = 0;
    int found = 0;

    printf("Enter player name to delete: ");
    getchar(); // Clear newline from input buffer
    fgets(name1, sizeof(name1), stdin);
    name1[strcspn(name1, "\n")] = '\0';

    while (fgets(content, sizeof(content), fptr)) {
        count++;
        if ((count - 1) % 6 == 0 && strcmp(content, name1) == 0) {
            found = 1; // Skip the next 6 lines for this record
        }
        if (!found || (count - 1) % 6 == 0) {
            fprintf(fptr1, "%s", content);
        }
        if (found && count % 6 == 0) {
            found = 0; // Reset after skipping one record
        }
    }

    fclose(fptr);
    fclose(fptr1);
    remove("player.txt");
    rename("temp.txt", "player.txt");
    printf("Record deleted successfully!\n");
}

// Main function
int main() {
    int choice;

    while (1) {
        printf("\n1. Create Player Record\n2. Read Player Records\n3. Update Player Record\n4. Delete Player Record\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                create();
                break;
            case 2:
                read();
                break;
            case 3:
                update();
                break;
            case 4:
                delete();
                break;
            case 5:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice, please try again.\n");
        }
    }
}
