/*
 * Screen.h
 *
 *  Created on: Jul 13, 2020
 *      Author: mohamed
 */

#ifndef SCREEN_H_
#define SCREEN_H_

#include <iostream>
#include <SDL2/SDL.h>

class Screen {
public:
	const static int SCREEN_WIDTH = 800;
	const static int SCREEN_HEIGHT = 600;

private:
	SDL_Window *m_window;
	SDL_Renderer *m_renderer;
	SDL_Texture *m_texture;
	Uint32 *m_buffer;

public:
	Screen();
	void close();
	bool init();
	bool processEvents();
	void update();
	void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
	void clear();
};

#endif /* SCREEN_H_ */
