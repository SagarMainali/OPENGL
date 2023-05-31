#include<GL/glut.h>
#include<math.h>

void init(){
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 600.0, 0.0, 700.0);
}

void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(5.0f);
	glColor3f(1.0, 1.0, 1.0);
	
	
	
	//for outline of the car
//	glLineWidth(5.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(50, 100);
	glVertex2i(500, 100);
	glVertex2i(500, 200);
	glVertex2i(400, 300);
	glVertex2i(200, 300);
	glVertex2i(100, 200);
	glVertex2i(50, 200);
	glEnd();
	
	//for the window
	glBegin(GL_LINE_LOOP);
	glVertex2i(200, 300);
	glVertex2i(200, 200);
	glVertex2i(400, 200);
	glVertex2i(400, 300);
	glEnd();
	
	//for the remaining part
	glBegin(GL_LINES);
	glVertex2i(100, 200);
	glVertex2i(500, 200);
	glVertex2i(300, 300);
	glVertex2i(300, 100);
	glEnd();
	
	//for first tire
	float r = 50, t;
	float x1, y1, a1 = 200, b1 = 100; 
	glBegin(GL_LINE_LOOP);
	for(t = 0; t < 1000; t++){
		x1 = a1 + (r * cos(t));
		y1 = b1 + (r * sin(t));
		glVertex2i(x1, y1);
	}
	glEnd();
	
	//for second tire
	float x2, y2, a2 = 400, b2 = 100;
	glBegin(GL_LINE_LOOP);
	for(t = 0; t < 1000; t++){
		x2 = a2 + (r * cos(t));
		y2 = b2 + (r * sin(t));
		glVertex2i(x2, y2);
	}
	glEnd();
	
	glFlush();
}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(750, 750);
	glutInitWindowPosition(400, 20);
	glutCreateWindow("Sagar Mainali's 2D Car Development Individual Project");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
}
