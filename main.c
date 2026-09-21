#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	scanf("%d", &n);
	int *nums = malloc(n * sizeof(int));
if (nums == NULL){
	return 1;
}
long long sum = 0;

	for(int i =0; i < n;i++) {
		scanf("%d" , &nums[i]);
          sum += nums[i];

	}

printf("%lld\n" , sum);

free(nums);

return 0;
}

