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
void cloud1()
{

    glLoadIdentity(); //Reset the drawing perspective*/
    gluOrtho2D(-40,40,-40,40);


    glColor3ub(255, 255, 255);
    DrawCircle(-26,34,3,200);
    DrawCircle(-24,35,3,200);
    DrawCircle(-24,33,3,200);
    DrawCircle(-22,35,3,200);
    DrawCircle(-22,33,3,200);
    DrawCircle(-20,34,3,200);
}



void cloud2()
{
    glLoadIdentity(); //Reset the drawing perspective
    gluOrtho2D(-40,40,-40,40);


    glColor3ub(255, 255, 255);
    DrawCircle(-12,34,3,200);

    DrawCircle(-10,35,3,200);

    DrawCircle(-8,33,3,200);

    DrawCircle(-6,35,3,200);

    DrawCircle(-4,33,3,200);

    DrawCircle(-2,34,3,200);

}

void cloud3()
{

    glLoadIdentity(); //Reset the drawing perspective*/
    gluOrtho2D(-40,40,-40,40);


    glColor3ub(255, 255, 255);
    DrawCircle(8,34,3,200);

    DrawCircle(9,35,3,200);

    DrawCircle(10,33,3,200);

    DrawCircle(11,35,3,200);

    DrawCircle(14,33,3,200);

    DrawCircle(17,34,3,200);

}
void sun()
{

    glLoadIdentity(); //Reset the drawing perspective*/
    gluOrtho2D(-40,40,-40,40);

    glColor3ub(255,255, 0);
    DrawCircle(35,34,3,200);
}
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);

	         // Clear the color buffer (background)
glBegin(GL_POLYGON);//sky
	glColor3ub(150,214,246);
	glVertex2f(-40.0f,40.0f);
	glVertex2f(40.0f,40.0f);
	glVertex2f(40.0f,10.0f);
	glVertex2f(-40.0f,10.0f);  // x, y


	glEnd();
	sun();

    cloud1();

    cloud2();
    cloud3();

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



