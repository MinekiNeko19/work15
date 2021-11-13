#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <string.h>

char ** parse_args( char * line ) {
    char ** args = malloc(sizeof(line));    
    int i = 0;
    char * store = strsep(&line," ");
    char * step;
    while (store) {
        step = malloc(sizeof(store));
        strcpy(step,store);
        args[i] = step;
        // printf("%s\n", args[i]);
        store = strsep(&line, " ");
        i++;
    }
    args[i] = NULL;
    return args;
}

int main(int argc, char *argv[]) {
    // char line[100] = "this is a test eyup";

    char line[100] = "ls -a -l";
    char ** args = parse_args( line );
    execvp(args[0], args);

}