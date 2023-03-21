#include "types.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf(2, "Usage: helloYou name\n");
        exit();
    }
    helloYou(argv[1]);
    exit();
}