#include <GL/gl.h>
#include <GL/glaux.h>
#include <GL/glu.h>
#define ucgen_ciz(){glBegin(GL_LINES);glVertex2f(1.0,1.0);glVertex2f(3.0,1.0);glVertex2f(3.0,1.0);glVertex2f(2.0,2.5);glVertex2f(2.0,2.5);glVertex2f(1.0,1.0);glEnd();};
int main(int argc, char** argv)
{
   auxInitDisplayMode (AUX_SINGLE | AUX_RGBA);
   auxInitPosition (0, 0, 500, 500);
   auxInitWindow (argv[0]);

   glClearColor (0.0, 0.0, 0.0, 0.0);
   glClear(GL_COLOR_BUFFER_BIT);
   glColor3f(1.0, 1.0, 1.0);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   glOrtho(-10.0, 10.0, -10.0, 10.0, -1.0, 1.0);
   
   ucgen_ciz();
   
  glEnable(GL_LINE_STIPPLE);
  glLineStipple(1,0xF0F0);
   glMatrixMode(GL_MODELVIEW);
   glLoadIdentity(); //I
   glTranslatef(-2.0, 0.0, 0.0);//T
   ucgen_ciz();
   //
   glLineStipple(1,0xF00F);
   glLoadIdentity();
   glScalef(-2.0, 0.0, 0.0); //TS
   ucgen_ciz();
   
   glLineStipple(1,0x8888);
   glLoadIdentity();
   glRotatef(180.0, 0.0, 0.0, 1.0); //TS
   ucgen_ciz();
   
   glFlush();

   Sleep(3000);
   return 0;
}

