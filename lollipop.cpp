#include <GL/glut.h>
#include <math.h>

void init ()
{
	glClearColor (0.0, 0.0, 0.0, 0.0);//select clearing (background) color
	glMatrixMode(GL_PROJECTION); //initialize viewing values
	glLoadIdentity(); // to load the program
	gluOrtho2D (0.0, 200.0, 0.0, 300.0); //glOrtho2D - the display will be in the range of this area
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);//clear all pixels
	glPointSize(5.0f);//set point size to 10 pixels
	
	//for base
	glColor3f(0.5f, 0.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2i(20,10);//defines a point at x = 100, y = 150;
	glVertex2i(80,10);//this function takes only 2 parameters, z is always 0.
	glVertex2i(80,20);
	glVertex2i(20,20);
	glEnd();

	//top base
	glColor3f (255.0f, 1.5f, 11.0f);
	glBegin(GL_POLYGON);
	glVertex2i(30,20);
	glVertex2i(70,20);
	glVertex2i(70,30);
	glVertex2i(30,30);
	glEnd();

	//the bar
	glColor3f (2.0f, 15.0f, 13.5f);
	glBegin(GL_POLYGON);
	glVertex2i(48,30);
	glVertex2i(52,30);
	glVertex2i(52,70);
	glVertex2i(48,70);
	glEnd();
	
	//outer circle
	glColor3f (1.0, 1.0, 0.0);//set color to yellow
	float x,y;
		float a = 50, b = 90;
		float r = 20, t;
		
		glBegin(GL_LINE_LOOP);
	     for (t=0; t<1000; t++){
	    		x = a + (r* cos(t));
	    		y = b + (r* sin(t));
	    	 	glVertex2f(x,y);
		}
		glEnd();
    
	//inner circle
	glColor3f (1.0, 0.0, 0.0);//set color to red
		float rds = 12;
		
		glBegin(GL_LINE_LOOP);
	     for (t=0; t<1000; t++){
	    		x = a + (rds* cos(t));
	    		y = b + (rds* sin(t));
	    	 	glVertex2f(x,y);
		}
    		glEnd();
    
    	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(500,100);
	glutCreateWindow("Lollipop???");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
}
