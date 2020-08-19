#include "events.h"

void   events_process_command   (char*  command) {
    printf("Processing event command.\n");
    char    delim[] =   " ";
    char*   ptr =   strtok(command, delim);
    int     argumentCount   =   0;
    char    argument1[100]  =   "";
    char    argument2[100]  =   "";
    char    argument3[100]  =   "";
    while   (ptr != 0) {
        ++argumentCount;
        ptr =   strtok(0, delim);
        switch(argumentCount) {
            case 1:
                break;
            case 2:
                strcpy(argument1, ptr);
                break;
            case 3:
                strcpy(argument2, ptr);
                break;
            case 4:
                strcpy(argument3, ptr);
                break;
        }
    }
    if          ((strcmp(argument1, "add_event")) == 0) {
        return;
    }
    else if     ((strcmp(argument1, "remove_event")) == 0) {
        return;
    }
    else if     ((strcmp(argument1, "print_events")) == 0) {
        return;
    }
    else if     ((strcmp(argument1, "print_faction")) == 0) {
        return;
    }
    else if     ((strcmp(argument1, "print_factions")) == 0) {
        return;
    }   
    else {
        printf("Wrong usage of the events command! See this list for valid arguments.\n");
        printf("\t\tadd_event\t<faction_name><event_name>\n\
                remove_event\t<faction_name><event_name>\n\
                print_events\n\
                print_faction\t<faction_name>\n\
                print_factions\t<event_name>\n");
        return;
    }
}

