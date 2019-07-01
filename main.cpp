
#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (0.0, 0.0, 0.0);
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(-80, 10);
glVertex2i(-40, -50);
glVertex2i(40, -50);
glVertex2i(80, 10);
glEnd();

glColor3f (1.0, 0.0, 0.0);
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(-60, 10);
glVertex2i(-60, 90);
glVertex2i(-40, 90);
glVertex2i(-40, 10);
glEnd();

glColor3f (1.0, 0.0, 0.0);
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(-55, 100);
glVertex2i(-55, 110);
glVertex2i(-45, 110);
glVertex2i(-45, 100);
glEnd();

glColor3f (1.0, 0.0, 0.0);
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(-45, 120);
glVertex2i(-45, 130);
glVertex2i(-35, 130);
glVertex2i(-35, 120);
glEnd();

glColor3f (1.0, 0.0, 0.0);
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(-35, 140);
glVertex2i(-35, 150);
glVertex2i(-25, 150);
glVertex2i(-25, 140);
glEnd();


glColor3f (1.0, 0.0, 1.0);
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(-10, 10);
glVertex2i(-10, 70);
glVertex2i(10, 70);
glVertex2i(10, 10);
glEnd();

glColor3f (1.0, 0.0, 1.0);
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(-5, 80);
glVertex2i(-5, 90);
glVertex2i(5, 90);
glVertex2i(5, 80);
glEnd();

glColor3f (1.0, 0.0, 1.0);
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(5, 100);
glVertex2i(5, 110);
glVertex2i(15, 110);
glVertex2i(15, 100);
glEnd();

glColor3f (1.0, 0.0, 1.0);
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(15, 120);
glVertex2i(15, 130);
glVertex2i(25, 130);
glVertex2i(25, 120);
glEnd();



glColor3f (0.0, 0.0, 1.0);
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(40, 10);
glVertex2i(40, 50);
glVertex2i(60, 50);
glVertex2i(60, 10);
glEnd();

glColor3f (0.0, 0.0, 1.0);
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(45, 60);
glVertex2i(45, 70);
glVertex2i(55, 70);
glVertex2i(55, 60);
glEnd();

glColor3f (0.0, 0.0, 1.0);
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(55, 80);
glVertex2i(55, 90);
glVertex2i(65, 90);
glVertex2i(65, 80);
glEnd();

glColor3f (0.0, 0.0, 1.0);
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(65, 100);
glVertex2i(65, 110);
glVertex2i(75, 110);
glVertex2i(75, 100);
glEnd();

glFlush();
}
void myInit (void)
{
glClearColor(1.0, 1.0, 1.0, 0.0);
glColor3f(0.0f, 0.0f, 0.0f);
glPointSize(4.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-320,320,-240,240);
}

main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 150);
glutCreateWindow ("my first attempt");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
