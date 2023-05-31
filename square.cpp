#include<windows.h>
#include<GL/glut.h>

void init()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 200.0, 0.0, 300.0);
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(5.0f);
	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(20, 20);
	glVertex2i(80, 20);
	glVertex2i(80, 100);
	glVertex2i(20, 100);
	glEnd();
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(300, 100);
	glutCreateWindow("Square");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
}
