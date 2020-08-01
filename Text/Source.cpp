#include <GL\glew.h>

#include <GL\freeglut.h>

#include <Windows.h>

#include <iostream>

using namespace std;
int a = 0, b = 0;
void myInit() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 800, 0, 800);
}

//void setXY(int x, int y) {
//	a = x, b = y;
//}
//
//
//void dragShape(int x, int y) {
//	glClear(GL_COLOR_BUFFER_BIT);
//	glBegin(GL_POLYGON);
//	glColor3f(1, 1, 0);
//	glVertex2d(a, 800 - b);
//	glVertex2d(x, 800 - b);
//	glVertex2d(x, 800 - y);
//	glEnd();
//	glFlush();
//}

void myDisplay() {
	/*glutPassiveMotionFunc(setXY);
	glutMotionFunc(dragShape);
	glFlush();*/

	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);
	glColor3f(1, 0, 0);
	glVertex2d(100, 200);
	glVertex2d(150, 350);
	glEnd();


	glBegin(GL_LINES);
	glColor3f(1, 0, 0);
	glVertex2d(150, 350);
	glVertex2d(200, 200);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(1, 0, 0);
	glVertex2d(125, 275);
	glVertex2d(175, 275);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(1, 1, 0);
	glVertex2d(300, 200);
	glVertex2d(200, 300);
	glEnd();

	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(800, 800);
	glutCreateWindow("My text");
	glutDisplayFunc(myDisplay);
	myInit();
	glutMainLoop();

	return 0;
}
