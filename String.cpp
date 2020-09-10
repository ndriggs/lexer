#include "String.h"
#include <string>

String::String(){
	type = STRING;
}

int String::Read(const string& input){
	if(input[0] != '\''){
		return 0;
	}
	for(int i = 1; (unsigned)i < input.size(); i++){
		if(input[i] == '\''){
			return i + 1;
		}
	}
	return 0;
}

