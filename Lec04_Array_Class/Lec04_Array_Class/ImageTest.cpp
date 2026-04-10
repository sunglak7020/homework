#include <stdio.h>

#define HEIGHT 8
#define WIDTH  8

int image[HEIGHT][WIDTH] = {
	{  10,  30,  55,  80, 120, 160, 200, 230},
	{  20,  45,  70, 100, 140, 180, 220, 210},
	{  35,  60,  90, 130, 170, 210, 240, 190},
	{  50,  80, 115, 150, 190, 230, 255, 170},
	{  40,  65, 100, 140, 175, 215, 235, 150},
	{  25,  50,  80, 115, 155, 195, 210, 130},
	{  15,  35,  60,  90, 130, 165, 185, 110},
	{   5,  20,  40,  70, 105, 140, 160,  90},
};

int findMaxPixel(int img[][WIDTH], int r, int c) {  // 2차원 배열에서 최댓값 찾는 함수
	int result = 0;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (img[i][j] > result) {  // result보다 배열에 있는 값이 크다면 배열 값으로 넣기
				result = img[i][j];
			}
		}
	}
	return result;
}

int main() {
	printf("최대밝기: %d\n", findMaxPixel(image, HEIGHT, WIDTH));
}