#include <GL/glut.h>
#include <math.h>

void init(void){
	glClearColor(1, 1, 1, 0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10, 10, -10, 10);
}

void poly(void){
	glBegin(GL_POLYGON);
	glColor3i(0, 1, 0);
	glVertex2i(2, 2);
	glColor3i(1, 0, 0);
	glVertex2i(6, 1);
	glColor3i(0, 1, 1);
	glVertex2i(5, 4);
	glColor3i(0, 0, 1);
	glVertex2i(3, 4);
	glEnd();
}

void display(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.5, 0.5, 0.5);
	glBegin(GL_LINES);
	for(int i = -10; i <= 11; i += 1){
		glVertex2f((float)i, -10.0f);
		glVertex2f((float)i, 11.0f);
		glVertex2f(-10.0f ,(float)i);
		glVertex2f(11.0f, (float)i);
	}
	glEnd();
	
	glColor3f(0.0, 0.0, 0.0);
	glLineWidth(3.0);
	glBegin(GL_LINES);
	glVertex2f(-10.0f, 0.0f);
	glVertex2f(10.0f, 0.0f);
	glVertex2f(0.0f, 10.0f);
	glVertex2f(0.0f, -10.0f);
	glEnd();
	
	poly();
	glTranslatef(2.0, 4.0, 0.0);
	poly();
	glFlush();
}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(500, 100);
	glutCreateWindow("Testing Transformation");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
}
