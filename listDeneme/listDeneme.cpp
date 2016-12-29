#include <GL/gl.h>
#include <GL/glaux.h>
int main(int argc, char** argv)
{
   GLuint listName=1;
   int i;
   auxInitDisplayMode (AUX_SINGLE | AUX_RGBA);
   auxInitPosition (0, 0, 800, 900);
   auxInitWindow (argv[0]);

   glClearColor (0.0, 0.0, 0.0, 0.0);
   glClear(GL_COLOR_BUFFER_BIT);
   glColor3f(1.0, 1.0, 1.0);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0);
   
  glNewList(listName,GL_COMPILE);
  glBegin(GL_POLYGON);
      glVertex2f(-1.0, 1.0);
      glVertex2f(0.0, 0.0);
      glVertex2f(1.0, 1.0);  
   glEnd();  

    glEndList();
for(i=0;i<4;i++)
   {     glCallList(listName);
		 glRotatef(90.0,0.0,0.0,1.0);
		 glColor3f(0.25*i,0.0,0.1);
	}
glFlush();
   Sleep(3000);
   return 0;
}
