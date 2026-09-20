#include <stdio.h>
#include <string.h>

  int main(void) {
	  char buf[100];
	  fgets(buf, sizeof buf, stdin);

	  size_t len = strlen(buf);
	  if (len > 0 && buf[len - 1] == '\n'){
		  buf[len - 1] = '\0';
	  }

	  printf("%zu\n", strlen(buf));
	  return 0;
  }
