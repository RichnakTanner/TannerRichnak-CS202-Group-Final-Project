//
//Created by Tanner Richnak on 4/24/21
//

#ifndef WAVMANAGER_H
#define WAVMANAGER_H

#include "Wav.h"
#include "Wav.cpp"
#include "IReadable.h"
#include <vector>


/**
 * This is the WavManager class
 */
class WavManager {
public:
	std::vector<IReadable*> wavs;
public:
	/**
	 * Creates Wav objects and calls the read function for each file in the filenames vector
	 * @param filenames - vector of names of .wav files
	 */
	void populateVector(std::vector<std::string> filenames);

};

#endif
