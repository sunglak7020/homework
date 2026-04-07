#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <cstdio>
#define MAX_DEGREE 80 // 다항식의 처리 가능한 최대 차수+1

class Polynomial {
	int degree;             // 다항식의 최고 차수
	float coef[MAX_DEGREE]; // 각 항에 대한 계수
public:
	Polynomial() { degree = 0; } // 생성자: 최대 차수를 0으로 초기화

	// 다항식의 내용을 입력받는 멤버함수
	void read() {
		printf("다항식의 최고 차수를 입력하시오: ");
		scanf("%d", &degree);
		printf("각 항의 계수를 입력하시오 (총 %d개): ", degree + 1);
		for (int i = 0; i <= degree; i++)
			scanf("%f", coef + i);
	}

	// 두 다항식을 더하는 멤버함수
	void add(Polynomial a, Polynomial b) {
		if (a.degree > b.degree) {
			degree = a.degree;
			int diff = a.degree - b.degree;
			for (int i = 0; i < diff; i++)
				coef[i] = a.coef[i];
			for (int i = diff; i <= a.degree; i++)
				coef[i] = a.coef[i] + b.coef[i - diff];
		}
		else {
			degree = b.degree;
			int diff = b.degree - a.degree;
			for (int i = 0; i < diff; i++)
				coef[i] = b.coef[i];
			for (int i = diff; i <= b.degree; i++)
				coef[i] = a.coef[i - diff] + b.coef[i];
		}
	}

	// 다항식의 내용을 화면에 출력하는 함수
	void display(const char* str = " Poly = ") { // 디폴트 매개변수 사용
		printf("\t%s", str);
		for (int i = 0; i < degree; i++)
			printf("%5.1f x^%d + ", coef[i], degree - i); // Printf → printf 수정
		printf("%4.1f\n", coef[degree]);
	}
};