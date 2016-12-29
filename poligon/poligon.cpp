#include <GL/gl.h>
#include <GL/glaux.h>

int main(int argc, char** argv)
{
   auxInitDisplayMode (AUX_SINGLE | AUX_RGBA);//pencere t�r� belirleme
   auxInitPosition (0, 0, 900, 800);//pencerenin yeri
   auxInitWindow (argv[0]);//ekranda bir pencere a��l�r

   glClearColor (0.0, 1.0, 1.0, 0.0);//pencerenin hangi renk ile temizlenece�ini verir
   glClear(GL_COLOR_BUFFER_BIT);//pencereyi temizler
   glColor3f(1.0, 0.0, 1.0);//�izilen nesnenin rengi
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);//nesne �izilmeden �nce koordinat sistemini belirler
   glBegin(GL_POLYGON);//nesnenin tan�mlanmas�
      glVertex2f(-0.5, -0.5);
      glVertex2f(-0.5, 0.5);
      glVertex2f(0.5, 0.5);
      glVertex2f(0.5, -0.5);
   glEnd();
   glBegin(GL_POLYGON);//nesnenin tan�mlanmas�
      glVertex2f(0.25, 0.25);
      glVertex2f(0.75, 0.25);
      glVertex2f(0.50, 0.75);
   glEnd();
    glBegin(GL_POLYGON);//nesnenin tan�mlanmas�
      glVertex2f(0.25, -0.25);
      glVertex2f(0.75, -0.25);
      glVertex2f(0.50, -0.75);
   glEnd();
   glBegin(GL_POLYGON);//nesnenin tan�mlanmas�
      glVertex2f(-0.25, -0.25);
      glVertex2f(-0.75, -0.25);
      glVertex2f(-0.50, -0.75);
   glEnd();
   glBegin(GL_POLYGON);//nesnenin tan�mlanmas�
      glVertex2f(-0.25, 0.25);
      glVertex2f(-0.75, 0.25);
      glVertex2f(-0.50, 0.75);
   glEnd();
   glFlush();//tan�mlanan nesneyi �iz

   Sleep(3000);
   return 0;
}

