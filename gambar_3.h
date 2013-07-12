//=========================rumah============================

void atapkiri(){
   glPushMatrix();  
                
       glTranslatef(-0.6,1.35,-0.03);
       glScalef(2,2,2.5);
       glBegin(GL_QUADS);
          glColor3f(0.4, 0.2, 0.2);
          glVertex3f(-0.3,-0.25,0.3);
          glVertex3f(0.3,0,0.3);
          glVertex3f(0.3,0,-0.3);
          glVertex3f(-0.3,-0.25,-0.3);
       glEnd();
   glPopMatrix();
   }
   
void atapkanan(){
   glPushMatrix();                      
       glTranslatef(0.6,1.35,-0.03);
       glScalef(2,2,2.5);
       glBegin(GL_QUADS);
          glColor3f(0.4, 0.2, 0.2);
          glVertex3f(-0.3,0,0.3);
          glVertex3f(0.3,-0.25,0.3);
          glVertex3f(0.3,-0.25,-0.3);
          glVertex3f(-0.3,0,-0.3);
       glEnd();
   glPopMatrix();
   }
   
void ataptengah1(){
   glPushMatrix();                   
       glTranslatef(0,0.85,0.72);
       glScalef(4,2,5.5);
       glBegin(GL_QUADS);
          glColor3f(0.4, 0.2, 0.2); 
          glVertex3f(-0.3,0,0);
          glVertex3f(0.3,0,0);
          glVertex3f(0,0.25,0);
          glVertex3f(0,0.25,0);
       glEnd();
   glPopMatrix();
   }
   
   void ataptengah2(){
   glPushMatrix();                   
       glTranslatef(0,0.85,-0.78);
       glScalef(4,2,5.5);
       glBegin(GL_QUADS);
          glColor3f(0.4, 0.2, 0.2);
          glVertex3f(-0.3,0,0);
          glVertex3f(0.3,0,0);
          glVertex3f(0,0.25,0);
          glVertex3f(0,0.25,0);
       glEnd();
   glPopMatrix();
   }
   
   void lapisanataptengah(){
   glPushMatrix();
       glTranslatef(0,0.85,-0.04);
       glScalef(4,9,2.5);
       glBegin(GL_QUADS);
          glColor3f(0.4, 0.2, 0.2);
          glVertex3f(-0.3,0,0.3);
          glVertex3f(0.3,0,0.3);
          glVertex3f(0.3,0,-0.3);
          glVertex3f(-0.3,0,-0.3);
       glEnd();
   glPopMatrix();
   }
     
void lapisantanahatas(){
      glPushMatrix();
        glColor3f(0.6, 0.6, 0.4);
        glTranslatef(0,0.18,0);
        glScalef(8,0.3,4.5);
        glutSolidCube (0.30);
glPopMatrix();
    }
     
void blokrumah1(){
  glPushMatrix();
     glColor3f(0.6, 0.8, 0.4);  
     glTranslatef(0.4,0.6,-0.03);
     glScalef(1.6,1,2.5);
     glutSolidCube (0.5);
  glPopMatrix();
     }
void blokrumah2(){
  glPushMatrix();  
     glColor3f(0.6, 0.8, 0.4);     
     glTranslatef(-0.375,0.6,-0.35);
     glScalef(1.5,1,1.2);
     glutSolidCube (0.5);
  glPopMatrix();
     }
void teras(){
  glPushMatrix(); 
     glColor3f(0.6, 0.4, 0.2);     
     glTranslatef(-0.37,0.35,0.2); 
     glScalef(1.5,0.01,1.3);
     glutSolidCube (0.5);
  glPopMatrix();
     }
void tangga1(){
  glPushMatrix();
     glColor3f(0.4, 0.4, 0.4);        
     glTranslatef(-0.85,0.24,0.3); 
     glScalef(0.2,0.05,0.8);
     glutSolidCube (0.5);
  glPopMatrix();
     }
void tangga2(){
  glPushMatrix();     
     glColor3f(0.4, 0.4, 0.4);  
     glTranslatef(-1,0.24,0.3); 
     glScalef(0.2,0.05,0.8);
     glutSolidCube (0.5);
  glPopMatrix();
     }
void jendela1kiriatas(){
  glPushMatrix();
     glColor3f(0.4, 0.4, 0.4); 
     glTranslatef(0.14,0.65,0.58);
     glScalef(0.1,0.1,0.1);
     glutSolidCube (0.5);
  glPopMatrix();
     }
void jendela1kananatas(){
  glPushMatrix();
     glColor3f(0.4, 0.4, 0.4); 
     glTranslatef(0.22,0.65,0.58);
     glScalef(0.1,0.1,0.1);
     glutSolidCube (0.5);
  glPopMatrix();
     }
void jendela1kiribawah(){
  glPushMatrix();  
     glColor3f(0.4, 0.4, 0.4);   
     glTranslatef(0.14,0.58,0.58);
     glScalef(0.1,0.1,0.1);
     glutSolidCube (0.5);
  glPopMatrix();
     }
void jendela1kananbawah(){
  glPushMatrix();
     glColor3f(0.4, 0.4, 0.4); 
     glTranslatef(0.22,0.58,0.58);
     glScalef(0.1,0.1,0.1);
     glutSolidCube (0.5);
  glPopMatrix();
     }
void jendela2kiriatas(){
  glPushMatrix();
     glColor3f(0.4, 0.4, 0.4); 
     glTranslatef(0.55,0.65,0.58);
     glScalef(0.1,0.1,0.1);
     glutSolidCube (0.5);
  glPopMatrix();
     }
void jendela2kananatas(){
  glPushMatrix();
     glColor3f(0.4, 0.4, 0.4); 
     glTranslatef(0.63,0.65,0.58);
     glScalef(0.1,0.1,0.1);
     glutSolidCube (0.5);
  glPopMatrix();
     }
void jendela2kiribawah(){
  glPushMatrix();  
     glColor3f(0.4, 0.4, 0.4);   
     glTranslatef(0.55,0.58,0.58);
     glScalef(0.1,0.1,0.1);
     glutSolidCube (0.5);
  glPopMatrix();
     }
void jendela2kananbawah(){
  glPushMatrix();
     glColor3f(0.4, 0.4, 0.4); 
     glTranslatef(0.63,0.58,0.58);
     glScalef(0.1,0.1,0.1);
     glutSolidCube (0.5);
  glPopMatrix();
     }
void jendela3kiriatas(){
  glPushMatrix();
     glColor3f(0.4, 0.4, 0.4); 
     glTranslatef(-0.75,0.65,-0.42);
     glScalef(0.1,0.1,0.1);
     glutSolidCube (0.5);
  glPopMatrix(); 
     }
void jendela3kiribawah(){
  glPushMatrix();
     glColor3f(0.4, 0.4, 0.4); 
     glTranslatef(-0.75,0.75,-0.42);
     glScalef(0.1,0.1,0.1);
     glutSolidCube (0.5);
  glPopMatrix(); 
     }
void jendela3kananatas(){
  glPushMatrix();
     glColor3f(0.4, 0.4, 0.4); 
     glTranslatef(-0.75,0.65,-0.30);
     glScalef(0.1,0.1,0.1);
     glutSolidCube (0.5);
  glPopMatrix(); 
     }
void jendela3kananbawah(){
  glPushMatrix();
     glColor3f(0.4, 0.4, 0.4); 
     glTranslatef(-0.75,0.75,-0.30);
     glScalef(0.1,0.1,0.1);
     glutSolidCube (0.5);
  glPopMatrix(); 
     }
void jendela4kiriatas(){
  glPushMatrix();
     glColor3f(0.4, 0.4, 0.4); 
     glTranslatef(0.35,0.65,-0.64);
     glScalef(0.1,0.1,0.1);
     glutSolidCube (0.5);
  glPopMatrix(); 
     }
void jendela4kiribawah(){
  glPushMatrix();
     glColor3f(0.4, 0.4, 0.4); 
     glTranslatef(0.45,0.55,-0.64);
     glScalef(0.1,0.1,0.1);
     glutSolidCube (0.5);
  glPopMatrix(); 
     }
void jendela4kananatas(){
  glPushMatrix();
     glColor3f(0.4, 0.4, 0.4); 
     glTranslatef(0.45,0.65,-0.64);
     glScalef(0.1,0.1,0.1);
     glutSolidCube (0.5);
  glPopMatrix(); 
     }
void jendela4kananbawah(){
  glPushMatrix();
     glColor3f(0.4, 0.4, 0.4); 
     glTranslatef(0.35,0.55,-0.64);
     glScalef(0.1,0.1,0.1);
     glutSolidCube (0.5);
  glPopMatrix(); 
     }
void pintu(){
  glPushMatrix();
     glColor3f(0.4, 0.2, 0.0); 
     glTranslatef(0,0.5,0.25);
     glScalef(-0.02,0.6,0.5);
     glutSolidCube (0.5);
  glPopMatrix();
     }
void pagar1(){
  glPushMatrix();
     glColor3f(0.4, 0.2, 0.0); 
     glTranslatef(-0.32,0.4,0.55);
     glScalef(1.33,0.1,0.01);
     glutSolidCube (0.5);
  glPopMatrix();
     }
void pagar2(){
  glPushMatrix();
     glColor3f(0.4, 0.2, 0.0); 
     glTranslatef(-0.32,0.46,0.55);
     glScalef(1.33,0.1,0.01);
     glutSolidCube (0.5);
  glPopMatrix();
     }
     
void tumpuan1(){
 glPushMatrix();  
     glColor3f(0.4, 0.4, 0.4);    
     glTranslatef(0.7,0.30,0.5);
     glScalef(0.2,0.3,0.2);
     glutSolidCube (0.5);
  glPopMatrix();
     }
void tumpuan2(){
 glPushMatrix();  
     glColor3f(0.4, 0.4, 0.4);   
     glTranslatef(-0.6,0,0);
     tumpuan1();
  glPopMatrix();
     }
 void tumpuan3(){
 glPushMatrix();    
     glColor3f(0.4, 0.4, 0.4); 
     glScalef(1,4.1,1);
     glTranslatef(-1.4,-0.18,0);
     tumpuan1();
  glPopMatrix();
     }
 void tumpuan4(){
 glPushMatrix();  
     glColor3f(0.4, 0.4, 0.4);   
     glTranslatef(0,0,-0.6);
     tumpuan1();
  glPopMatrix();
     }
 void tumpuan5(){
 glPushMatrix(); 
     glColor3f(0.4, 0.4, 0.4);    
     glTranslatef(0,0,-1);
     tumpuan1();
  glPopMatrix();
     }
  void tumpuan6(){
 glPushMatrix(); 
     glColor3f(0.4, 0.4, 0.4);    
     glTranslatef(-0.7,0,0);
     tumpuan5();
  glPopMatrix();
     }
  void tumpuan7(){
 glPushMatrix(); 
     glColor3f(0.4, 0.4, 0.4);    
     glTranslatef(-1.4,0,0);
     tumpuan5();
  glPopMatrix();
     }
  void tumpuan8(){
 glPushMatrix();
     glColor3f(0.4, 0.4, 0.4);     
     glTranslatef(-1.4,0,0);
     tumpuan4();
  glPopMatrix();
     }
void tampilkan_rumah(){
     glPushMatrix();
       lapisantanahatas();
   tumpuan1();
   tumpuan2();
   tumpuan3();
   tumpuan4();
   tumpuan5();
   tumpuan6();
   tumpuan7();
   tumpuan8();
   jendela1kiriatas();
   jendela1kananatas();
   jendela1kiribawah();
   jendela1kananbawah();
   jendela2kiriatas();
   jendela2kananatas();
   jendela2kiribawah();
   jendela2kananbawah();
   jendela3kiriatas();
   jendela3kiribawah();
   jendela3kananatas();
   jendela3kananbawah();
   jendela4kiriatas();
   jendela4kiribawah();
   jendela4kananatas();
   jendela4kananbawah();
   pintu();
   pagar1();
   pagar2();
   tangga1();
   tangga2();
   blokrumah1();
   blokrumah2();
   teras();
   atapkiri();
   atapkanan();
   ataptengah1();
   ataptengah2();
  lapisanataptengah();
     glPopMatrix();
     
     }

//===================================================================
