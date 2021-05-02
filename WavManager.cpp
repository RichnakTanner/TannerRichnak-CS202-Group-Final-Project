//
//Created by Tanner Richnak on 4/24/21
//

#include "WavManager.h"
#include <fstream>

void WavManager::populateVector(std::vector<std::string> filenames) {
	for (std::string filename : filenames) {
		WavHeader n;
		std::ifstream file(filename,std::ios::binary | std::ios::in);
		if(file.is_open()) {
			file.read((char*)&n, sizeof(WavHeader));
			file.close();
		}
		if (n.bitDepth == 8) {
			IReadable* a = new Wav<unsigned char>(filename);
			a->readFile(filename);
			wavs.push_back(a);
		} else if (n.bitDepth == 16) {
			IReadable* a = new Wav<short>(filename);
			a->readFile(filename);
			wavs.push_back(a);
		}
	}
}
