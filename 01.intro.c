#include <stdlib.h>
#include <stdio.h>

// size_t strlen(char const string[static 1]);
// int main(int argc, char* argv[argc+1]);
// size_t strlen(const char *string);
// int main(int argc, char **argv);

int main(void) {
  double A[5] = {
    [0] = 9.0,
    [1] = 2.9,
    [4] = 3.E+25,
    [3] = .0007,
  };

  for (size_t i = 0; i<5; ++i) {
    printf("element %zu is %g, \tits square is %g\n", i, A[i], A[i]*A[i]);
  }


  char * name;
  char const* const path_name;

  unsigned const*const a,b;




  return EXIT_SUCCESS;
}