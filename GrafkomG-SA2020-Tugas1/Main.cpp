#include <iostream>
#include <GL/freeglut.h>

void myInit() {

	glClearColor(0.0, 0.5, 1.0, 1.0);
	glPointSize(5);
	glLineWidth(2);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 480.0, 0.0, 640.0);

}

void display() {

	glClear(GL_COLOR_BUFFER_BIT);

	/* Land Object - Start */
	glColor3d(0.54, 0.054, 0.054);

	glBegin(GL_POLYGON);
	glVertex2f(0.0, 0.0);
	glVertex2f(0.0, 50.0);
	glVertex2f(640.0, 50.0);
	glVertex2f(640.0, 0.0);
	glEnd();
	/* Land Object - End */

	/* House Object - Start */
	/* Roof - Start */
	glColor3f(1.0, 0.0, 0.0); // Red
	glBegin(GL_TRIANGLES);
	glVertex2f(10.0, 140.0);
	glVertex2f(60.0, 200.0);
	glVertex2f(100.0, 140.0);
	glEnd();

	glColor3d(0.86, 0.054, 0.054); // Brown
	glBegin(GL_POLYGON);
	glVertex2f(60.0, 200.0);
	glVertex2f(100.0, 140.0);
	glVertex2f(200.0, 140.0);
	glVertex2f(160.0, 200.0);
	glEnd();

	glColor3d(0.96, 0.084, 0.084); // Red
	glBegin(GL_LINES);
	glVertex2f(80.0, 199.0); glVertex2f(120.0, 141.0);
	glVertex2f(100.0, 199.0); glVertex2f(140.0, 141.0); 
	glVertex2f(120.0, 199.0); glVertex2f(160.0, 141.0);
	glVertex2f(140.0, 199.0); glVertex2f(180.0, 141.0);
	glVertex2f(160.0, 199.0); glVertex2f(200.0, 141.0);
	glEnd();
	/* Roof - End */

	/* Body - Start */
	glColor3f(1.0, 1.0, 0.8);
	glBegin(GL_POLYGON);
	glVertex2f(20.0, 140.0);
	glVertex2f(20.0, 40.0);
	glVertex2f(90.0, 40.0);
	glVertex2f(90.0, 140.0);
	glEnd();

	glColor3f(1.0, 1.0, 0.1);
	glBegin(GL_POLYGON);
	glVertex2f(90.0, 140.0);
	glVertex2f(90.0, 40.0);
	glVertex2f(190.0, 40.0);
	glVertex2f(190.0, 140.0);
	glEnd();

	glColor3f(0.8, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(140.0, 40.0);
	glVertex2f(140.0, 105.0);
	glVertex2f(155.0, 105.0);
	glVertex2f(155.0, 40.0);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POINTS);
	glVertex2f(153.0, 75.0);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(100.0, 65.0);
	glVertex2f(100.0, 120.0);
	glVertex2f(125.0, 120.0);
	glVertex2f(125.0, 65.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(165.0, 65.0);
	glVertex2f(165.0, 120.0);
	glVertex2f(180.0, 120.0);
	glVertex2f(180.0, 65.0);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(100.0, 65.0);
	glVertex2f(100.0, 120.0);
	glVertex2f(125.0, 120.0);
	glVertex2f(125.0, 65.0);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(165.0, 65.0);
	glVertex2f(165.0, 120.0);
	glVertex2f(180.0, 120.0);
	glVertex2f(180.0, 65.0);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(113.0, 65.0); glVertex2f(113.0, 120.0);
	glVertex2f(100.0, 93.0); glVertex2f(125.0, 93.0);
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