#include <iostream>
#include "./include/hooksdef.h"

int main() {
	std::cout<<HOOKS_PATH<<std::endl;
	int l = sizeof(HOOKS_SUPPORTED)/sizeof(HOOKS_SUPPORTED[0]);
	for (int i=0;i<l;i++)
		std::cout<<HOOKS_SUPPORTED[i]<<std::endl;
	return 0;
}
