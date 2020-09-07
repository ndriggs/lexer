#include "NoEndComment.h"
#include <string>

NoEndComment::NoEndComment(){
	type = UNDEFINED;
}

int NoEndComment::Read(const string& input){
	if(input.substr(0,2) != "#|"){
		return 0;
	}
	return input.size();
}


