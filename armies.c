#include "armies.h"

void    armies_process_command  (char*   command) {
    printf("Processing army command.\n");
    char    delim[] =   " ";
    char*   ptr =   strtok(command, delim);
    int     argumentCount   =   0;
    char    argument1[100]  =   "";
    char    argument2[100]  =   "";
    char    argument3[100]  =   "";
    while   (ptr != 0) {
        ++argumentCount;
        ptr =   strtok(0, delim);
        switch  (argumentCount) {
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
    if          ((strcmp(argument1, "add_army")) == 0) {
        return;
    }
    else if     ((strcmp(argument1, "remove_army")) == 0) {
        return;
    }
    else if     ((strcmp(argument1, "add_unit")) == 0) {
        return;
    }
    else if     ((strcmp(argument1, "remove_unit")) == 0) {
        return;
    }
    else if     ((strcmp(argument1, "print_units")) == 0) {
        return;
    }
    else if     ((strcmp(argument1, "print_armies")) == 0) {
        return;
    }
    else {
        printf("Wrong usage of the armies command! See this list for valid arguments.\n");
        printf("\t\tadd_army\t<faction_name><army_name>\n\
                remove_army\t<faction_name><army_name>\n\
                add_unit\t<army_name><unit_name>\n\
                remove_unit\t<army_name><unit_name>\n\
                print_units\t<army_name>\n\
                print_armies\t<faction_name>\n");
        return;
    }
}
