#include "Lexer.h"
#include "MatcherAutomaton.h"
using namespace std;

void Lexer::Lexer(){
	machines.pushback(MatcherAutomaton comma(","));
	machines.pushback(MatcherAutomaton period("."));
	machines.pushback(MatcherAutomaton q_mark("?"));

}

void Lexer::addToken(Token tolkien){
	tokens.push_back(tolkien);
}

string Lexer::print(){
	stringstream str;
	for(int i = 0; i < tokens.size(); i++){                          
		str << tokens[i].out() << endl;		
	}
	str << "Total Tokens = " << tokens.size();
	return str.str();	
}

void Lexer::Run(string input){
	int lineNumber = 1;



}
