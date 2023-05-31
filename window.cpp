//#include<GL/freeglut.h>
//
////Program to create an empty Window
//void init(){
//	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	//Line C
//	glutInitWindowSize(640,480);
//	glutInitWindowPosition(100,200);
//	glutCreateWindow("Simple Window");
//}
//
//void display()
//{
//	glClearColor(1.0,1.0,1.0,0.0);
//	glClear(GL_COLOR_BUFFER_BIT);
//	// gluOrtho2D(0.0,100.0,0,100.0);
//	glFlush();
//}
//
//int main(int argc,char **argv)
//{ 
//	glutInit(&argc,argv);			//Line A
//	init();					//Line B
//	glutDisplayFunc(display);
//	glutMainLoop();
//	
//	return 0;
//}

#include <GL/glut.h>
//#include <GL/glu.h> this is included inside the GL/glut.h header file
void display()
{
}
int main( int argc, char* argv[] )
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA | GLUT_DEPTH);
  glutInitWindowSize(512, 512);  
  glutCreateWindow("Empty Window");
  glutDisplayFunc( display );
  glutMainLoop();
  return 0;
}
