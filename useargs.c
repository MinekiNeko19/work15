#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <string.h>

char ** parse_args( char * line ) {
    char ** args = malloc(sizeof(line));
    char * store = strsep(&line," ");
    char * step = malloc(sizeof(store));
    int i = 0;
    strcpy(step,store);
    while (store) {
        args[i] = step;
        store = strsep(&line," ");
        step = malloc(sizeof(store));
        i++;
    }
    return args;
}

int main() {
    char line[100] = "this is a test eyup";
    char ** args = parse_args( line );
    // execvp(args[0], args);

    int i = 0;
    while (args[i]) {
        printf("%s\n",args[i]);
        i++;
    }
}