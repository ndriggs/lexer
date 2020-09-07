#include "Token.h"
#include <string>
#include <iostream>
#include "Comment.h"
#include "NoEndComment.h"
#include "EndOfFile.h"
#include "String.h"
#include "NotAString.h"
#include "ID.h"

using namespace std;



int main(){
	
	Identity com_mach;
	string inp = "word ";
	int length;
	length = com_mach.Read(inp);
	cout << length << endl;

	/*
	TokenType token;
	token = COMMA;
	TokenType token2;
	token2 = FACTS;

	Token a(token, ",", 3);
	Token b(token2, "here's a fact", 9);
	Lexer l;
	l.addToken(a);
	l.addToken(b);
	cout << l.print() << endl; */
	return 0;
}
