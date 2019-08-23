#include "header.h"
#include "Core.h"

int main(int argc, char *argv[])
{
	for (int i = 0; i < 2; i++) {
        if (SDL_JoystickOpen(i) == NULL) 
        {
            //WriteLogFile("sdmc://WriteLogFile.log", LogType_Info,"SDL_JoystickOpen: %s\n", SDL_GetError());
        }
        else
        {
            //WriteLogFile("sdmc://WriteLogFile.log", LogType_Info,"SDL_JoystickOpen: OK\n");
        }
    } 
	CCore oCore;
	
	oCore.mainLoop();

	return 0;
}
