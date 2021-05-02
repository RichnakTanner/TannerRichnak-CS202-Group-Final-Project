//
//Created by Tanner Richnak on 4/24/2021
//
#ifndef LIST_H
#define LIST_H

#include <string>

//metadata subchunk

typedef struct List {
	char infoID[4];
	int infoSize;
	char* info;
}List;

#endif
