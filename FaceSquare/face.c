#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
//1st box
glColor3ub(246, 115, 16);
glBegin(GL_POLYGON);
glVertex2d(200,200);
glVertex2d(400,200);
glVertex2d(400,400);
glVertex2d(200,400);
glEnd();

//2nd box
glColor3ub(16, 245, 173);
glBegin(GL_POLYGON);
glVertex2d(400,0);
glVertex2d(600,0);
glVertex2d(600,200);
glVertex2d(400,200);
glEnd();

//3nd box
glColor3ub(246, 16, 222);
glBegin(GL_POLYGON);
glVertex2d(600,200);
glVertex2d(800,200);
glVertex2d(800,400);
glVertex2d(600,400);
glEnd();

//4th box
glColor3ub(241, 249, 32);
glBegin(GL_POLYGON);
glVertex2d(400,400);
glVertex2d(600,400);
glVertex2d(600,600);
glVertex2d(400,600);
glEnd();

//mouth
glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d(450,250);
glVertex2d(550,250);
glVertex2d(550,260);
glVertex2d(450,260);
glEnd();

//left eye
glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d(460,350);
glVertex2d(470,350);
glVertex2d(470,360);
glVertex2d(460,360);
glEnd();

//right  eye
glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d(540,350);
glVertex2d(540,360);
glVertex2d(530,360);
glVertex2d(530,350);
glEnd();

//nose
glColor3ub(255, 255, 255);
glBegin(GL_TRIANGLES);
glVertex2d(490,300);
glVertex2d(510,300);
glVertex2d(500,320);
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
gluOrtho2D(0,1000,0,1000);
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
glutInitWindowSize (500, 500);
glutInitWindowPosition (100, 100);
glutCreateWindow ("hello");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}



