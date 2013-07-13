//=========================kandang============================

void batangNe(){
    glPushMatrix();
    glColor3f(0.4, 0.2, 0.0);
    glTranslatef(0,0.3,0);
    glScalef(0.05,1.0,0.05);
    glutSolidCube (0.9);
    glPopMatrix();
}

void kotakNe(){
  glPushMatrix();
    glColor3f(0.6, 0.4, 0.0);
    glScalef(1.0,0.1,1.0);
    glutSolidCube (0.88);
    glPopMatrix();   
}

void kotakatas(){
  glPushMatrix(); 
  glTranslatef(0.0,0.90,0.01);
    glColor3f(0.6, 0.4, 0.0);
    glScalef(1.0,0.1,1.0);
    glutSolidCube (0.88);
    glPopMatrix();   
}


void papankandangbelakang(){
  glPushMatrix();
    glTranslatef(-0.60, 0.16,-0.40);
     int jumlahbatang=0;
     float pergeseran=0;
     
     while(jumlahbatang!=5){
     pergeseran=pergeseran+0.20;
     glPushMatrix();
      glTranslatef(pergeseran,0.0,0.0);
      batangNe();
     glPopMatrix();
     jumlahbatang++;
     }
  glPopMatrix();
}

void papankandangdepan(){
  glPushMatrix();
    glTranslatef(-0.60, 0.16,0.40);
     int jumlahbatang=0;
     float pergeseran=0;
     
     while(jumlahbatang!=5){
     pergeseran=pergeseran+0.20;
     glPushMatrix();
     glTranslatef(pergeseran,0.0,0.0);
     batangNe();
     glPopMatrix();
     jumlahbatang++;
     }
  glPopMatrix();
}

void papankandangsamping(){
  glPushMatrix();
  glRotatef(90,0,90,0);
  glPushMatrix();
    papankandangbelakang();
    papankandangdepan();
    
  glPopMatrix();
  glPopMatrix();
}

void kaki(){
  glPushMatrix(); 
    glColor3f(0.4, 0.2, 0.0);
    glScalef(0.1,0.3,0.1);
    glutSolidCube (0.9);
  glPopMatrix();   
}

void atapkandang(){
     glPushMatrix();
     glColor3f(1.0, 0.2, 0.0);
        glTranslatef(0,0.90,0.0);
         glScalef(1.8,1.8,1.8);
         glBegin(GL_QUADS);
          glVertex3f(-0.3,0,0.3);//A
          glVertex3f(0.035,0.2,0.3);//B
          glVertex3f(0.035,0.2,-0.3);//C
          glVertex3f(-0.3,0,-0.3);//D
         glEnd();
     glPopMatrix();
     }
     
void atapkandang2(){
     glPushMatrix();
     glColor3f(1.0, 0.2, 0.0);
        glTranslatef(0,0.90,0.0);
         glScalef(1.8,1.8,1.8);
         glBegin(GL_QUADS);
          glVertex3f(0.4,-0.05,0.3);//A
          glVertex3f(-0.05,0.18,0.3);//B
          glVertex3f(-0.05,0.18,-0.3);//C
          glVertex3f(0.4,-0.05,-0.3);//D
         glEnd();
     glPopMatrix();
     }
     
void pintukandang(){
    glPushMatrix(); 
    glTranslatef(0.4,0.26,0.01);
    glColor3f(0.4, 0.2, 0.0);
    glScalef(0.07,0.5,0.45);
    glutSolidCube (0.88);
    glPopMatrix();   
     }

void gagangpintukandang(){
    glPushMatrix(); 
    glTranslatef(0.4,1,0);
    glColor3f(1.0, 0.2, 0.0);
    glScalef(0.1,0.5,0.45);
    glutSolidSphere (0.1,50,100);
    glPopMatrix();   
     }
void tampilkan_kandang(){
     glPushMatrix();
        kotakNe();
        kotakatas();
        glPopMatrix();
        atapkandang();
        atapkandang2();
        glPushMatrix();    
        papankandangsamping();
        papankandangbelakang();
        papankandangdepan();
        pintukandang();
        //gagangpintukandang();
        kaki1();
        kaki2();
        kaki3();
        kaki4();         
     glPopMatrix();
     }

//===================================================================
