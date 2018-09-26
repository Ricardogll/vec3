#ifndef _STRING_
#define _STRING_

#include <iostream>

class base_string
{
private:
	char* text;
	unsigned int length = 0u;

public:
	

	base_string() {}

	base_string(char c) {
		text = &c;
		length = 1;
	}
	
	base_string(const char* c) {
		if (c)
		{
			unsigned int i = 0;
			while (c[i] != '\0') 
				i++;
			
			text = new char[i];

			/*for (unsigned int j = i; j >= 0; j--)
				text[j] = c[j];*/
			for (unsigned int j = 0; j <= i; j++)
				text[j] = c[j];
			
			length = i;
		}
		else
		{
			length = 0;
			text = new char[0];
		}
	}

	base_string(const base_string &str) :text(str.text), length(str.length) {}




	void operator = (const char* c) {
		unsigned int i = 0;
		while (c[i] != '\0')
			i++;

		text = new char[i];
		for (unsigned int j = 0; j <= i; j++)
			text[j] = c[j];

		length = i;
	}

	
};

#endif // !_STRING_
