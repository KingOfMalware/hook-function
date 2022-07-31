#pragma comment(lib,"path to lib")
#include <iostream>
extern "C" int getData(int number);
int main() {
	std::cout << getData(10);
	return 0;
}
