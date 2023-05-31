#include<windows.h>
#include<GL/glut.h>

void init()
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-100, 100, -100, 100);
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	glColor3f(0.0, 0.0, 1.0);
	glViewport(0, 0, 250, 250);
	glBegin(GL_POLYGON);
	glVertex2f(-50.0f, 20.0f);
	glVertex2f(0.0f, 70.0f);
	glVertex2i(50.0f, 20.0f);
	glVertex2i(30.0f, -30.0f);
	glVertex2i(-30.0f, -30.0f);
	glEnd();
	
	glColor3f(1.0, 0.0, 0.0);
	glViewport(250, 0, 250, 250);
	glRotatef(-90.0, 0.0, 0.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(-50.0f, 20.0f);
	glVertex2f(0.0f, 70.0f);
	glVertex2i(50.0f, 20.0f);
	glVertex2i(30.0f, -30.0f);
	glVertex2i(-30.0f, -30.0f);
	glEnd();
	
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 250);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Split Screen Example / Using Viewport");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
}
