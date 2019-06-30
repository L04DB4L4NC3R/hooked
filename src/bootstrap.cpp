// Pre requisites:
// GCC 9
// C++ 17
// g++ -lstdc++fs bootstrap.cpp -o bs # With experimental
// g++ -std=c++17 bootstrap.cpp -o bs # With C++17 and GCC 9
// Note that without GCC 9 -> namespace std::experimental::filesystem
// With GCC 9 it uses std::filesystem as the filesystem officially became the part of ISO C++ in 17.


#include <iostream>
#include <cstdint>
#include <filesystem>
#include "./include/hooksdef.h"
namespace fs = std::filesystem;

// Delete all samples and replace them with hook files
// looks in the HOOKS_PATH by default
int main() {
	fs::path dir = HOOKS_PATH;
	std::uintmax_t n = fs::remove_all(dir / "*.sample")
	cout<<n;

	// TODO: create files 
	int len = sizeof(HOOKS_SUPPORTED)/sizeof(HOOKS_SUPPORTED[0])
	for(int i = 0; i < len; i++) {
	// create file TODO
		cout << "Created " << HOOKS_SUPPORTED[i];
	}
	return 0;
}
