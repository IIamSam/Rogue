#include "curses.h"
#include "screen.h"

int main() {
	// Initialize ncurses
	Screen gameScreen;
	gameScreen.init();
	clear();

	// Print a string on screen
	printw("Seems that you can use curses ...\nPress any key to exit!");

	// Wait until the user press a key
	getch();

	// Clear ncurses data structures
	endwin();
}