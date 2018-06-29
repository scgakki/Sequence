#ifndef SEQUENCE_H
#define SEQUENCE_H

#include <iostream>

class Sequence
{
public:
	Sequence(const char * filename);
	int length();
	int numberOf(char base);
	std::string longestConsecutive();
private:
	const char * filename;
	char letter;
	char base;
	int acount;
	int gcount;
	int ccount;
	int tcount;
	int longest;
	std::string s;
};
#endif
