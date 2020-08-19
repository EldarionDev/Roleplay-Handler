#include <stdio.h>
#include <string.h>

#include "armies.h"
#include "events.h"
#include "factions.h"
#include "regions.h"

void process_input(char*    input) {
    if  ((strcmp(input, "armies")) == 0)
        armies_process_command(input);
    else if ((strcmp(input, "events")) == 0)
        events_process_command(input);
    else if ((strcmp(input, "factions")) == 0) 
        factions_process_command(input);
    else if ((strcmp(input, "regions")) == 0) 
        regions_process_command(input);
    else {
        printf("Invalid command!\n");
        return;
    }
}

int main() {
    printf("Welcome to this command line tool to show information about the Durin's Folk RP!\n");
    printf("Use the help command to get an overview of all commands.\n");
    while   (1) {
        char    command[100];
        printf("Please enter a command to continue or enter quit to close the application.\n");
        scanf("%s", command);
        if  ((strcmp(command, "quit")) == 0) { 
            break;
        }
        else if ((strcmp(command, "help")) == 0) {
            printf("Available commands: 'armies', 'events', 'factions', 'regions'\n");
            continue;
        }
        else {
            process_input(command);
            continue;
        }
    }
    return 1;
}
