#pragma once 
#include "Token.h"
#include <sstream>
#include <string>
#include <vector>
using namespace std;

class Lexer {
	private:
		vector<Token> tokens;
		vector<Automaton> machines;
	public:
		void addToken(Token tolkien);
		void Run(string input);
		string print();
};
