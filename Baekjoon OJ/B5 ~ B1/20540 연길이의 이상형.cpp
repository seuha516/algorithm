#include <iostream>
#include <string>

int main()
{
	std::string s;
	std::cin >> s;
	
	printf("%c%c%c%c",s[0]=='E'?'I':'E',s[1]=='S'?'N':'S',s[2]=='T'?'F':'T',s[3]=='J'?'P':'J');
	
    return 0;
}
