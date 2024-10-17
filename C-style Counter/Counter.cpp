#include <iostream>

unsigned strlen(const char *str)
{
    int count=0;
    while(*str!='\0')
    {
        count++;
        str+=1;
    }
    return count;
}

int main()
{
    char string[]="Hello world!";
	cout<<strlen(string);
	return 0;
}
