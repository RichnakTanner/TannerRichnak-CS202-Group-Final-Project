//
//Created by Tanner Richnak on 4/28/21
//

#ifndef WAVABS_H
#define WAVABS_H

/**
 * This is the IReadable interface
 */

class IReadable {
public:
	/**
 	 * Abstract function to read data from a file
 	 * @param filename - the name of the .wav file being read from
 	 */

	virtual void readFile(const std::string &filename) = 0;
};

#endif 

