#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <string.h>

char ** parse_args( char * line ) {
    char ** args = malloc(sizeof(line));
    // char * store = strsep(&line," ");
    // char * step = malloc(sizeof(store));
    // strcpy(step,store);
    // int i = 0;
    // while (store) {
    //     args[i] = step;
    //     store = strsep(&line," ");
    //     step = malloc(sizeof(store));
    //     strcpy(step,store);
    //     i++;
    // }
    
    int i = 0;
    char * store = strsep(&line," ");
    while (store) {
        printf("%s\n", store);
        store = strsep(&line, " ");
    }
    return args;
}

int main() {
    char line[100] = "this is a test eyup";
    char ** args = parse_args( line );
    // execvp(args[0], args);

    // int i = 0;
    // while (args[i]) {
    //     printf("%s\n",args[i]);
    //     i++;
    // }
}