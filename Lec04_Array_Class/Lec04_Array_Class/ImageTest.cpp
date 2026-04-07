#include <stdio.h>

#define	HEIGHT	8
#define	WIDTH	8

int image[HEIGHT][WIDTH] = {
  {  10,  30,  55,  80, 120, 160, 200, 230},
  {  20,  45,  70, 100, 140, 180, 220, 210},
  {  35,  60,  90, 130, 170, 210, 240, 190},
  {  50,  80, 115, 150, 190, 230, 255, 170},
  {  40,  65, 100, 140, 175, 215, 235, 150},
  {  25,  50,  80, 115, 155, 195, 210, 130},
  {  15,  35,  60,  90, 130, 165, 185, 110},
  {    5,  20,  40,  70, 105, 140, 160,  90},
};

void main() {
	int result = 0;
	int cul = 1;
	int row = 1;
	for (int i = 0; i < WIDTH; i++) {
		for (int j = 0; j < HEIGHT; j++) {
			if (image[i][j] > result) {
				result = image[i][j];
				cul = i + 1;
				row = j + 1;
			}
		}
	}
	printf("최대 밝기는 %d\n", result);
	printf("%d행 %d열입니다", cul, row);
}