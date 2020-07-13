//============================================================================
// Name        : sdl.cpp
// Author      : Mohamed
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include "../Headers/Screen.h"
#include "../Headers/Particle.h"
#include "../Headers/Swarm.h"


using namespace std;

int main() {

	srand(time(NULL));

	Screen screen;

	if(screen.init() == false){
		cout << "Error init SDL" << endl;
	}

	Swarm swarm;

    //GUI LOOP
    while(true){
    	int elapsed = SDL_GetTicks();
    	unsigned char green = (1 + sin(elapsed*0.0005))* 128;
    	unsigned char red = (1 + sin(elapsed*0.0004))* 128;
    	unsigned char blue = (1 + sin(elapsed*0.0006))* 128;

    	//Draw particles
    	const Particle * const pParticles = swarm.getParticles();
    	for(int i=0; i<Swarm::NPARTICLES; i++){
    		Particle particle = pParticles[i];
    		int x = (particle.m_x + 1) * Screen::SCREEN_WIDTH/2;
    		int y = (particle.m_y + 1) * Screen::SCREEN_HEIGHT/2;
    		screen.setPixel(x, y, red, green, blue);
    	}

    	//draw the screen
    	screen.update();

    	// check for events
    	if (screen.processEvents() == false){
    		break;
    	}
    }

    screen.close();

	return 0;
}
