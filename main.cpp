#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>



void DrawCircle(float cx, float cy, float r, int num_segments) {



    glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i < num_segments; i++)
    {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);//get current angle



        float x = r * cosf(theta);//calculate x
        float y = r * sinf(theta);//calculate y



        glVertex2f(x + cx, y + cy);//output vertex



    }
    glEnd();
    glFlush();
}
void ship()
{

    glLoadIdentity(); //Reset the drawing perspective
    gluOrtho2D(-40,40,-40,40);


    glBegin(GL_POLYGON);
	glColor3ub(68,70,68);
	glVertex2f(-38.0f,-25.0f);
	glVertex2f(2.0f,-25.0f);
    glVertex2f(-8.0f,-38.0f);
	glVertex2f(-28.0f,-38.0f);  // x, y

	glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(201,190,49);
	glVertex2f(-28.0f,-38.0f);
	glVertex2f(-8.0f,-38.0f);
	glVertex2f(-7.0f,-37.0f);
	glVertex2f(-27.0f,-37.0f);  // x, y

	glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(204,102,0);
	glVertex2f(-38.0f,-25.0f);
	glVertex2f(2.0f,-25.0f);
    glVertex2f(2.0f,-24.0f);
	glVertex2f(-38.0f,-24.0f);  // x, y

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(160,160,160);
	glVertex2f(-35.5f,-24.0f);
	glVertex2f(-0.5f,-24.0f);
    glVertex2f(-0.5f,-20.0f);
	glVertex2f(-35.5f,-20.0f);  // x, y

	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(204,0,204);
	glVertex2f(-34.5f,-20.0f);  // x, y
    glVertex2f(-0.5f,-20.0f);
    glVertex2f(-3.0f,-15.0f);
    glVertex2f(-34.5f,-15.0f);


	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(204,255,255);
	glVertex2f(-9.0f,-19.0f);  // x, y
    glVertex2f(-1.0f,-19.0f);
    glVertex2f(-2.5f,-16.0f);
    glVertex2f(-9.0f,-16.0f);


	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255,128,0);
	glVertex2f(-34.5f,-15.0f);
    glVertex2f(-3.0f,-15.0f);
    glVertex2f(-5.0f,-13.0f);
    glVertex2f(-33.0f,-13.0f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(0,0,255);
    glVertex2f(-28.0f,-13.0f);
    glVertex2f(-25.0f,-13.0f);
    glVertex2f(-25.0f,-8.0f);
    glVertex2f(-28.0f,-8.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(0,255,255);
	glVertex2f(-28.0f,-8.0f);
    glVertex2f(-25.0f,-8.0f);
    glVertex2f(-25.0f,-7.0f);
    glVertex2f(-28.0f,-7.0f);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3ub(0,0,255);
    glVertex2f(-21.0f,-13.0f);
    glVertex2f(-17.0f,-13.0f);
    glVertex2f(-17.0f,-8.0f);
    glVertex2f(-21.0f,-8.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(0,255,255);
	glVertex2f(-21.0f,-8.0f);
    glVertex2f(-17.0f,-8.0f);
    glVertex2f(-17.0f,-7.0f);
    glVertex2f(-21.0f,-7.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(0,0,255);
    glVertex2f(-13.0f,-13.0f);
    glVertex2f(-9.0f,-13.0f);
    glVertex2f(-9.0f,-8.0f);
    glVertex2f(-13.0f,-8.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(0,255,255);
	glVertex2f(-13.0f,-8.0f);
    glVertex2f(-9.0f,-8.0f);
    glVertex2f(-9.0f,-7.0f);
    glVertex2f(-13.0f,-7.0f);
	glEnd();


    glColor3ub(255, 255, 255);
    DrawCircle(-31.0,-29.0,1.8,200);
    glColor3ub(255, 255, 255);
    DrawCircle(-22.0,-29.0,1.8,200);
    glColor3ub(255, 255, 255);
    DrawCircle(-14.0,-29.0,1.8,200);
    glColor3ub(255, 255, 255);
    DrawCircle(-6.0,-29.0,1.8,200);

    glColor3ub(255, 255, 255);
    DrawCircle(-29.0,-18.0,1.0,200);
    glColor3ub(255, 255, 255);
    DrawCircle(-23.0,-18.0,1.0,200);
    glColor3ub(255, 255, 255);
    DrawCircle(-18.0,-18.0,1.0,200);
    glColor3ub(255, 255, 255);
    DrawCircle(-12.0,-18.0,1.0,200);


    glColor3ub(255, 255, 255);
    DrawCircle(-30.0,-21.5,1.2,200);
    glColor3ub(255, 255, 255);
    DrawCircle(-24.0,-21.5,1.2,200);
    glColor3ub(255, 255, 255);
    DrawCircle(-19.0,-21.5,1.2,200);
    glColor3ub(255, 255, 255);
    DrawCircle(-13.0,-21.5,1.2,200);
    glColor3ub(255, 255, 255);
    DrawCircle(-7.0,-21.5,1.2,200);

}

void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)








    glBegin(GL_POLYGON);//Water
	glColor3ub(46,155,209);
	glVertex2f(-40.0f,10.0f);
	glVertex2f(40.0f,10.0f);
	glVertex2f(40.0f,-40.0f);
	glVertex2f(-40.0f,-40.0f);  // x, y

	glEnd();



     ship();
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

