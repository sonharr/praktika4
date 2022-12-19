#include <iostream>
#include <chrono>
using namespace std;

int main() {
	int b = 3, c = 3;
	long float res = 0;
	auto start = std::chrono::steady_clock::now();
	for (int i = 0; i <= 10000000; i++)
		res += (b * 2 + c - i);
	auto end = chrono::steady_clock::now();
	chrono::duration<double> elapsed_seconds = end - start;
	cout « res « endl;
	cout « "elapsed time: " « elapsed_seconds.count() « endl;
	return 0;
}
