#include <GL/glut.h>

void init(){
	glClearColor (1.0, 1.0, 1.0, 0.0);//select clearing (background) color
	glMatrixMode(GL_PROJECTION); //initialize viewing values
	glLoadIdentity(); // to load the program
	gluOrtho2D (0.0, 200.0, 0.0, 300.0); //glOrtho2D - the display will be in the range of this area
}

void display(){
	glClear(GL_COLOR_BUFFER_BIT);//clear all pixels
	glPointSize(5.0f);//set point size to 10 pixels
	glColor3f(0.0f, 0.0f, 1.0f);
	
	glBegin(GL_LINE_STRIP);
	glVertex2i(30, 30);
	glVertex2i(30, 100);
	glVertex2i(60, 80);
	glVertex2i(35, 80);
	glVertex2i(60, 60);
	glVertex2i(30, 60);
	glEnd();
	
	glBegin(GL_LINES);
	glVertex2i(20, 30);
	glVertex2i(40, 30);
	glEnd();
	
	glFlush();	
}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(400, 400);
	glutInitWindowPosition(500,100);
	glutCreateWindow("FLAG");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
}
