#include <windows.h>
#include <GL/glut.h>

void init ()
{
 glClearColor (1.0, 1.0, 1.0, 0.0);//select clearing (background) color	
 glMatrixMode(GL_PROJECTION); //initialize viewing values
 glLoadIdentity(); // to load the program
 gluOrtho2D (0.0, 200.0, 0.0, 300.0); //glOrtho2D - the display will be in the range of this area
}

void display()
{
 glClear (GL_COLOR_BUFFER_BIT);//clear all pixels
 glColor3f (1.0, 0.0, 0.0);//set color to red
 glPointSize(5.0f);//set point size to 10 pixels
 glBegin(GL_LINE_LOOP);
 glVertex2i(5,0);
 glVertex2i(5,5);
 glVertex2i(5,12);
 glVertex2i(5,15);
 glVertex2i(10,12);
 glVertex2i(10,8);

 glEnd();

 glFlush (); //start processing buffered OpenGL routines
}

int main(int argc, char** argv)
{
 glutInit(&argc, argv);
 glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
 glutInitWindowSize (500, 500);
 glutInitWindowPosition (500, 100);
 glutCreateWindow ("Polygon");
 init ();
 glutDisplayFunc(display);
 glutMainLoop();
}

