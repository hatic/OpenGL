#include <GL/gl.h>
#include <GL/glaux.h>

int main(int argc, char** argv)
{
   auxInitDisplayMode (AUX_SINGLE | AUX_RGBA);
   auxInitPosition (0, 0, 500, 500);
   auxInitWindow (argv[0]);

   glClearColor (0.0, 0.25, 0.0, 0.0);
   glClear(GL_COLOR_BUFFER_BIT);
   glColor3f(1.0, 1.0, 0.5);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   glLineWidth(5.0);
   glOrtho(-6.0, 6.0, -6.0, 6.0, -1.0, 1.0);
   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
   glBegin(GL_POLYGON);
      glVertex2f(1.0, 1.0);
      glEdgeFlag(GL_FALSE);
      glVertex2f(1.0, -1.0);
      glEdgeFlag(GL_TRUE);
      glVertex2f(-1.0, -1.0);
      glVertex2f(-1.0, 1.0);
     
   glEnd();
   glFlush();

   Sleep(3000);
   return 0;
}

