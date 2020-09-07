#include "EndOfFile.h"
#include <string>

EndOfFile::EndOfFile(){
	type = UNDEFINED;
}

int EndOfFile::Read(const string& input){
	if(input.eof()){ // need to make sure input is an ifstream
		return 1;
	} else {
		return 0;
	}
}
