#include <GL/gl.h>
#include <GL/glaux.h>
double i;
int main(int argc, char** argv)
{

   auxInitDisplayMode (AUX_SINGLE | AUX_RGBA);
   auxInitPosition (0, 0, 500, 500);
   auxInitWindow (argv[0]);

   glClearColor (1.0, 1.0, 1.0, 0.0);
   glClear(GL_COLOR_BUFFER_BIT);
   glColor3f(1.0, 1.0, 1.0);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   glOrtho(0.0, 2.0, -2.0, 2.0, -1.0, 1.0);
   glPointSize(15.0);
   glBegin(GL_POINTS);
   for(i=0;i<10;i++){
   glColor3f(1.0, 1.0, 0.0);
      glVertex2f(0.0+i,0.0);
   glColor3f(1.0, 0.0, 0.0);
      glVertex2f(0.5+i, 0.5);
      glColor3f(0.0, 1.0, 0.0);
      glVertex2f(-1.0+i,1.0);
   glColor3f(1.0, 0.0, 1.0);
      glVertex2f(-0.5+i, 1.5);
      glColor3f(0.0, 1.0, 0.0);
      glVertex2f(-1.0+i,-1.0);
   glColor3f(1.0, 0.0, 1.0);
      glVertex2f(-0.5+i, -1.5);
	}
   glEnd();
   glFlush();

   Sleep(3000);
   return 0;
}

