#include "Token.h"
#include "Lexer.h"
#include <string>
#include <iostream>

using namespace std;



int main(){

	TokenType token;
	token = COMMA;
	TokenType token2;
	token2 = FACTS;

	Token a(token, ",", 3);
	Token b(token2, "here's a fact", 9);
	Lexer l;
	l.addToken(a);
	l.addToken(b);
	cout << l.print() << endl;
	return 0;
}
