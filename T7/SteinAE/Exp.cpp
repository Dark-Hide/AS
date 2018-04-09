#include <iostream>
#include <queue>
#include "stdafx.h"

int main() {
	std::queue <int> q;
	std::queue <int> a, b;
	for (int i = 0; i < 10; i++) {
		q.push(rand());
	}
	for (int i = 0; i < 10; i++) {
		if (q.front() % 2)
			b.push(q.front());
		else
			a.push(q.front());
		q.pop();

	}
	std::cout << "1 ������ �������: " << a.front() << "��������� ������ �������: " << a.back()
		<< "1 �������� �������: " << b.front() 
		<< "��������� �������� �������: " << b.back();
	return 0;
}