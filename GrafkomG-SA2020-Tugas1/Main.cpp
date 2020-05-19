#include <iostream>
#include <GL/freeglut.h>

void myInit() {

	glClearColor(0.0, 0.5, 1.0, 1.0);
	glPointSize(5);
	glLineWidth(5);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 480.0, 0.0, 640.0);

}

void display() {

	glClear(GL_COLOR_BUFFER_BIT);

	/* Land Object - Start */
	glColor3f(0.54, 0.054, 0.054);

	glBegin(GL_POLYGON);
	glVertex2f(0.0, 0.0);
	glVertex2f(0.0, 50.0);
	glVertex2f(640.0, 50.0);
	glVertex2f(640.0, 0.0);
	glEnd();
	/* Land Object - End */

	/* House Object */
	glColor3f(1.0, 0.0, 0.0);

	glBegin(GL_TRIANGLES);
	glVertex2f(10.0, 10.0);
	glVertex2f(50.0, 80.0);
	glVertex2f(90.0, 10.0);
	glEnd();

	glFlush();
}


int main(int argc, char** argv) {

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Ardian Pramudya Alphita - 672018150");
	glutDisplayFunc(display);

	myInit();
	glutMainLoop();

	return 0;
}