
#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
glColor3ub(252, 248, 248);
glBegin(GL_POLYGON);

glVertex2d(-700,400);
glVertex2d(-300,400);
glVertex2d(-100,0);
glVertex2d(-500,0);
glEnd();

glColor3ub(252, 248, 248);
glBegin(GL_POLYGON);

glVertex2d(-500,0);
glVertex2d(-100,0);
glVertex2d(-300,-400);
glVertex2d(-700,-400);

glEnd();

glColor3ub(252, 248, 248);
glBegin(GL_TRIANGLES);

glVertex2d(-100,0);
glVertex2d(200,0);
glVertex2d(-100,400);

glEnd();

glColor3ub(252, 248, 248);
glBegin(GL_TRIANGLES);

glVertex2d(-100,0);
glVertex2d(-100,-400);
glVertex2d(200,-400);

glEnd();

glColor3ub(218, 120, 120);
glBegin(GL_TRIANGLES);

glVertex2d(-50,50);
glVertex2d(-50,250);
glVertex2d(100,50);

glEnd();

glColor3ub(218, 120, 120);
glBegin(GL_TRIANGLES);

glVertex2d(-50,-350);
glVertex2d(-50,-150);
glVertex2d(100,-350);

glEnd();

glColor3ub(252, 248, 248);
glBegin(GL_TRIANGLES);

glVertex2d(200,0);
glVertex2d(400,300);
glVertex2d(400,-300);

glEnd();

glColor3ub(252, 248, 248);
glBegin(GL_POLYGON);

glVertex2d(400,200);
glVertex2d(700,200);
glVertex2d(700,-200);
glVertex2d(400,-200);

glEnd();

glColor3ub(252, 248, 248);
glBegin(GL_TRIANGLES);

glVertex2d(700,-300);
glVertex2d(900,0);
glVertex2d(700,300);

glEnd();



/*
glVertex3f(0.25,0.25,0.0);
glVertex3f(0.75,0.25,0.0);
glVertex3f(0.75,0.75,0.0);
glVertex3f(0.25,0.75,0.0);
*/


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
gluOrtho2D(-900,900,-900,900);
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
glutCreateWindow ("Uzzal");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}


