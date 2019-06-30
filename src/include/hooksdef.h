#pragma once
#define HOOKS_PATH ".git/hooks/"

const char* HOOKS_SUPPORTED[] = {"applypatch-msg", "pre-applypatch", "post-applypatch", "pre-commit", "prepare-commit-msg", "commit-msg", "post-commit", "pre-rebase", "post-checkout", "post-merge", "pre-receive", "update", "post-receive", "post-update", "pre-auto-gc", "post-rewrite", "pre-push"};

class Env {
	char* value;	
	
	public:
		char* key;
		char* getValue();
		void setValue(char*);
};

class Hooks {
	char* hook;
	const char* path;
	Env** env;
	char** commands;

	public:
		const char* getPath();
		void setPath(const char*);
};
