#include <iostream>
#include <vector>
#include <fstream>
#include "Wav.h"
#include "WavManager.h"


const std::string _8bitM = "yes-8bit-mono.wav";
const std::string _8bitS = "yes-8-bit-stereo.wav";
const std::string _16bitM = "yes-16-bit-mono.wav";
const std::string _16bitS = "yes-26-bit-stereo.wav";

int main() {
	WavManager n;
	std::vector<std::string> filenames;
	filenames.push_back(_8bitM);
	filenames.push_back(_8bitS);
	filenames.push_back(_16bitM);
	filenames.push_back(_16bitS);
	
	n.populateVector(filenames);
	
	for (IReadable *wav: n.wavs) {
		if(auto * a = dynamic_cast<Wav<short>*>(wav)) {
			a->writeFile("something.wav");
		} else if(auto * a = dynamic_cast<Wav<unsigned char>*>(wav)) {
			a->writeFile("something.wav");	
		}
	}

    return 0;
}
