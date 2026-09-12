#include <stdio.h>

  int main(void) {
	  int nums[5];
	  for (int i=0; i<5; i++){
		  scanf("%d\n" , &nums[i]);
	  }

	  int best = nums[0];

	  for (int i=1; i<5; i++){
		  if(best < nums[i])
			  best = nums[i];
	  }

	  printf("%d\n" , best);
	  return 0;
  }
