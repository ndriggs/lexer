#include "NotAString.h"
#include <string>

NotAString::NotAString(){
	type = UNDEFINED;
}

int NotAString::Read(const string& input){
	if(input[0] != '\''){
		return 0;
	}
	for(int i = 1; i < input.size(); i++){
		if(input[i] == '\''){
			return 0;
		}
		if(input[i] == '\n')
			return i + 1;
	}
	return 0;
}
