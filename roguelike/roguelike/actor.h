class Actor{
	char symbol; //glyph of representation for the screen
	int xPos = 0, yPos = 0; // coordinates of the actor
public:
	void erase(); //replaces current position with a ' '
	void draw(int y, int x); //draws this.symbol
};