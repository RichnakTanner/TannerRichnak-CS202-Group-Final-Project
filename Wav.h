//
// Created by Tanner Richnak on 4/24/21.
//

#ifndef PROGRAMMING_ASSIGNMENT_3KL_WAV_H
#define PROGRAMMING_ASSIGNMENT_3KL_WAV_H


#include "WavHeader.h"
#include "ListHeader.h"
#include "List.h"
#include "IReadable.h"
#include <string>
#include <vector>

/**
 * This is the Wav class.  It is templatized so that it will accept data buffers of type short for 16 bit wav files or unsigned char for 8 bit wav files
 */

template <typename T>
class Wav : public IReadable {
public:
	/**
	 * Struct that holds technical information about the wav file
	 */
	WavHeader wavHeader;
	/**
	 * Struct that holds the header of the list subchunk
	 */
	ListHeader listHeader;
	/**
	 * Boolean value of whether or not the wav file has a list subchunk
	 */
	bool hasListChunk = 0;
	/**
	 * Vector of structs that hold metadata information
	 */
	std::vector<List> list;
	/**
	 * Pointer to an array that holds the audio data of the wav file
	 */
	T* buffer = NULL;
	/**
	 * Name of the wav file being read from
	 */
	std::string inFile;
public:
	/**
	 * Constructor for the Wav class
	 * @param inFile - name of the wav file being read from
	 */
	Wav(std::string inFile);
	/**
	 * Function to read data from an inputted .wav file
	 * @param filename - the name of the .wav file being read from; overrides from IReadable
	 */
    void readFile(const std::string &filename) override;
    /**
	 * Function to write data to a wav file
	 * @param outFileName - the name of the .wav file being written to
	 */
    void writeFile(const std::string &outFileName);   
    
    /**
	 * Determines if the wav file has a List subchunk
	 */
    bool checkForList();
    /**
	 * Returns the size of the data buffer in bytes
	 */
    int getBufferSize() const;
    /**
	 * Returns a pointer to the data buffer
	 */
    T *getBuffer() const;
    /**
	 * Returns the vector of List objects
	 */
    std::vector<List> getListVector() const;
    
    /**
	 * Destructor for the Wav class that deletes the buffer if it is not empty
	 */
    virtual ~Wav<T>(){
		if(buffer != NULL) {
	   		delete[] buffer;
		}
	}
};


#endif //PROGRAMMING_ASSIGNMENT_3KL_WAV_H
