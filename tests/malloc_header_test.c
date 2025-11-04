#include <stdio.h>
typedef long Align; /* for alignment to long boundary */
struct header_str {
    union header *ptr; /* next block if on free list */
    unsigned size;     /* size of this block */
  };
union header {      /* block header */
  struct header_str s;
  Align x; /* force alignment of blocks */
};
typedef union header Header;

int main() {

  printf("size of Header - %lu\n size of union header pointer - %lu\n size of unsigned int %lu\n size of Align %lu\n size of struct header_str - %lu\n",
         sizeof(Header), sizeof(union header*), sizeof(unsigned), sizeof(Align), sizeof(struct header_str));
}
