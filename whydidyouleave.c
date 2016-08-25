// Based on: http://www.evanjones.ca/software/backtrace.c

#include <execinfo.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

#define MAX_FRAMES (20)

static void print_stack() {
  static const char MESSAGE[] = "\n\nSTACK TRACE:\n";
  write(0, MESSAGE, sizeof(MESSAGE));

  void* array[MAX_FRAMES];
  size_t size = backtrace(array, sizeof(array)/sizeof(*array));
  backtrace_symbols_fd(array, size, 0);
}

void exit(int status) {
  print_stack();
  _exit(status);
}
