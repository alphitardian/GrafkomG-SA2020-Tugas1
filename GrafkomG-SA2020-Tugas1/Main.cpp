#include <iostream>
#include <GL/freeglut.h>

void myInit() {

	glClearColor(0.4, 0.69, 1.0, 1.0);
	glPointSize(5);
	glLineWidth(2);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 640.0, 0.0, 480.0);

}

void display() {

	glClear(GL_COLOR_BUFFER_BIT);

	/* Land Object - Start */
	glColor3d(0.54, 0.054, 0.054);
	glBegin(GL_POLYGON);
	glVertex2f(0.0, 0.0);
	glVertex2f(0.0, 55.0);
	glColor3d(0.14, 0.014, 0.014);
	glVertex2f(640.0, 55.0);
	glVertex2f(640.0, 0.0);
	glEnd();
	/* Land Object - End */

	/* House Object - Start */
	/* Roof - Start */
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(10.0, 140.0);
	glVertex2f(60.0, 200.0);
	glVertex2f(100.0, 140.0);
	glEnd();

	glColor3d(0.86, 0.054, 0.054);
	glBegin(GL_POLYGON);
	glVertex2f(60.0, 200.0);
	glVertex2f(100.0, 140.0);
	glVertex2f(200.0, 140.0);
	glVertex2f(160.0, 200.0);
	glEnd();

	glColor3d(0.96, 0.084, 0.084);
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

	glBegin(GL_POLYGON);
	glVertex2f(40.0, 65.0);
	glVertex2f(40.0, 120.0);
	glVertex2f(70.0, 120.0);
	glVertex2f(70.0, 65.0);
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

	glBegin(GL_LINE_LOOP);
	glVertex2f(40.0, 65.0);
	glVertex2f(40.0, 120.0);
	glVertex2f(70.0, 120.0);
	glVertex2f(70.0, 65.0);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(113.0, 65.0); glVertex2f(113.0, 120.0);
	glVertex2f(100.0, 93.0); glVertex2f(125.0, 93.0);
	glVertex2f(173.0, 65.0); glVertex2f(173.0, 120.0);
	glVertex2f(165.0, 93.0); glVertex2f(180.0, 93.0);
	glVertex2f(45.0, 65.0); glVertex2f(45.0, 120.0);
	glVertex2f(50.0, 65.0); glVertex2f(50.0, 120.0);
	glVertex2f(55.0, 65.0); glVertex2f(55.0, 120.0);
	glVertex2f(60.0, 65.0); glVertex2f(60.0, 120.0);
	glVertex2f(65.0, 65.0); glVertex2f(65.0, 120.0);
	glEnd();
	/* Body - End */
	/* House Object - End */

	/* Tree Object - Start */
	glColor3f(0.6, 0.29, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(240.0, 40.0);
	glVertex2f(250.0, 70.0);
	glVertex2f(270.0, 70.0);
	glVertex2f(280.0, 40.0);
	glEnd();

	glColor3f(0.0, 0.6, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(220.0, 70.0);
	glVertex2f(260.0, 110.0);
	glVertex2f(300.0, 70.0);
	glEnd();

	glColor3f(0.0, 0.8, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(225.0, 90.0);
	glVertex2f(260.0, 130.0);
	glVertex2f(295.0, 90.0);
	glEnd();

	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(230.0, 110.0);
	glVertex2f(260.0, 150.0);
	glVertex2f(290.0, 110.0);
	glEnd();
	/* ------------ */
	glColor3f(0.6, 0.29, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(340.0, 40.0);
	glVertex2f(350.0, 70.0);
	glVertex2f(370.0, 70.0);
	glVertex2f(380.0, 40.0);
	glEnd();

	glColor3f(0.0, 0.6, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(320.0, 70.0);
	glVertex2f(360.0, 110.0);
	glVertex2f(400.0, 70.0);
	glEnd();

	glColor3f(0.0, 0.8, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(325.0, 90.0);
	glVertex2f(360.0, 130.0);
	glVertex2f(395.0, 90.0);
	glEnd();

	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(330.0, 110.0);
	glVertex2f(360.0, 150.0);
	glVertex2f(390.0, 110.0);
	glEnd();
	/* ------------ */
	glColor3f(0.6, 0.29, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(290.0, 40.0);
	glVertex2f(300.0, 70.0);
	glVertex2f(320.0, 70.0);
	glVertex2f(330.0, 40.0);
	glEnd();

	glColor3f(0.0, 0.6, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(270.0, 70.0);
	glVertex2f(310.0, 110.0);
	glVertex2f(350.0, 70.0);
	glEnd();

	glColor3f(0.0, 0.8, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(275.0, 90.0);
	glVertex2f(310.0, 130.0);
	glVertex2f(345.0, 90.0);
	glEnd();

	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(280.0, 110.0);
	glVertex2f(310.0, 150.0);
	glVertex2f(340.0, 110.0);
	glEnd();
	/* ------------ */
	glColor3f(0.0, 0.5, 0.0);
	glBegin(GL_LINE_STRIP);
	glVertex2f(280.0, 110.0); glVertex2f(310.0, 150.0); 
	glVertex2f(340.0, 110.0); glVertex2f(328.0, 110.0);
	glVertex2f(345.0, 90.0); glVertex2f(330.0, 90);
	glVertex2f(350.0, 70.0); glVertex2f(270.0, 70.0);
	glVertex2f(290.0, 90.0); glVertex2f(275.0, 90.0);
	glVertex2f(292.0, 110.0); glVertex2f(280.0, 110.0);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glVertex2f(300.0, 70.0);
	glVertex2f(290.0, 40.0);	
	glVertex2f(330.0, 40.0);
	glVertex2f(320.0, 70.0);
	glEnd();
	/* Tree Object - End */

	/* Cloud Object - Start */
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(55.0, 310.0);
	glVertex2f(85.0, 340.0);
	glVertex2f(115.0, 310.0);
	glVertex2f(85.0, 280.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(355.0, 340.0);
	glVertex2f(385.0, 370.0);
	glVertex2f(415.0, 340.0);
	glVertex2f(385.0, 310.0);
	glEnd();

	glColor3f(0.9, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(20.0, 300.0);
	glVertex2f(50.0, 330.0);
	glVertex2f(80.0, 300.0);
	glVertex2f(50.0, 270.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(55.0, 290.0);
	glVertex2f(85.0, 320.0);
	glVertex2f(115.0, 290.0);
	glVertex2f(85.0, 260.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(90.0, 300.0);
	glVertex2f(120.0, 330.0);
	glVertex2f(150.0, 300.0);
	glVertex2f(120.0, 270.0);
	glEnd();
	/* ------------ */
	glBegin(GL_POLYGON);
	glVertex2f(320.0, 330.0);
	glVertex2f(350.0, 360.0);
	glVertex2f(380.0, 330.0);
	glVertex2f(350.0, 300.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(355.0, 320.0);
	glVertex2f(385.0, 350.0);
	glVertex2f(415.0, 320.0);
	glVertex2f(385.0, 290.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(390.0, 330.0);
	glVertex2f(420.0, 360.0);
	glVertex2f(450.0, 330.0);
	glVertex2f(420.0, 300.0);
	glEnd();
	/* Cloud Object - End */

	/* Sun Object - Start */
	glColor3f(1.0, 0.8, 0.4);
	glBegin(GL_POLYGON);
	glVertex2f(515.0, 360.0);
	glVertex2f(515.0, 440.0);
	glVertex2f(585.0, 440.0);
	glVertex2f(585.0, 360.0);
	glEnd();

	glColor3f(1.0, 0.73, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(500.0, 400.0);
	glVertex2f(550.0, 450.0);
	glColor3f(1.0, 0.9, 0.7);
	glVertex2f(600.0, 400.0);
	glVertex2f(550.0, 350.0);
	glEnd();
	/* Sun Object - End */

	/* Pool Object - Start */
	/* Water - Start */
	glColor3f(0.0, 0.5, 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(480.0, 0.0);
	glVertex2f(440.0, 55.0);
	glColor3f(0.0, 0.75, 1.0);
	glVertex2f(640.0, 55.0);
	glVertex2f(640.0, 0.0);
	glEnd();

	glColor3f(0.6, 0.8, 1.0);
	glBegin(GL_LINES);
	glVertex2f(500.0, 30.0); glVertex2f(600.0, 30.0);
	glVertex2f(570.0, 45.0); glVertex2f(610.0, 45.0);
	glVertex2f(510.0, 20.0); glVertex2f(570.0, 20.0);
	glEnd();
	/* Water - End */

	/* Rock - Start */
	glColor3f(0.5, 0.5, 0.5);
	glBegin(GL_POLYGON);
	glVertex2f(410.0, 40.0);
	glVertex2f(415.0, 70.0);
	glColor3f(0.8, 0.8, 0.8);
	glVertex2f(445.0, 70.0);
	glVertex2f(450.0, 40.0);
	glEnd();

	glColor3f(0.5, 0.5, 0.5);
	glBegin(GL_POLYGON);
	glVertex2f(425.0, 20.0);
	glVertex2f(430.0, 50.0);
	glColor3f(0.7, 0.7, 0.7);
	glVertex2f(460.0, 50.0);
	glVertex2f(465.0, 20.0);
	glEnd();

	glColor3f(0.5, 0.5, 0.5);
	glBegin(GL_POLYGON);
	glVertex2f(440.0, 0.0);
	glVertex2f(445.0, 30.0);
	glColor3f(0.6, 0.6, 0.6);
	glVertex2f(475.0, 30.0);
	glVertex2f(480.0, 0.0);
	glEnd();
	/* Rock - End */
	/* Pool Object - End */

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