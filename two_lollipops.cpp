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
	glVertex2i(10,10);//defines a point at x = 100, y = 150;
	glVertex2i(70,10);//this function takes only 2 parameters, z is always 0.
	glVertex2i(70,20);
	glVertex2i(10,20);
	glEnd();

	//top base
	glColor3f (255.0f, 1.5f, 11.0f);
	glBegin(GL_POLYGON);
	glVertex2i(20,20);
	glVertex2i(60,20);
	glVertex2i(60,30);
	glVertex2i(20,30);
	glEnd();

	//the bar
	glColor3f (2.0f, 15.0f, 13.5f);
	glBegin(GL_POLYGON);
	glVertex2i(38,30);
	glVertex2i(42,30);
	glVertex2i(42,70);
	glVertex2i(38,70);
	glEnd();
	
	//outer circle
	glColor3f (1.0, 1.0, 0.0);//set color to yellow
	float x1,y1;
	float r1_outer = 20, t;
	float a1 = 40, b1 = 90;	
	glBegin(GL_LINE_LOOP);
		for (t=0; t<1000; t++){
    		x1 = a1 + (r1_outer* cos(t));
    		y1 = b1 + (r1_outer* sin(t));
    	 	glVertex2f(x1,y1);
		}
	glEnd();
    
	//inner circle
	glColor3f (1.0, 0.0, 0.0);//set color to red
	float r1_inner = 12;	
	glBegin(GL_LINE_LOOP);
     	for (t=0; t<1000; t++){
    		x1 = a1 + (r1_inner* cos(t));
    		y1 = b1 + (r1_inner* sin(t));
    	 	glVertex2f(x1,y1);
		}
	glEnd();
    
	//for base
	glColor3f(0.5f, 0.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2i(100,10);//defines a point at x = 100, y = 150;
	glVertex2i(160,10);//this function takes only 2 parameters, z is always 0.
	glVertex2i(160,20);
	glVertex2i(100,20);
	glEnd();
	
	//top base
	glColor3f (255.0f, 1.5f, 11.0f);
	glBegin(GL_POLYGON);
	glVertex2i(110,20);
	glVertex2i(150,20);
	glVertex2i(150,30);
	glVertex2i(110,30);
	glEnd();
	
	//the bar
	glColor3f (2.0f, 15.0f, 13.5f);
	glBegin(GL_POLYGON);
	glVertex2i(128,30);
	glVertex2i(132,30);
	glVertex2i(132,70);
	glVertex2i(128,70);
	glEnd();
	
	//outer circle
	glColor3f (1.0, 1.0, 0.0);//set color to yellow
	float x2,y2;
	float r2_outer = r1_outer*3;
	float a2 = a1+90, b2 = b1+r2_outer-20;	
	glBegin(GL_LINE_LOOP);
		for (t=0; t<1000; t++){
    		x2 = a2 + (r2_outer* cos(t));
    		y2 = b2 + (r2_outer* sin(t));
    	 	glVertex2f(x2,y2);
		}
	glEnd();
	
	//inner circle
	glColor3f (1.0, 0.0, 0.0);//set color to red
	float r2_inner = r1_inner*3;	
	glBegin(GL_LINE_LOOP);
     	for (t=0; t<1000; t++){
    		x2 = a2 + (r2_inner* cos(t));
    		y2 = b2 + (r2_inner* sin(t));
    	 	glVertex2f(x2,y2);
		}
	glEnd();
	
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(500,100);
	glutCreateWindow("Lollipop???");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
}
