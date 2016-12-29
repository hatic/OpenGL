#include <GL/gl.h>
#include <GL/glaux.h>

int main(int argc, char** argv)
{
   auxInitDisplayMode (AUX_SINGLE | AUX_RGBA);
   auxInitPosition (0, 0, 500, 500);
   auxInitWindow (argv[0]);	

   glClearColor (0.0, 0.5, 0.5, 1.0);// arka plan rengi
   glClear(GL_COLOR_BUFFER_BIT);
   glColor3f(1.0, 1.0, 0.0);
   glLineWidth(5.0);//çizgi kalýnlýðý
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   glOrtho(-5.0, 1.0, -5.0, 1.0, -5.0, 5.0);
   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
   glBegin(GL_TRIANGLES);//normal bir üçgen
      glVertex2f(1.0, 1.0);
      glVertex2f(3.0, 1.0);
      glVertex2f(2.0, 2.5); 
   glEnd();
   glEnable(GL_LINE_STIPPLE);//çizgilerin noktalý çizilmesini etkinleþtiriyoruz
   glLineStipple(1,0xF0F0);//stipple yani noktalý yapýnýn þekline karar veriyoruz ilk parametre aralýk 
   //ikincisi 16 bitten oluþan noktalarýn 1 olan noktayý 0 olan boþluðu ifade eder F0F0->1111 0000 1111 0000
   glLoadIdentity();
     glOrtho(-5.0, 5.0, -5.0, 5.0, -5.0, 5.0);
    glBegin(GL_TRIANGLES);
      glVertex3f(1.0, 1.0,1.0);
      glVertex3f(3.0, 1.0,1.0);
      glVertex3f(2.0, 2.5,1.0); 
   glEnd();
     glLineStipple(1,0xF00F);
   glLoadIdentity();
    glOrtho(-5.0, 5.0, -5.0, 5.0, -5.0, 5.0);
     glScalef(1.5,0.5,1.0);
    glBegin(GL_TRIANGLES);
      glVertex2f(1.0, 1.0);
      glVertex2f(3.0, 1.0);
      glVertex2f(2.0, 2.5);
   glEnd();
     glLineStipple(1,0x8888);
   glLoadIdentity();
     glOrtho(-5.0, 5.0, -5.0, 5.0, -5.0, 5.0);
     glRotatef(90.0,1.0,1.0,1.0);
    glBegin(GL_TRIANGLES);
      glVertex2f(1.0, 1.0);
      glVertex2f(3.0, 1.0);
      glVertex2f(2.0, 2.5);
   glEnd();
   
      glFlush();

   Sleep(3000);
   return 0;
}

