#include "Token.h"
#include <string>
#include <iostream>
#include <fstream>
#include "Comment.h"
#include "NoEndComment.h"
#include "EndOfFile.h"
#include "String.h"
#include "NotAString.h"
#include "Lexer.h"

using namespace std;



int main(int argc, char **argv){	
	ifstream in_file(argv[1]);		
	string line;
	string input;
	while(getline(in_file, line)){
		input += line;
		input.push_back('\n');
	}
	input.push_back(EOF);
	Lexer l;
	l.Run(input);
	ofstream out_file("tokens.txt");
	out_file << l.print();
	return 0;
}
