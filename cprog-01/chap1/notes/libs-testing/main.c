#include <stdio.h>
#include <stdlib.h>
#include "logger.h"
// Note that the less than or greater notation is preferred when calling standard libraries, such as 
// stdio, stdlib and so on... 
// the difference is that quotes are going to search first in the current directory, so its preferred
// when including our own headers

int main(int argc, char *argv[]) 
{
    log_message(LOG_INFO, "Started with subdirectories");
    return EXIT_SUCCESS;
}
