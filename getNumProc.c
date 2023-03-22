#include "types.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[])
{
    printf(1, "Number of active processes: %d\n", getNumProc());
    exit();
}