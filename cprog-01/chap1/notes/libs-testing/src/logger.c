// logger.c
#include <stdio.h>
#include "../include/logger.h"

void log_message(LogLevel level, const char *message) {
    const char *level_str;

    switch (level) {
        case LOG_INFO:
            level_str = "INFO";
            break;
        case LOG_WARNING:
            level_str = "WARNING";
            break;
        case LOG_ERROR:
            level_str = "ERROR";
            break;
        default:
            level_str = "UNKNOWN";
    }

    printf("[%s]: %s\n", level_str, message);
}
