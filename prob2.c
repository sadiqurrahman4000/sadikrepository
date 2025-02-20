#include <stdio.h>
#include <string.h>

int main() {
    char selected_teams[5][16] = {
        "team_bubtians",
        "team_gladiators",
        "team_nightmare",
        "chill_bros",
        "strong_mind"
    };

    char teamName[16];
    int found = 0;

    // Input team name from user
    printf("Enter the team name: ");
    scanf("%15s", teamName);

    // Check if the team name exists in the list
    for (int i = 0; i < 5; i++) {
        if (strcmp(selected_teams[i], teamName) == 0) {
            found = 1;
            break;
        }
    }

    // Output result
    if (found) {
        printf("The team '%s' is in the selected teams.\n", teamName);
    } else {
        printf("The team '%s' is NOT in the selected teams.\n", teamName);
    }

    return 0;
}
