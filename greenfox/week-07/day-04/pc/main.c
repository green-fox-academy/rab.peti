#include <stdio.h>
#include <stdint.h>

// Use the Computer struct, give values to the fields and print them out in the main!
// Use the Notebook struct, give values to the fields and print them out in the main!

struct Computer {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
};

typedef struct {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
} Notebook;

int main()
{

    struct Computer computer;

    computer.cpu_speed_GHz = 4.2;
    computer.ram_size_GB = 8;
    computer.bits = 64;

    printf("The computer has a %.1fGHz CPU, with %dGB RAM, and it has %dbits.\n", computer.cpu_speed_GHz, computer.ram_size_GB, computer.bits);

    Notebook notebook;
    notebook.cpu_speed_GHz = 2.6;
    notebook.ram_size_GB = 4;
    notebook.bits = 64;

    printf("The computer has a %.1fGHz CPU, with %dGB RAM, and it has %dbits.\n", notebook.cpu_speed_GHz, notebook.ram_size_GB, notebook.bits);



    return 0;
}