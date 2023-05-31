#include <GL/glut.h>
#include <math.h>

void init () 
{
    glClearColor (1.0, 0.0, 0.0, 0.0);//select clearing (background) color
    glMatrixMode(GL_PROJECTION);  //initialize viewing values
    glLoadIdentity(); // to load the program
    gluOrtho2D (0.0,600.0, 0.0, 700.0); //gluOrtho2D - the display will be in the range of this area - left, right, top, bottom
}
void display()
{

    glClear (GL_COLOR_BUFFER_BIT);//clear all pixels
    glColor3f (1.0, 1.0, 0.0);//set color to yellow.
    glPointSize(5.0f);//set point size to 10 pixels   
       
	int x,y;
	int a=100, b=100;
	int r = 50, t;
	glBegin(GL_POLYGON);
	for(t=0;t<1000 ;t++){
		x=a+(r*cos(t));
		y=b+(r*sin(t));
		glVertex2f(x,y);
	}
		glEnd();
    glFlush (); //start processing buffered OpenGL routines
}

	//Declare initial window size, position, and display mode (single buffer and RGBA). 
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	//GLUT_SINGLE - This means that the program is automatically drawing straight to the window.
	//GLUT_DOUBLE -  giving the program buffer to draw what it has to, then transfer what is actually needed to the screen.
	//GLUT_RGB - An alias for GLUT_RGBA.
	//GLUT_DEPTH - Bit mask to request a window with a depth buffer.
    glutInitWindowSize (600, 700); 
    glutInitWindowPosition (300, 100);
    glutCreateWindow ("Exam Question- 100% sure aauxa");
    init ();
    glutDisplayFunc(display); 
    glutMainLoop();
}
