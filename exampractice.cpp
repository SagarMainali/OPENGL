#include <GL/glut.h>

void init(){
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 600, 0, 700);
}

void display(){
	glClear(GL_COLOR_BUFFER_BIT);	
	glPointSize(5.0f);
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(10, 10);
	glVertex2i(100, 10);
	glVertex2i(100, 80);
	glVertex2i(10, 80);
	glVertex2i(80, 100);
	glVertex2i(100, 80);
	glEnd();
	glFlush();
}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(300, 300);
	glutInitWindowPosition(300, 100);
	glutCreateWindow("Exam Practice");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
}
