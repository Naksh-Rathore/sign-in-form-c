#include <stdio.h>
#include <string.h>

int main() {

    char username[100];
    char password[100];

    const int maxTries = 3;
    int tries = 0;

    const char usernameKey[] = "Naksh";
    const char passwordKey[] = "Rathore";

    while (tries < maxTries) {
        printf("Username: ");
        scanf("%s", username);
    
        printf("Password: ");
        scanf("%s", password);

        if (strcmp(username, usernameKey) == 0 && strcmp(password, passwordKey) == 0) {
            printf("Login successful!\n");
            return 0;  
        } 
        
        else {
            printf("Incorrect username or password. Try again\n");
            tries++; 
        }
    }

    printf("You are locked of of this account");

    return 0;
}