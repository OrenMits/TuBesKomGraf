//=========================kolam============================

void air(){
   glPushMatrix();
       glTranslatef(0.40,0.50,-0.69);
       glScalef(1.65,1.5,1.9);
       glBegin(GL_QUADS);
          glColor3f(0,0.1,0.8);
          glVertex3f(-0.3,-0.2,0.3);
          glVertex3f(0.3,-0.2,0.3);
          glVertex3f(0.3,-0.2,-0.3);
          glVertex3f(-0.3,-0.2,-0.3);
       glEnd();
   glPopMatrix();
   }
void kolam1(){
  glPushMatrix();
     glColor3f(0.4, 0.4, 0.4);
     glTranslatef(0.5,0.2,-0.01);
     glScalef(2.5,0.5,0.5);
     glutSolidCube (0.5);
  glPopMatrix();
     }
void kolam2(){
  glPushMatrix();
     glColor3f(0.4, 0.4, 0.4);
     glTranslatef(0.3,0.2,-1.37);
     glScalef(2.5,0.5,0.5);
     glutSolidCube (0.5);
  glPopMatrix();
     }
void kolam3(){
  glPushMatrix();
     glColor3f(0.4, 0.4, 0.4);
     glTranslatef(1,0.2,-0.7);
     glScalef(0.5,0.5,3.2);
     glutSolidCube (0.5);
  glPopMatrix();
     }
void kolam4(){
  glPushMatrix();
     glColor3f(0.4, 0.4, 0.4);
     glTranslatef(-0.2,0.2,-0.6);
     glScalef(0.5,0.5,2.87);
     glutSolidCube (0.5);
  glPopMatrix();
     }
void ikan1(){
     glPushMatrix();
     glColor3f(1.0, 0.3, 0.0);
     glTranslatef(0.4,0.20,-0.6);
     glScalef(0.08,0.2,1.0);
     glutSolidSphere (0.1, 100, 16);
     glRotatef(20, 90, 45, 90);
  glPopMatrix();
     }
void ikan2(){
     glPushMatrix();     
     glTranslatef(0.4,-0.20,-0.5);
     glRotatef(20, 135, 45, 135);
     ikan1();
  glPopMatrix();
     }
void ikan3(){
     glPushMatrix();     
     glTranslatef(0.1,-0.0,-0.1);
     ikan1();
  glPopMatrix();
     }
void ikan4(){
     glPushMatrix();     
     glTranslatef(0.1,0.0,-0.4);
     ikan1();
  glPopMatrix();
     }
void ikan5(){
      glPushMatrix();     
     glTranslatef(0.2,0.0,0.2);
     ikan1();
  glPopMatrix();
     }
void gambar_2_kolam(){
     glPushMatrix();
       kolam1();
       kolam2();
       kolam3();
       kolam4();
       air();
       ikan1();
       ikan2();
       ikan3();
       ikan4();
       ikan5();
       
     glPopMatrix();
     }

//===================================================================
