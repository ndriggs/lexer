#pragma once
#include "Automaton.h"

using namespace std;

class MatcherAutomaton : public Automaton 
{
private:
	string toMatch;

public:
	MatcherAutomaton(string toMatch); //before also had TokenType type
	int Read(const string& input);
};

