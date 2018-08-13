# str 


## 例子  


~~~

#include "str.h"

int main(int argc, char *argv[])
{
	
	std::vector<std::string> strList = str::splitString("a b c d e f", " "); 
	//  strList[0] = a
	//  strList[1] = b
	//  strList[2] = c
	//  strList[3] = d
	//  strList[4] = e
	//  strList[5] = f


	str::startsWith("Hello World", "Hello"); // true
	str::startsWith("Hello World", "ello"); // false


	str::endsWith("Hello World", "World"); // true
	str::endsWith("Hello World", "Worl"); // false

	return 0;
}

~~~