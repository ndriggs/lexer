#include "Token.h"
#include <string>
#include <iostream>
#include <ifstream>
#include "Comment.h"
#include "NoEndComment.h"
#include "EndOfFile.h"
#include "String.h"
#include "NotAString.h"
#include "Lexer.h"

using namespace std;



int main(){
	
	
	Lexer l;
	string input = ",\n'a string'\n# a comment\nSchemes\nFactsRules\n::-\n\n\n";
	l.Run(input);	
	cout << l.print() << endl;

	return 0;
}
