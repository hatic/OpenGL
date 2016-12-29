#include <GL/gl.h>
#include <GL/glaux.h>

int main(int argc, char** argv)
{
   auxInitDisplayMode (AUX_SINGLE | AUX_RGBA);
   auxInitPosition (0, 0, 500, 500);
   auxInitWindow (argv[0]);

   glClearColor (0.0, 0.0, 0.0, 0.0);
   glClear(GL_COLOR_BUFFER_BIT);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   glOrtho(-2.0, 2.0, -2.0, 2.0, -2.0, 2.0);
   glBegin(GL_LINES);
      glColor3f(0.5,0.0,0.5);//ab rengi
      glVertex2f(-1.0, 1.0);//a
      glVertex2f(1.0, 1.0);//b
      glColor3f(0.5,0.5,1.0);//bc rengi
      glVertex2f(1.0, 1.0);//b
      glVertex2f(1.0, -1.0);//c
      glColor3f(0.5,0.0,0.5);//cd rengi
      glVertex2f(1.0, -1.0);//c
      glVertex2f(-1.0, -1.0);//d
      glColor3f(0.5,0.5,1.0);//da rengi
      glVertex2f(-1.0, -1.0);//d
     glVertex2f(-1.0, 1.0);//a
   
      
   glEnd();
   glFlush();

   Sleep(3000);
   return 0;
}

