#include <cstdio>
#include <cstdlib>

int main() {
    int output;
    printf("Checking if processor is available...");
    if (system(NULL)) puts ("Ok");
        else exit (EXIT_FAILURE);
    output=system("curl https://wttr.in/Leipzig");
    printf("\n%d", output);
}
