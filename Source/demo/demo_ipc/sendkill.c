#include <signal.h>
#include <stdio.h>

int main() {
    int pid;

    if ((pid = fork()) < 0) {
        printf("error\n");
    } else if (pid == 0) {
    } else {
        while (1) {
            pid++;
        }
    }

    return 0;

}
