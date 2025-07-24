#ifndef LOGGER_H
#define LOGGER_H
// logger.c
// Header files, store declarations of functions and macros
// not the definitions

typedef enum {
    LOG_INFO,
    LOG_WARNING,
    LOG_ERROR
} LogLevel;

void log_message(LogLevel level, const char *message);

#endif
