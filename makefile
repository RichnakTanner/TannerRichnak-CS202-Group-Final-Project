WavProcessor: main.cpp WavManager.o Wav.o
	g++ -std=c++11 main.cpp WavManager.o Wav.o -o WavProcessor

WavManager.o: WavManager.cpp WavManager.h
	g++ -c -std=c++11 WavManager.cpp

Wav.o: Wav.cpp Wav.h
	g++ -c -std=c++11 Wav.cpp

clean:
	rm *.o WavProcessor something.wav
