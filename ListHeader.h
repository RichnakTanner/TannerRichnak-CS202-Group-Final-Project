//
//Created by Tanner Richnak on 4/24/2021
//

#ifndef LISTHEADER_H
#define LISTHEADER_H

typedef struct ListHeader {
	char LIST[4];
	int listChunkSize;
	char typeID[4];
}ListHeader;

#endif
