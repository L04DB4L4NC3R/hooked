#include <iostream>
#include "./include/hooksdef.h"

const char* Hooks::getPath() {
	return path;
}

void Hooks::setPath(const char* path) {
	if (path == NULL)
		this->path = HOOKS_PATH;
	else 
		this->path = path;
}

char* Env::getValue(){
	return value;
}

void Env::setValue(char* value) {
	this->value = value;
}
