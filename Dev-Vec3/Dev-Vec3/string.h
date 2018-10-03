#ifndef _STRING_
#define _STRING_

#include<assert.h>

class base_string
{
private:
	char* text = nullptr;
	unsigned int allocated_memory = 0u;

public:
	

	base_string() {}

	base_string(char c) {
		text = &c;
		allocated_memory = 1;
	}
	
	base_string(const char* c) {
		assert(c != nullptr);
		if (c)
		{
			unsigned int i = 0;
			while (c[i] != '\0') 
				i++;
			
			text = new char[i];

			for (unsigned int j = 0; j <= i; j++)
				text[j] = c[j];
			
			allocated_memory = i;
		}
		else
		{
			allocated_memory = 0;
			text = new char[0];
		}
	}

	base_string(const base_string &str) :text(str.text), allocated_memory(str.allocated_memory) {}

	~base_string() {
		if (text != nullptr) {
			text = nullptr;
			allocated_memory = 0;
			delete[] text;
			
		}

		
	}


	base_string operator = (const char* c) {
		if (c != nullptr) {
			unsigned int i = 0;
			while (c[i] != '\0')
				i++;


			if (i > allocated_memory) {
				delete[] text;


				text = new char[i];
			}
			for (unsigned int j = 0; j <= i; j++)
				text[j] = c[j];

			allocated_memory = i;
		}
		return *this;
	}

	base_string operator = (base_string &str) {
		
		text = str.text;
		allocated_memory = str.allocated_memory;
		return *this;
	}
	
};

#endif // !_STRING_
