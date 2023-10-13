#include <stdio.h>
#include <string.h>

struct User {
    char username[100];
    char password[100];
};

struct User u[50];
int Count = 0;

void regist() {
    if (Count >= 50) {
        printf("The limit has been reached");
        return;
    }

    printf("Enter your username: ");
    scanf("%s", u[Count].username);

    printf("Enter your password: ");
    scanf("%s", u[Count].password);

    Count++;

    printf("The Registration success!");
}

int login() {
    char username[100];
    char password[100];

    printf("Enter your username: ");
    scanf("%s", username);

    printf("Enter your password: ");
    scanf("%s", password);

    for (int i = 0; i < Count; i++) {
        if (strcmp(username, u[i].username) == 0 && strcmp(password, u[i].password) == 0) {
            printf(" Welcome.Login Success!\n");
            return 1;
        }
    }

    printf("InCorrect username or password");
    return 0;
}


int main() {
    int option ;

    while (1) {
        printf("press 1. Register\npress 2. Login\npress 3. Exit\n");
        printf("Enter your option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
              regist();;
                break;
            case 2:
                if (login()) {
              
                }
                break;
            case 3:
                return 0;
            default:
                printf("Invalid option. Please try again.\n");
        }
    }

    return 0;
}