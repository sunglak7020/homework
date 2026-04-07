#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <cstdio>
#include <cstring> 
#include "Car.h" // 자동차 클래스 헤더파일 포함
// 스포츠카 클래스 (자식 클래스) : 자동차 클래스에 터보 기능 추가
class SportsCar : public Car
{
public:
	bool bTurbo; // 터보 장치 ON?
	SportsCar(int s, const char* n, int g) : Car(s, n, g) { bTurbo = false; } // 생성자 추가
	void setTurbo(bool bTur) { bTurbo = bTur; }
	void speedUp() { // 터보가 ON이 되어 있으면 가속이 빨리됨
		if (bTurbo) speed += 20;
		else Car::speedUp();
	}
};