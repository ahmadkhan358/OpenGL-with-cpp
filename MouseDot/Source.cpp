#include<Windows.h>
#include<GL/GL.h>
#include<GL/glut.h>

int coordx;
int coordy;
int screenheight = 600;
int screenwidth = 800;

void myMouse(int button, int state, int x, int y) {
	if (state == GLUT_DOWN) {
		if (button == GLUT_LEFT_BUTTON) {
			//glClearColor(0.3f, 1.0f, 0.7f, 0.0f); teal
			//glClear(GL_CLEAR_BUFFER_BIT);

			coordx = x;
			coordy = screenheight - y;

			glPointSize(5.0);
			glBegin(GL_TRIANGLES); {
				glColor3f(0.0f, 0.0f, 0.0f);
				glVertex2i(60, 120);
				glVertex2i(coordx, coordy);
				glVertex2i(240, 120);
			}
			glEnd();
			glFlush();
		}
		else if (button == GLUT_RIGHT_BUTTON) {
			glClearColor(1.0f, 0.0f, 1.0f, 0.0f); //Magenta
			glClear(GL_COLOR_BUFFER_BIT);
			glFlush();
		}
	}
}

void myDisplay() {
	glClearColor(1.0f, 1.0f, 0.0f, 0.0f); //Yellow
	glClear(GL_COLOR_BUFFER_BIT);
	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(800, 600);
	glutCreateWindow("Draw Dots");
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 800, 0, 600);
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glViewport(0, 0, 400, 400);
	glutMouseFunc(myMouse);
	glutDisplayFunc(myDisplay);
	glutMainLoop();

	return 0;
}