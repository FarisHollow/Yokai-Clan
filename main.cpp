#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>




void tree()
{
    glBegin(GL_POLYGON);
	glColor3ub(68,70,68);
	glVertex2f(-32.75f,10.0f);
	glVertex2f(-32.75f,18.0f);
	glVertex2f(-31.25f,18.0f);
	glVertex2f(-31.25f,10.0f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(88,193,90);
	glVertex2f(-32.0f,20.0f);
	glVertex2f(-35.0f,15.0f);
	glVertex2f(-29.0f,15.0f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(88,193,90);
	glVertex2f(-32.0f,22.0f);
	glVertex2f(-34.5f,17.0f);
	glVertex2f(-29.0f,17.0f);

	glEnd();




	 glBegin(GL_POLYGON);
	glColor3ub(68,70,68);
	glVertex2f(-25.75f,10.0f);
	glVertex2f(-25.75f,18.0f);
	glVertex2f(-24.25f,18.0f);
	glVertex2f(-24.25f,10.0f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(88,193,90);
	glVertex2f(-25.0f,20.0f);
	glVertex2f(-27.0f,15.0f);
	glVertex2f(-22.0f,15.0f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(88,193,90);
	glVertex2f(-25.0f,22.0f);
	glVertex2f(-27.5f,17.0f);
	glVertex2f(-22.0f,17.0f);

	glEnd();


	glBegin(GL_POLYGON);
	glColor3ub(68,70,68);
	glVertex2f(-10.75f,10.0f);
	glVertex2f(-10.75f,18.0f);
	glVertex2f(-9.25f,18.0f);
	glVertex2f(-9.25f,10.0f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(88,193,90);
	glVertex2f(-10.0f,20.0f);
	glVertex2f(-12.0f,15.0f);
	glVertex2f(-8.0f,15.0f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(88,193,90);
	glVertex2f(-10.0f,22.0f);
	glVertex2f(-12.5f,17.0f);
	glVertex2f(-8.0f,17.0f);

	glEnd();

}


void hill()
{

	glBegin(GL_POLYGON);//Left hill
	glColor3ub(88,193,90);
	glVertex2f(-35.0f,10.0f);
	glVertex2f(-28.0f,15.0f);
	glVertex2f(-23.0f,10.0f);

	glEnd();

	glBegin(GL_POLYGON);//Middle hill
	glColor3ub(24,156,38);
	glVertex2f(-24.0f,10.0f);
	glVertex2f(-17.0f,20.0f);
	glVertex2f(-10.0f,10.0f);

	glEnd();

	glBegin(GL_POLYGON);//Right hill
	glColor3ub(24,156,38);
	glVertex2f(-11.0f,10.0f);
	glVertex2f(0.0f,15.0f);
	glVertex2f(10.0f,10.0f);

	glEnd();
}




void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)



    hill();

    tree();

	glutSwapBuffers();

}





int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(1300,680);
	glutCreateWindow("Sea View");

	gluOrtho2D(-40,40,-40,40);  // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint




	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
