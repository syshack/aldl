#ifndef _ERROR_H
#define _ERROR_H

#define N_ERRORCODES 8

typedef enum _error {
  ERROR_GENERAL=0,
  ERROR_NULL=1,
  ERROR_MEMORY=2,
  ERROR_FTDI=3,
  ERROR_RANGE=4,
  ERROR_TIMING=5,
  ERROR_CONFIG=6,
  ERROR_BUFFER
} error_t;

void fatalerror(error_t code, char *str);

#endif
