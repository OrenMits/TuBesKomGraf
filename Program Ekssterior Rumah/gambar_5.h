//=========================pohon============================

void sisi_pohon(){
   glPushMatrix();
   glBegin(GL_POLYGON);
     glColor3f(0, 1, 0);
     glVertex3f(-0.3,0,0);
     glVertex3f(0.3,0,0);
     glVertex3f(0,1,0);
   glEnd();
   glPopMatrix();
}
void sisi_pohon2(){
  glPushMatrix();
    glRotatef(90,0,90,0);
    sisi_pohon();
  glPopMatrix();
}
void batang()
   {
       glPushMatrix();
        glColor3f(0.6,0.6,0);        
        glTranslatef(0,-0.3,0);
        glScalef(0.5,4,0.5);
        glutSolidSphere (0.1, 100, 16);//glutSolidCube(1);
       glPopMatrix();
     }
void tampilkan_pohon(){
     glPushMatrix();
    //glRotatef(45,45,45,0);
    sisi_pohon2();
    sisi_pohon();
    batang();
  glPopMatrix();
     }

//===================================================================
