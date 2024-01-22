#include<allegro5\allegro.h>
#include<iostream>
using namespace std;

//GLOBALS and constants
const float FPS = 60;
const int WIDTH = 900;
const int HEIGHT = 480;
const int bouncer_SIZE = 32;
bool keys[4] = {
 false, false, false, false };
enum KEYS { 
UP, DOWN, LEFT, RIGHT };

int main()
{

	//allegro variables
	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_EVENT_QUEUE *event_queue = NULL;
	ALLEGRO_TIMER *timer = NULL;
	ALLEGRO_BITMAP *bouncer = NULL;

	float bouncer_x = WIDTH / 2.0 - bouncer_SIZE / 2.0;
	float bouncer_y = HEIGHT / 2.0 - bouncer_SIZE / 2.0;
	bool keys[4] = { false, false, false, false };
	bool redraw = true;
	bool doexit = false;

	
	al_init();
	al_install_keyboard();
	al_init_image_addon();
	al_init_font_addon();
	al_init_ttf_addon();
	al_init_primitives_addon();

}