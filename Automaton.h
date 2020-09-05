#pragma once
#include "Token.h"
using namespace std;

class Automaton{
protected:
	int newLines = 0;
	TokenType type;

public:
	Automaton(TokenType type);
	virtual int Read(const string& input) = 0;
	virtual Token* CreateToken(string input, int lineNumber);
	virtual int NewLinesRead() const;
};
