#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])

{
    int samples, pause;

    if (argc > 1) 
        samples = atoi(argv[1]); 
    else 
        samples = 2000000;
    
    if (argc > 2) 
        pause = atoi(argv[2]); 
    else 
        pause = 0;
    
    printf("hello samples %d , %d  \n", samples, pause);
    return 0;
    
}