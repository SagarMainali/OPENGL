#include<windows.h>
#include<GL/glut.h>

void init()
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-100, 100, -100, 100);
	glMatrixMode(GL_MODELVIEW);
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	glColor3f(0.0, 0.0, 1.0);
	glViewport(0, 0, 300, 300);
	glBegin(GL_TRIANGLES);
	glVertex2f(-50.0f, -25.0f);
	glVertex2f(50.0f, -25.0f);
	glVertex2i(0.0f, 50.0f);
	glEnd();
	
	glColor3f(1.0, 0.0, 0.0);
	glViewport(300, 0, 300, 300);
	glRotatef(90.0, 0.0, 0.0, 1.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(-50.f, -25.0f);
	glVertex2f(50.0f, -25.0f);
	glVertex2i(0.0f, 50.0f);
	glEnd();
	
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(600, 300);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Split Screen Example / Using Viewport");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
}
