#include <GL/glu.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

#include "gambar_1.h"
#include "gambar_2.h"
#include "gambar_3.h"
#include "gambar_4.h"
#include "gambar_5.h"

float sumbux=0.0, sumbuy=0.0, sumbuz=0.0;
float sudut=0.0f;
float vektorx=0.0f, vektorz=-1.0f;
float x=0.0f, z=5.0f;
float pindahx =0.0, pindahy=0.0, pindahz=0.0;
float xpos = 0, ypos = 0, zpos = 0, xrot = 0, yrot = 0, putary=0, angle=0.0; //Rotasi Sudut
float inner, outer; int garisv,garish; //Variabel Torus

void bangun (int w, int h)
{
     if (h == 0)
		h = 1;
	float rasio =  w * 1.0 / h;
     
     glMatrixMode (GL_PROJECTION);
     glLoadIdentity();
     glViewport (0,0, w, h);
     gluPerspective(70.0f, rasio, 0.3f, 100.0f);
     glMatrixMode(GL_MODELVIEW);
     glOrtho(0.0,2.0,0.0,2.0,-2.0,2.0);
}
void lampu(GLuint style)
{
     glBindTexture(GL_TEXTURE_2D, style);
     glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
     glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
     glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
     glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
     glutSolidCube(1.0);     
}

void init (void)
{
     GLfloat mat_specular[] = {1.0, 1.0, 1.0, 1.0};
     GLfloat mat_shininess[] = {50.0};
     GLfloat light_position[] = {1.0, 1.0, 1.0, 1.0};
     GLfloat white_light[] = {1.0, 1.0, 1.0, 1.0};
     GLfloat lmodel_ambient[] = {0.1, 0.1, 0.1, 1.0}; 
     
     glClearColor (0.0, 0.0, 0.0, 0.0);
     glShadeModel (GL_SMOOTH);
     
     //SHADING
     glShadeModel (GL_SMOOTH); //mengaktifkan shade model
     glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
     glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
     glLightfv(GL_LIGHT0, GL_POSITION, light_position);
     glEnable(GL_LIGHTING); //mengaktifkan pencahayaan
     glEnable(GL_LIGHT0); //mengaktifkan sumber cahaya
     glEnable(GL_NORMALIZE);
     glShadeModel(GL_SMOOTH);
     glEnable(GL_DEPTH_TEST);
      
}

//Garis Koordinat
void koordinatx(void)
{
     glBegin(GL_LINE_STRIP);
     glVertex2f(-4,0);
     glVertex2f(-2.6,0);
     glEnd();
}

void koordinaty(void)
{
     glBegin(GL_LINE_STRIP);
     glVertex2f(0,3);
     glVertex2f(0,-3);
     glEnd();
}

void koordinatz(void)
{
     glBegin(GL_LINE_STRIP);
     glVertex2f(0,0);
     glVertex2f(5.4,3);
     glEnd();
}

//CAMERA
void camera (void) {
    glRotatef(xrot,1.0,0.0,0.0);
    glRotatef(yrot,0.0,1.0,0.0);
    glTranslated(-xpos,-ypos,-zpos);
}

void display (void)
{
     const double waktu = glutGet (GLUT_ELAPSED_TIME) / 1000.0;
     const double lama1 = 50*waktu, lama2 = 10*waktu, lama3 = waktu/10, lama4=10*waktu;
     GLdouble eqn[4] = {0.0, 0.0, 1.0, 0.0};
     GLdouble eqn2[4] = {1.0, 0.0, 0.0, 0.0};  
     GLdouble eqn3[4] = {0.0, 1.0, 0.0, 0.0};   
     GLfloat mat_transparent[] = { 0.1, 0.8, 0.8, 0.6 };
     GLfloat mat_emission[] = { 0.0, 0.3, 0.3, 0.6 };
     GLfloat mat_solid[] = { 0.75, 0.75, 0.0, 1.0 };
     GLfloat mat_zero[] = { 0.0, 0.0, 0.0, 1.0 };
          
     glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
     glClearColor(0.7,0.7,1.0,0.5);
     
     glLoadIdentity();
     
     //Setting Kamera
     gluLookAt(x, 0.0, z, x+vektorx, 0.0, z+vektorz, 0.0, 1.0, 0.0);
     camera();
     glEnable(GL_TEXTURE_2D);
     glEnable(GL_COLOR_MATERIAL);
     glPushMatrix();
      //CLIP untuk Y < 0
     glClipPlane(GL_CLIP_PLANE0,eqn);
     glEnable(GL_CLIP_PLANE0);
     
     //CLIP untuk X < 0
     glClipPlane(GL_CLIP_PLANE1,eqn2);
     glEnable(GL_CLIP_PLANE1);
     glPopMatrix();
     glDisable(GL_CLIP_PLANE0);
     glDisable(GL_CLIP_PLANE1);
 
          

//===============================awal tampilan objek============================
    //tampilkan bukit
    glPushMatrix(); 
       gambar_1_bukit();
    glPopMatrix();
    
    //tampilkan rumah
    glPushMatrix(); 
       glTranslatef(0,0.15,0);
       glScalef(0.5,0.5,0.5);
       tampilkan_rumah();
    glPopMatrix();  
     
    //tampilkan kandang ayam
    glPushMatrix();
       glTranslatef(0.6,0.3,-0.6);
       glRotatef(180,0,1,0);
       glScalef(0.2,0.2,0.2);
       tampilkan_kandang();
    glPopMatrix();
    
    //tampilkan pohon dibawah kincir
    glPushMatrix(); 
       glTranslatef(0.7,0.55,0.7);
       glScalef(0.5,0.5,0.8);
       tampilkan_pohon();
    glPopMatrix();   
    
    //tampilkan pepohonan disekitar rumah
    glPushMatrix(); 
       glTranslatef(1,0.3,0);
       glScalef(0.5,0.8,0.8);
       tampilkan_pohon();
    glPopMatrix(); 
    glPushMatrix(); 
       glTranslatef(1,0.3,0.3);
       glScalef(0.5,0.8,0.8);
       glRotatef(45,0,1,0);
       tampilkan_pohon();
    glPopMatrix(); 
    glPushMatrix(); 
       glTranslatef(1,0.3,-0.3);
       glScalef(0.5,0.8,0.8);
       glRotatef(45,0,1,0);
       tampilkan_pohon();
    glPopMatrix();
    glPushMatrix(); 
       glTranslatef(-1,0.3,-0.8);
       glScalef(0.5,0.8,0.8);
       glRotatef(45,0,1,0);
       tampilkan_pohon();
    glPopMatrix(); 
    glPushMatrix(); 
       glTranslatef(-1.2,0.2,-0.8);
       glScalef(0.5,0.7,0.8);
       tampilkan_pohon();
    glPopMatrix();      
       
    //tampilkan kolam ikan
    glPushMatrix();
       glTranslatef(0,0.24,0.65);
       glScalef(0.6,0.2,0.2);
       gambar_2_kolam();
    glPopMatrix();     
     
     //tampilkan tangga
     glPushMatrix();
       glTranslatef(-0.1,-0.04,0.1);
       glScalef(0.8,0.93,0.99);
       tanggaa1();
    glPopMatrix();
    

//==============================akhir tampilan objek============================
     glFlush();
     glutSwapBuffers();
     angle++;
     


}

//FUNGSI KEYBOARD
void keyboard (unsigned char key, int x, int y)
{
     float detik = 1000.0;
     const double time = glutGet(GLUT_ELAPSED_TIME) / detik;
     
     switch (key){
            case 'w':
            case 'W':
                 xrot += 2;
              if (xrot >180) 
              xrot -= 1;
            break;
            case 's':
            case 'S':
                  xrot -= 2;
              if (xrot < -0) 
              xrot += 1;
            break;
            case 'a':
            case 'A':
                 yrot += 2;
              if (yrot >360) 
              yrot -= 360;
            break;
            case 'd':
            case 'D':
                 yrot -= 2;
              if (yrot < -360)
              yrot += 360;
            break;
            case 27:
                  //glutLeaveGameMode();
                 exit (0);
                }
     
}

void ketik(int key, int xx, int yy)
{
     int mod;
     float fraksi = 0.1f;
          switch(key){
         case GLUT_KEY_LEFT:
              sudut -=0.01f;
              vektorx = sin(sudut);
              vektorz = -cos(sudut);
              break;
         case GLUT_KEY_RIGHT:
              sudut += 0.01f;
			  vektorx = sin(sudut);
			  vektorz = -cos(sudut);
			break;
         case GLUT_KEY_UP:
              x += vektorx * fraksi;
			  z += vektorz * fraksi;
			break;
         case GLUT_KEY_DOWN:
              x -= vektorx * fraksi;
			  z -= vektorz * fraksi;
         break; 
         }              
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(1010,690);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Rumah Pedesaan");
    init();
    glutDisplayFunc(display);
    glutReshapeFunc(bangun);
    //glutTimerFunc(33, TimerFunction, 1);
    glutIdleFunc(display);
    glutKeyboardFunc(keyboard);
    glutSpecialFunc(ketik);
    
    glEnable(GL_DEPTH_TEST);
    
    glutMainLoop();
    return 0;
}
