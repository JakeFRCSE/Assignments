#include<stdio.h>

int main() {
	typedef enum {
	    east = 0, north = 1, west = 2, south = 3
	} DIR;
	DIR dir = east;

	char direction;
	char dumm[4];
	int dist;
	int x = 0, y = 0;
	while (fgets(dumm, 4, stdin) != NULL) {
		direction = dumm[0];
		dist = dumm[2] - '0';
		switch (direction) {
			case 'B' :
				dist = -dist;
			case 'F' :
				break;
			case 'L' :
				dir = (dir + 1) % 4;
				break;
			case 'R' :
				dir = (dir + 3) % 4;
				break;
		}
		if (direction == 'F' || direction == 'B') {
			switch (dir) {
				case 0 :
					x += dist;
					break;
				case 1 :
					y += dist;
					break;
				case 2 :
					x -= dist;
					break;
				case 3 :
					y -= dist;
					break;
			}
		}
	}
	char way[4] = {'E', 'N', 'W', 'S'};
	printf("%d %d\n%c", x, y, way[dir]);
	return 0;
}
