//=========================bukit============================

void dinding_bukit(){
     //glPushMatrix();
       glBegin(GL_POLYGON);
         glColor3f(0.0, 0.4, 0.0);
         glVertex3f(-1.0,-0.25,1.0);
         glVertex3f(1.0,-0.25,1.0);
         glVertex3f(0.8,0.25,0.8);
         glVertex3f(-0.8,0.25,0.8);
       glEnd();

       glBegin(GL_POLYGON);
         glColor3f(0.0, 0.4, 0.0);
         glVertex3f(-1.0,-0.25,-1);
         glVertex3f(1.0,-0.25,-1);
         glVertex3f(0.8,0.25,-0.8);
         glVertex3f(-0.8,0.25,-0.8);
       glEnd();
     //glPopMatrix();
     
     }
void bukit(){
  glPushMatrix();   
     dinding_bukit();
     glPushMatrix();
       glRotatef(90.0,0.0,90.0,0.0);
       dinding_bukit();
     glPopMatrix();
  glPopMatrix();
}
void kotak(){
     glPushMatrix();
       glutSolidCube (3.0);
     glPopMatrix();
}
void kotak_tanah_bawah(){
     glPushMatrix();
       glColor3f(0.8, 0.6, 0.4);
       glTranslatef(0.0,-0.26,0.0);
       glScalef(1.0,0.01,1.0);
       kotak();
     glPopMatrix();
}
void kotak_tanah_atas(){
   glBegin(GL_POLYGON);
     glColor3f(0.0, 0.4, 0.0);
     glVertex3f(-0.8,0.25,0.8);
     glVertex3f(0.8,0.25,0.8);
     glVertex3f(0.8,0.25,-0.8);
     glVertex3f(-0.8,0.25,-0.8);
   glEnd();
}

//=========================pagar============================

void sisi_pagar(){
   glPushMatrix();
       glBegin(GL_POLYGON);
         glColor3f(0.6, 0.2, 0.0);
         glVertex3f(-0.7,0.25,0.0);
         glVertex3f(0.7,0.25,0.0);
         glVertex3f(0.7,0.42,0.0);
         glVertex3f(-0.7,0.42,0.0);
       glEnd();
   glPopMatrix();
}
void pagar(){
   glPushMatrix();
       glTranslatef(0.0,0.0,0.7);
       sisi_pagar();
   glPopMatrix();
   glPushMatrix();
       glTranslatef(0.7,0,0);
       glRotatef(90.0,0.0,90.0,0.0);
       sisi_pagar();
   glPopMatrix();
   glPushMatrix();       
       glTranslatef(0.0,0.0,-0.7);
       sisi_pagar();
   glPopMatrix();
}

//=========================tangga============================

void anak_tangga(){
     glPushMatrix();
         glColor3f(0.8, 0.6, 0.4);
         glTranslatef(-0.9,0.002,-0.65);
         glScalef(0.05,0.165,0.1);
         kotak();
      glPopMatrix(); 
     }

void tanggaa1(){
   float turunkan,kecilkan=1,pindahkan=0,lebarkan=1,pindahkanz=0;
   int i=0;
   while (i<9){
      glPushMatrix();
         glTranslatef(pindahkan,turunkan,pindahkanz);
         glScalef(1,kecilkan,lebarkan);
         anak_tangga();
      glPopMatrix();
      turunkan=turunkan-0.03;
      kecilkan=kecilkan-0.12;
      if(i<5){
      pindahkan=pindahkan-0.1;
      }
      pindahkanz=pindahkanz+0.3;
      lebarkan=lebarkan+0.3;
      i++;
   }
     
}
void tanggaa2(){
     
}
void gambar_1_bukit(){
       glPushMatrix();
           tanggaa1();
           pagar();
           kotak_tanah_bawah();
           kotak_tanah_atas();
           bukit();
       glPopMatrix();
     
     }

//===================================================================
