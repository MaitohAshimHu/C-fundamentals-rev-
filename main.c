#include <stdio.h>

typedef struct {
	int x;
	int y;
}Point;

int main(void) {
	int x1 , y1 , x2 , y2;
        scanf("%d %d %d %d" , &x1 , &y1 , &x2 , &y2);

	Point p = {x1 , y1};
	Point q = {x2 , y2};

	int dx = q.x - p.x;
	int dy = q.y - p.y;

	int result = dx * dx + dy* dy ;

	printf("%d\n" , result);

	return 0 ;

}

