#include "types.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[])
{
  printf(1, "Maximum PID: %d\n", getMaxPid());
  exit();
}