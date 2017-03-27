
#include<GL/glut.h>
#include<stdio.h>
#include<GL/freeglut.h>
#include<GL/gl.h>

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS);
	glColor3f(1,0,1);
	glVertex2f(100,100);
	glEnd();
	glFlush();
}

void myinit()
{
	glClearColor(1.0,1.0,1.0,1.0);
	glOrtho(0,500,0,500,0,500);
	glPointSize(10);
}

int main(int argc, char **argv)
{
	glutInit(&argc , argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutCreateWindow("test");
	glutInitWindowSize(500,500);
	glutInitWindowPosition(0,0);
	glutDisplayFunc(display);
	myinit();
	glutMainLoop();
	return 1;
}
