#include <GL/gl.h>
#include <GL/glut.h>

int x = 50, y = 50,isBlack=1;
int i,j;

void whiteBox(int x, int y)
{
	glBegin(GL_LINE_LOOP);
	glVertex2i(x, y);
	glVertex2i(x, y + 50);
	glVertex2i(x + 50, y + 50);
	glVertex2i(x + 50, y);
	glEnd();
}

void blackBox(int x, int y)
{
	glBegin(GL_POLYGON);
	glVertex2i(x, y);
	glVertex2i(x, y + 50);
	glVertex2i(x + 50, y + 50);
	glVertex2i(x + 50, y);
	glEnd();
}
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
glColor3f(0.0, 0.0, 0.0);
glPointSize(1.0);

for(i=0;i<8;i++){
    if (i % 2 == 0)
		{
			isBlack = 1;
		}
		else
		{
			isBlack = 0;
		}

		for(j=0;j<8;j++){

            if(isBlack==1){
                blackBox(x, y);
				isBlack = 0;
            }
            else{
                whiteBox(x, y);
				isBlack = 1;
            }
            x += 50;
		}
		y += 50;
		x = 50;

}




blackBox(100, 100);
whiteBox(150, 100);
glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor(1.0, 1.0, 1.0, 0.0);
	glColor3f(0.0f, 0.0f, 0.0f);
	glPointSize(4.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
//glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
gluOrtho2D(0,600.0,0,600.0);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (800, 500);
glutInitWindowPosition (100, 100);
glutCreateWindow ("Cheese Board: 172-15-9838");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}



