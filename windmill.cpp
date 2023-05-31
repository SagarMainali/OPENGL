#include <windows.h>
#include <GL/glut.h>
#include <math.h>

void init () 
{
    glClearColor (0.0, 0.0, 0.0, 0.0);//select clearing (background) color as black
    glMatrixMode(GL_PROJECTION);  //initialize viewing values 
    glLoadIdentity(); // to load the program
    gluOrtho2D (0.0, 200.0, 0.0, 300.0); //glOrtho2D - the display will be in the range of this area
}

void display()
{
	
	// GHAR BANAUNE CORDINATE
    glClear (GL_COLOR_BUFFER_BIT);//clear all pixels
    glColor3f (1.0, 1.0, 0.0);//set color to yellow
    glPointSize(5.0f);//set point size to 10 pixels
    glBegin(GL_POLYGON);
      glVertex2i(50,20);
      glVertex2i(130,20);
      glVertex2i(110,120);
	  glVertex2i(70,120);
     
       glEnd();
       
	glBegin(GL_POLYGON);
      glVertex2i(40,80);
      glVertex2i(70,120);
      glVertex2i(60,130);
	  glVertex2i(30,90);
     
       glEnd();	
	       
    glBegin(GL_POLYGON);
      glVertex2i(100,110);
      glVertex2i(110,120);
      glVertex2i(160,70);
	  glVertex2i(150,60);
     
       glEnd();

	glBegin(GL_POLYGON);
      glVertex2i(120,140);
      glVertex2i(110,150);
      glVertex2i(150,190);
	  glVertex2i(160,180);
     
       glEnd(); 
	   
	glBegin(GL_POLYGON);
      glVertex2i(30,190);
      glVertex2i(40,200);
      glVertex2i(90,160);
	  glVertex2i(80,150);
     
       glEnd();   
       
    // for circle
	float x,y;
	float a=95.0, b=135.0; // a and b denotes the coordinates x and y i.e the mid point of the circle
	float r = 15, t; // r is radius
	glBegin(GL_POLYGON);
	for(t=0;t<1000;t++){
		x=a+(r*cos(t));
		y=b+(r*sin(t));
		glVertex2f(x,y);
	}
		glEnd();
    glFlush (); //start processing buffered OpenGL routines
}

// this function declares initial window size, position, and display mode (single buffer and RGBA). 
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	//GLUT_SINGLE - This means that the program is automatically drawing straight to the window.
	//GLUT_DOUBLE -  giving the program buffer to draw what it has to, then transfer what is actually needed to the screen.
	//GLUT_RGB - An alias for GLUT_RGBA.
	//GLUT_DEPTH - Bit mask to request a window with a depth buffer.
    glutInitWindowSize (500, 600); 
    glutInitWindowPosition (300, 200);
    glutCreateWindow ("Exam Question- 100% sure aauxa");
    init (); //init function is called here
    glutDisplayFunc(display); //display function is called here
    glutMainLoop();
}
