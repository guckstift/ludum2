
#ifndef SOUND_H
#define SOUND_H

#include <SDL_mixer.h>

class Sound
{
public:
	Mix_Chunk *chunk;
	
	Sound (char *filename);
	~Sound ();
};

#endif

