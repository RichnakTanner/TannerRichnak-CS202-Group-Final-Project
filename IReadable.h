//
//Created by Tanner Richnak on 4/28/21
//

#ifndef WAVABS_H
#define WAVABS_H

class IReadable {
public:
	virtual void readFile(const std::string &filename) = 0;
};

#endif 

