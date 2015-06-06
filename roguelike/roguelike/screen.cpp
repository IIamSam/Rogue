#include "curses.h"
#include "screen.h"

void Screen::init(){
	initscr(); //init curses, creates first screen
	curs_set(0);// invisible cursor
	keypad(stdscr, TRUE); //changes getch to return values better for arrow keys and stuff
	noecho(); //input is not echoed into the terminal
	refresh(); //to complete initialization
}