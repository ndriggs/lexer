#include "Token.h"
#include <sstream>
using namespace std;

const char* TokenNames[] = {
	"COMMA",
	"PERIOD",
	"Q_MARK",
	"LEFT_PAREN",
	"RIGHT_PAREN",
	"COLON",
	"COLON_DASH",
	"MULTIPLY",
	"ADD",
	"SCHEMES",
	"FACTS",
	"RULES",
	"QUERIES",
	"ID",
	"STRING",
	"COMMENT",
	"UNDEFINED",
	"END_FILE"
};

Token::Token(TokenType type, string input, int line){
	this->type = type;
	this->value = input;
	this->line = line;
}

string Token::out(){
	stringstream str;
	str << "(" << TokenNames[type] << ",\"" << value << "\"," << line << ")";
	return str.str();
}

//and then maybe an output Token function
