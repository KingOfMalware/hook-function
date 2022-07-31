#include <iostream>
#include <string>
using namespace std;

extern "C" __declspec(dllexport) int getData(int number) {
	return number += number;
}
