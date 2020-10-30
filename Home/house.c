#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
//house white shape
glColor3f(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d(100,80);
glVertex2d(500,80);
glVertex2d(500,380);
glVertex2d(100,380);
glEnd();

//green roof
glColor3f(0, 255, 0);
glBegin(GL_TRIANGLES);
glVertex2d(100,380);
glVertex2d(500,380);
glVertex2d(300,520);
glEnd();

// blue door
glColor3f(0, 0, 255);
glBegin(GL_POLYGON);
glVertex2d(270,80);
glVertex2d(350,80);
glVertex2d(350,260);
glVertex2d(270,260);
glEnd();

// left red window
glColor3f(255, 0, 0);
glBegin(GL_POLYGON);
glVertex2d(130,170);
glVertex2d(205,170);
glVertex2d(205,245);
glVertex2d(130,245);
glEnd();

// right red window
glColor3f(255, 0, 0);
glBegin(GL_POLYGON);
glVertex2d(380,170);
glVertex2d(470,170);
glVertex2d(470,245);
glVertex2d(380,245);
glEnd();



/* don't wait!
* start processing buffered OpenGL routines
*/
glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
//glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
gluOrtho2D(0,600,0,600);
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
glutCreateWindow ("House");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}


