#include <stdio.h>
#include <stdlib.h>

int chown(const char *pathname, uid_t owner, gid_t group) {
  // Successfully do nothing.
  return 0;
}

int fchown(int fd, uid_t owner, gid_t group) {
  // Also successfully do nothing.
  return 0;
}

int lchown(const char *pathname, uid_t owner, gid_t group) {
  // See above.
  return 0;
}

int fchownat(int dirfd, const char *pathname,
                    uid_t owner, gid_t group, int flags) {
  // See above.
  return 0;
}

