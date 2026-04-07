#define _CRT_SECURE_NO_WARNINGS
#include "Car.h"
#include "SportsCar.h"

void main() {

	// 내 자동차 아반때 만들기
	Car my_car(0, "나의 아반때", 1);
	printf("\n나의 자동차 아반때 생성\n");
	my_car.display();

	// speedUp() 사용
	printf("\nspeedUp() 이후 display()\n");
	my_car.speedUp();
	my_car.display();

	// changeGear() 로 3단으로 변경
	printf("\nchangeGear(3)으로 기어를 3단으로 변경 이후 display()\n");
	my_car.changeGear(3);
	my_car.display();

	// SportsCar 객체 생성
	printf("\n아빠의 자동차 람보르기니 생성\n");
	SportsCar father_car(0, "아빠의 람보르기니", 1);
	father_car.display();

	// 터보 OFF 상태에서 speedUp()
	father_car.bTurbo = false;
	printf("\n터보 OFF 상태에서 speedUp() 후 display()\n");
	father_car.speedUp();
	father_car.display();

	// 터보 ON
	printf("\n터보 ON\n");
	father_car.setTurbo(true);
	printf("\n터보 ON 상태에서 speedUp() 후 display()\n");
	father_car.speedUp();
	father_car.display();

	// whereAmI() - this 포인터 주소 출력
	printf("\nwhereAmI() 객체 주소 출력:\n");
	my_car.whereAmI();
	father_car.whereAmI();
}