// 1st matrix formation and transformation positioning...
#include<stdio.h>

int top90c(int white[3][3], int red[3][3], int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]); //white1
int top180c(int white[3][3], int red[3][3], int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);
int top90a(int white[3][3], int red[3][3], int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);

int bottom90c(int white[3][3], int red[3][3], int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]); /// yellow2
int bottom180c(int white[3][3], int red[3][3], int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);
int bottom90a(int white[3][3], int red[3][3], int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);


int right90up(int white[3][3], int red[3][3], int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);// orange4
int right180c(int white[3][3], int red[3][3], int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);
int right90down(int white[3][3], int red[3][3], int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);


int left90up(int white[3][3], int red[3][3], int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);
int left180c(int white[3][3], int red[3][3], int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);//red3
int left90down(int white[3][3], int red[3][3], int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);


int front90c(int white[3][3], int red[3][3], int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);// blue6
int front180c(int white[3][3], int red[3][3], int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);
int front90a(int white[3][3], int red[3][3], int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);


int back90c(int white[3][3], int red[3][3], int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]); // green5
int back180c(int white[3][3], int red[3][3], int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);
int back90a(int white[3][3], int red[3][3], int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);

////searching

int search1(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);

////base

int base1(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);//1011
int base2(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);//1101
int base3(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);//1121
int base4(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);//1211
////corners


int corner1(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);//1001
int corner11(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);//1001
int corner2(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);//1021
int corner21(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);//1001
int corner31(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);//
int corner3(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);//1201
int corner4(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);//
int corner41(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);//1221

int corner12(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);
int corner22(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);
int corner32(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);
int corner42(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);


//2nd layer

int layer1(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);
int layer2(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);
int layer3(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);
int layer4(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);

int layer11(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);
int layer21(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);
int layer31(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);
int layer41(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);


int layer12(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);
int layer22(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);
int layer32(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);
int layer42(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);

//last

int last1(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);
int last2(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);
int last3(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);
int last4(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);

int print(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]);






int top90c(int white[3][3], int red[3][3], int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])

{

int i,j,k,c[3][3],r[3],y[3],b[3],g[3],o[3],w[3];

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=white[i][j];
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
white[i][j]=c[2-j][i];
}
}

for(i=0;i<3;i++)
{
b[i]=blue[0][i];
o[i]=orange[2-i][0];
g[i]=green[2][2-i];
r[i]=red[i][2];
}

for(i=0;i<3;i++)
{
blue[0][i]=o[i];
orange[2-i][0]=g[i];
green[2][2-i]=r[i];
red[i][2]=b[i];
}
}

///

int top180c(int white[3][3], int red[3][3], int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])

{

int i,j,k,c[3][3],r[3],y[3],b[3],g[3],o[3],w[3];

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=white[i][j];
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
white[i][j]=c[2-i][2-j];
}
}

for(i=0;i<3;i++)
{
b[i]=blue[0][i];
o[i]=orange[2-i][0];
g[i]=green[2][2-i];
r[i]=red[i][2];
}

for(i=0;i<3;i++)
{
blue[0][i]=g[i];
orange[2-i][0]=r[i];
green[2][2-i]=b[i];
red[i][2]=o[i];
}
}


///
int top90a(int white[3][3], int red[3][3], int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])

{

int i,j,k,c[3][3],r[3],y[3],b[3],g[3],o[3],w[3];

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=white[i][j];
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
white[i][j]=c[j][2-i];
}
}

for(i=0;i<3;i++)
{
b[i]=blue[0][i];
o[i]=orange[2-i][0];
g[i]=green[2][2-i];
r[i]=red[i][2];
}

for(i=0;i<3;i++)
{
blue[0][i]=r[i];
orange[2-i][0]=b[i];
green[2][2-i]=o[i];
red[i][2]=g[i];
}
}


////bottom///1

int bottom90c(int white[3][3], int red[3][3], int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])

{

int i,j,k,c[3][3],r[3],y[3],b[3],g[3],o[3],w[3];

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=yellow[i][j];
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
yellow[i][j]=c[j][2-i];
}
}

for(i=0;i<3;i++)
{
b[i]=blue[2][i];
o[i]=orange[2-i][2];
g[i]=green[0][2-i];
r[i]=red[i][0];
}

for(i=0;i<3;i++)
{
blue[2][i]=o[i];
orange[2-i][2]=g[i];
green[0][2-i]=r[i];
red[i][0]=b[i];
}
}

////////////b2


int bottom180c(int white[3][3], int red[3][3], int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])

{

int i,j,k,c[3][3],r[3],y[3],b[3],g[3],o[3],w[3];

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=yellow[i][j];
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
yellow[i][j]=c[2-i][2-j];
}
}

for(i=0;i<3;i++)
{
b[i]=blue[2][i];
o[i]=orange[2-i][2];
g[i]=green[0][2-i];
r[i]=red[i][0];
}

for(i=0;i<3;i++)
{
blue[2][i]=g[i];
orange[2-i][2]=r[i];
green[0][2-i]=b[i];
red[i][0]=o[i];
}
}

/////b3


int bottom90a(int white[3][3], int red[3][3], int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])

{

int i,j,k,c[3][3],r[3],y[3],b[3],g[3],o[3],w[3];

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=yellow[i][j];
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
yellow[i][j]=c[2-j][i];
}
}

for(i=0;i<3;i++)
{
b[i]=blue[2][i];
o[i]=orange[2-i][2];
g[i]=green[0][2-i];
r[i]=red[i][0];
}

for(i=0;i<3;i++)
{
blue[2][i]=r[i];
orange[2-i][2]=b[i];
green[0][2-i]=o[i];
red[i][0]=g[i];
}
}

/// right 1


int right90up(int white[3][3], int red[3][3], int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])

{

int i,j,k,c[3][3],r[3],y[3],b[3],g[3],o[3],w[3];

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=orange[i][j];
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
orange[i][j]=c[2-j][i];
}
}

for(i=0;i<3;i++)
{
b[i]=blue[i][2];
w[i]=white[i][2];
g[i]=green[i][2];
y[i]=yellow[i][2];
}

for(i=0;i<3;i++)
{
blue[i][2]=y[i];
white[i][2]=b[i];
green[i][2]=w[i];
yellow[i][2]=g[i];
}
}

///right2


int right90down(int white[3][3], int red[3][3], int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])

{

int i,j,k,c[3][3],r[3],y[3],b[3],g[3],o[3],w[3];

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=orange[i][j];
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
orange[i][j]=c[j][2-i];
}
}

for(i=0;i<3;i++)
{
b[i]=blue[i][2];
w[i]=white[i][2];
g[i]=green[i][2];
y[i]=yellow[i][2];
}

for(i=0;i<3;i++)
{
blue[i][2]=w[i];
white[i][2]=g[i];
green[i][2]=y[i];
yellow[i][2]=b[i];
}
}

// right3

int right180c(int white[3][3], int red[3][3], int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])

{

int i,j,k,c[3][3],r[3],y[3],b[3],g[3],o[3],w[3];

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=orange[i][j];
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
orange[i][j]=c[2-i][2-j];
}
}

for(i=0;i<3;i++)
{
b[i]=blue[i][2];
w[i]=white[i][2];
g[i]=green[i][2];
y[i]=yellow[i][2];
}

for(i=0;i<3;i++)
{
blue[i][2]=g[i];
white[i][2]=y[i];
green[i][2]=b[i];
yellow[i][2]=w[i];
}
}

////left1

int left90up(int white[3][3], int red[3][3], int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])
{

int i,j,k,c[3][3],r[3],y[3],b[3],g[3],o[3],w[3];

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=red[i][j];
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
red[i][j]=c[j][2-i];
}
}

for(i=0;i<3;i++)
{
b[i]=blue[i][0];
w[i]=white[i][0];
g[i]=green[i][0];
y[i]=yellow[i][0];
}

for(i=0;i<3;i++)
{
blue[i][0]=y[i];
white[i][0]=b[i];
green[i][0]=w[i];
yellow[i][0]=g[i];
}
}

// left2

int left90down(int white[3][3], int red[3][3], int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])

{

int i,j,k,c[3][3],r[3],y[3],b[3],g[3],o[3],w[3];

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=red[i][j];
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
red[i][j]=c[2-j][i];
}
}

for(i=0;i<3;i++)
{
b[i]=blue[i][0];
w[i]=white[i][0];
g[i]=green[i][0];
y[i]=yellow[i][0];
}

for(i=0;i<3;i++)
{
blue[i][0]=w[i];
white[i][0]=g[i];
green[i][0]=y[i];
yellow[i][0]=b[i];
}
}

////left3

int left180c(int white[3][3], int red[3][3], int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])

{

int i,j,k,c[3][3],r[3],y[3],b[3],g[3],o[3],w[3];

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=red[i][j];
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
red[i][j]=c[2-i][2-j];
}
}

for(i=0;i<3;i++)
{
b[i]=blue[i][0];
w[i]=white[i][0];
g[i]=green[i][0];
y[i]=yellow[i][0];
}

for(i=0;i<3;i++)
{
blue[i][0]=g[i];
white[i][0]=y[i];
green[i][0]=b[i];
yellow[i][0]=w[i];
}
}


//////front 1


int front90c(int white[3][3], int red[3][3], int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])

{

int i,j,k,c[3][3],r[3],y[3],b[3],g[3],o[3],w[3];

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=blue[i][j];
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
blue[i][j]=c[2-j][i];
}
}

for(i=0;i<3;i++)
{
o[i]=orange[2][2-i];
w[i]=white[2][2-i];
r[i]=red[2][2-i];
y[i]=yellow[0][i];
}

for(i=0;i<3;i++)
{
orange[2][2-i]=w[i];
white[2][2-i]=r[i];
red[2][2-i]=y[i];
yellow[0][i]=o[i];
}
}

/////front2


int front90a(int white[3][3], int red[3][3], int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])

{

int i,j,k,c[3][3],r[3],y[3],b[3],g[3],o[3],w[3];

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=blue[i][j];
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
blue[i][j]=c[j][2-i];
}
}

for(i=0;i<3;i++)
{
o[i]=orange[2][2-i];
w[i]=white[2][2-i];
r[i]=red[2][2-i];
y[i]=yellow[0][i];
}

for(i=0;i<3;i++)
{
orange[2][2-i]=y[i];
white[2][2-i]=o[i];
red[2][2-i]=w[i];
yellow[0][i]=r[i];
}
}


/// front3


int front180c(int white[3][3], int red[3][3], int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])

{

int i,j,k,c[3][3],r[3],y[3],b[3],g[3],o[3],w[3];

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=blue[i][j];
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
blue[i][j]=c[2-i][2-j];
}
}

for(i=0;i<3;i++)
{
o[i]=orange[2][2-i];
w[i]=white[2][2-i];
r[i]=red[2][2-i];
y[i]=yellow[0][i];
}

for(i=0;i<3;i++)
{
orange[2][2-i]=r[i];
white[2][2-i]=y[i];
red[2][2-i]=o[i];
yellow[0][i]=w[i];
}
}

// back1


int back90c(int white[3][3], int red[3][3], int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])

{

int i,j,k,c[3][3],r[3],y[3],b[3],g[3],o[3],w[3];

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=green[i][j];
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
green[i][j]=c[j][2-i];
}
}

for(i=0;i<3;i++)
{
o[i]=orange[0][i];
w[i]=white[0][i];
r[i]=red[0][i];
y[i]=yellow[2][2-i];
}

for(i=0;i<3;i++)
{
orange[0][i]=w[i];
white[0][i]=r[i];
red[0][i]=y[i];
yellow[2][2-i]=o[i];
}
}

//back2


int back90a(int white[3][3], int red[3][3], int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])

{

int i,j,k,c[3][3],r[3],y[3],b[3],g[3],o[3],w[3];

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=green[i][j];
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
green[i][j]=c[2-j][i];
}
}

for(i=0;i<3;i++)
{
o[i]=orange[0][i];
w[i]=white[0][i];
r[i]=red[0][i];
y[i]=yellow[2][2-i];
}

for(i=0;i<3;i++)
{
orange[0][i]=y[i];
white[0][i]=o[i];
red[0][i]=w[i];
yellow[2][2-i]=r[i];
}
}


///back3



int back180c(int white[3][3], int red[3][3], int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])

{

int i,j,k,c[3][3],r[3],y[3],b[3],g[3],o[3],w[3];

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=green[i][j];
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
green[i][j]=c[2-i][2-j];
}
}

for(i=0;i<3;i++)
{
o[i]=orange[0][i];
w[i]=white[0][i];
r[i]=red[0][i];
y[i]=yellow[2][2-i];
}

for(i=0;i<3;i++)
{
orange[0][i]=r[i];
white[0][i]=y[i];
red[0][i]=o[i];
yellow[2][2-i]=w[i];
}
}


////////////////////orientation complete now searching;

int search1(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])
{
int i,j,k=10;


for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{

if(n==red[i][j])
{
k=((k+i)*10+j)*10+3;
return k;
}
else if(n==white[i][j])
{
k=((k+i)*10+j)*10+1;
return k;
}

else if(n==yellow[i][j])
{
k=((k+i)*10+j)*10+2;
return k;
}

else if(n==orange[i][j])
{
k=((k+i)*10+j)*10+4;
return k;
}
else if(n==green[i][j])
{
k=((k+i)*10+j)*10+5;
return k;
}
else if(n==blue[i][j])
{
k=((k+i)*10+j)*10+6;
return k;
}
}
}
}
/////////////////base

int base1(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])
{
if(n==1011)//1011
{
}

else if(n==1101)
{
printf("\n rotate top 90 clockwise");
top90c(white,red,yellow,blue,green,orange);
}

else if(n==1211)
{
printf("\n rotate top 180 clockwise");
top180c(white,red,yellow,blue,green,orange);
}

else if(n==1121)
{
printf("\n rotate top 90 anticlockwise");
top90a(white,red,yellow,blue,green,orange);
}
else if(n==1215)//5
{
printf("\n b+ rd t-");
back90c(white,red,yellow,blue,green,orange);
right90down(white,red,yellow,blue,green,orange);
top90a(white,red,yellow,blue,green,orange);
}
else if(n==1104)//6
{
printf("\n ru b-");

right90up(white,red,yellow,blue,green,orange);
back90a(white,red,yellow,blue,green,orange);
}
else if(n==1016)//7
{
printf("\n f+ ru t-");
front90c(white,red,yellow,blue,green,orange);
right90up(white,red,yellow,blue,green,orange);
top90a(white,red,yellow,blue,green,orange);
}

else if(n==1123)//8
{
printf("\n lu b+");
left90up(white,red,yellow,blue,green,orange);
back90c(white,red,yellow,blue,green,orange);
}

else if(n==1106)//9
{
printf("\n lu t+");
left90up(white,red,yellow,blue,green,orange);
top90c(white,red,yellow,blue,green,orange);
}
else if(n==1126)//10
{
printf("\n ru t-");
right90up(white,red,yellow,blue,green,orange);
top90a(white,red,yellow,blue,green,orange);
}
else if(n==1214)//11
{
printf("\n f- t++");
front90a(white,red,yellow,blue,green,orange);
top180c(white,red,yellow,blue,green,orange);
}

else if(n==1014)//12
{
printf("\n  b-");
back90a(white,red,yellow,blue,green,orange);
}
else if(n==1125)//13
{
printf("\n rd t-");
right90down(white,red,yellow,blue,green,orange);
top90a(white,red,yellow,blue,green,orange);
}
else if(n==1105)//14
{
printf("\n ld t+");
left90down(white,red,yellow,blue,green,orange);
top90c(white,red,yellow,blue,green,orange);
}
else if(n==1013)//15
{
printf("\n b+");
back90c(white,red,yellow,blue,green,orange);
}

else if(n==1213)//16
{
printf("\n f+ t++");
front90c(white,red,yellow,blue,green,orange);
top180c(white,red,yellow,blue,green,orange);
}
else if(n==1103)//17
{
printf("\n ld b+");
left90down(white,red,yellow,blue,green,orange);
back90c(white,red,yellow,blue,green,orange);
}
else if(n==1216)//18
{
printf("\n f+ lu t+");
front90c(white,red,yellow,blue,green,orange);
left90up(white,red,yellow,blue,green,orange);
top90c(white,red,yellow,blue,green,orange);
}
else if(n==1124)//19
{
printf("\n  rd b-");

right90down(white,red,yellow,blue,green,orange);
back90a(white,red,yellow,blue,green,orange);
}
else if(n==1015)//20
{
printf("\n bt+ rd b-");
bottom90c(white,red,yellow,blue,green,orange);
right90down(white,red,yellow,blue,green,orange);
back90a(white,red,yellow,blue,green,orange);
}

else if(n==1012)//21
{
printf("\n  f++ t++");

front180c(white,red,yellow,blue,green,orange);
top180c(white,red,yellow,blue,green,orange);
}
else if(n==1122)//22
{
printf("\n  r++ t-");

right180c(white,red,yellow,blue,green,orange);
top90a(white,red,yellow,blue,green,orange);
}
else if(n==1212)//23
{
printf("\n  b++ ");

back180c(white,red,yellow,blue,green,orange);
}
else if(n==1102)//24
{
printf("\n  l++ t+");

left180c(white,red,yellow,blue,green,orange);
top90c(white,red,yellow,blue,green,orange);
}
}////////////////////////base2

int base2(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])//1101
{
if(n==1101)//1
{
}
else if(n==1121)//2
{
printf("\n  t++ ld t++ lu");

top180c(white,red,yellow,blue,green,orange);
left90down(white,red,yellow,blue,green,orange);

top180c(white,red,yellow,blue,green,orange);
left90up(white,red,yellow,blue,green,orange);
}
else if(n==1211)//3
{
printf("\n f- t- f+ t+");
front90a(white,red,yellow,blue,green,orange);
top90a(white,red,yellow,blue,green,orange);
front90c(white,red,yellow,blue,green,orange);
top90c(white,red,yellow,blue,green,orange);
}
else if(n==1123)//4
{
printf("\n ld t- f+ t+");
left90down(white,red,yellow,blue,green,orange);
top90a(white,red,yellow,blue,green,orange);
front90c(white,red,yellow,blue,green,orange);
top90c(white,red,yellow,blue,green,orange);
}


else if(n==1016)//5
{
printf("\n f- lu");
front90a(white,red,yellow,blue,green,orange);
left90up(white,red,yellow,blue,green,orange);
}

else if(n==1104)//6 ////
{
printf("\n ru t+ b- t-");
right90up(white,red,yellow,blue,green,orange);
top90c(white,red,yellow,blue,green,orange);
back90a(white,red,yellow,blue,green,orange);
top90a(white,red,yellow,blue,green,orange);
}

else if(n==1125)//7
{
printf("\n  t++ rd t--");

top180c(white,red,yellow,blue,green,orange);
right90down(white,red,yellow,blue,green,orange);
top180c(white,red,yellow,blue,green,orange);
}

else if(n==1105)//8
{
printf("\n ld ");
left90down(white,red,yellow,blue,green,orange);

}

else if(n==1013)//9
{
printf("\n t+ b+ t-");

top90c(white,red,yellow,blue,green,orange);
back90c(white,red,yellow,blue,green,orange);
top90a(white,red,yellow,blue,green,orange);
}

else if(n==1213)//10
{
printf("\n  t- f+ t+");

top90a(white,red,yellow,blue,green,orange);
front90c(white,red,yellow,blue,green,orange);
top90c(white,red,yellow,blue,green,orange);
}

else if(n==1106)//11
{
printf("\n lu ");
left90up(white,red,yellow,blue,green,orange);

}

else if(n==1126)//12
{
printf("\n f++ lu ");
front180c(white,red,yellow,blue,green,orange);
left90up(white,red,yellow,blue,green,orange);
}

else if(n==1214)//13
{
printf("\n  t- f- t+");

top90a(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);
top90c(white,red,yellow,blue,green,orange);
}

else if(n==1014)//14
{
printf("\n  t+ b- t-");

top90c(white,red,yellow,blue,green,orange);
back90a(white,red,yellow,blue,green,orange);
top90a(white,red,yellow,blue,green,orange);
}
else if(n==1015)//15
{
printf("\n  b+ ld b- ");

back90c(white,red,yellow,blue,green,orange);
left90down(white,red,yellow,blue,green,orange);
back90a(white,red,yellow,blue,green,orange);
}

else if(n==1103)//16
{
printf("\nbt+  b+ ld b- ");
bottom90c(white,red,yellow,blue,green,orange);
back90c(white,red,yellow,blue,green,orange);
left90down(white,red,yellow,blue,green,orange);
back90a(white,red,yellow,blue,green,orange);
}

else if(n==1216)//17
{
printf("\nbt++  b+ ld b- ");
bottom180c(white,red,yellow,blue,green,orange);
back90c(white,red,yellow,blue,green,orange);
left90down(white,red,yellow,blue,green,orange);
back90a(white,red,yellow,blue,green,orange);
}

else if(n==1124)//18
{
printf("\nbt-  b+ ld b- ");
bottom90a(white,red,yellow,blue,green,orange);
back90c(white,red,yellow,blue,green,orange);
left90down(white,red,yellow,blue,green,orange);
back90a(white,red,yellow,blue,green,orange);
}

else if(n==1012)//19
{
printf("\n bt+  l++");
bottom90c(white,red,yellow,blue,green,orange);

left180c(white,red,yellow,blue,green,orange);
}

else if(n==1122)//20
{
printf("\n bt++  l++");
bottom180c(white,red,yellow,blue,green,orange);

left180c(white,red,yellow,blue,green,orange);
}

else if(n==1212)//21
{
printf("\n bt-  l++");
bottom90a(white,red,yellow,blue,green,orange);

left180c(white,red,yellow,blue,green,orange);
}

else if(n==1102)//22
{
printf("\n  l++");


left180c(white,red,yellow,blue,green,orange);
}
}


int base3(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])//1121
{
if(n==1121)//1
{
}
else if(n==1211)//2     //error 1103..
{
printf("\n f+ t+ f- t-");
front90c(white,red,yellow,blue,green,orange);
top90c(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);
top90a(white,red,yellow,blue,green,orange);
}

else if(n==1016)//3
{
printf("\n f+ ru");
front90c(white,red,yellow,blue,green,orange);
right90up(white,red,yellow,blue,green,orange);
}

else if(n==1104)//4
{
printf("\n ru t- b- t+");
right90up(white,red,yellow,blue,green,orange);
top90a(white,red,yellow,blue,green,orange);
back90a(white,red,yellow,blue,green,orange);
top90c(white,red,yellow,blue,green,orange);
}

else if(n==1106)//5
{
printf("\n f++ ru");
front180c(white,red,yellow,blue,green,orange);
right90up(white,red,yellow,blue,green,orange);
}

else if(n==1126)//6
{
printf("\n  ru");
right90up(white,red,yellow,blue,green,orange);
}

else if(n==1214)//7
{
printf("\n t+ f- t-");
top90c(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);
top90a(white,red,yellow,blue,green,orange);
}
else if(n==1014)//8
{
printf("\n t- b- t+");
top90a(white,red,yellow,blue,green,orange);
back90a(white,red,yellow,blue,green,orange);
top90c(white,red,yellow,blue,green,orange);
}
else if(n==1125)//9
{
printf("\n rd");

right90down(white,red,yellow,blue,green,orange);
}

else if(n==1105)//10
{
printf("\n b++ rd");
back180c(white,red,yellow,blue,green,orange);
right90down(white,red,yellow,blue,green,orange);
}
else if(n==1013)//11
{
printf("\n t- b+ t+");
top90a(white,red,yellow,blue,green,orange);
back90c(white,red,yellow,blue,green,orange);
top90c(white,red,yellow,blue,green,orange);
}

else if(n==1213)//12
{
printf("\n t+ f+ t-");
top90c(white,red,yellow,blue,green,orange);
front90c(white,red,yellow,blue,green,orange);
top90a(white,red,yellow,blue,green,orange);
}

else if(n==1216)//13
{
printf("\n  f- ru ");

front90a(white,red,yellow,blue,green,orange);
right90up(white,red,yellow,blue,green,orange);
}

else if(n==1124)//14
{
printf("\n bt+ f- ru ");
bottom90c(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);
right90up(white,red,yellow,blue,green,orange);
}

else if(n==1015)//15
{
printf("\n bt++ f- ru ");
bottom180c(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);
right90up(white,red,yellow,blue,green,orange);
}

else if(n==1103)//16
{
printf("\n bt- f- ru ");
bottom90a(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);
right90up(white,red,yellow,blue,green,orange);
}

else if(n==1102)//17
{
printf("\n bt++  r++ ");
bottom180c(white,red,yellow,blue,green,orange);
right180c(white,red,yellow,blue,green,orange);
}



else if(n==1012)//18
{
printf("\n bt-  r++ ");
bottom90a(white,red,yellow,blue,green,orange);
right180c(white,red,yellow,blue,green,orange);
}


else if(n==1122)//19
{

printf("\n r++ ");

right180c(white,red,yellow,blue,green,orange);
}


else if(n==1212)//20
{
printf("\n bt+  r++ ");
bottom90c(white,red,yellow,blue,green,orange);
right180c(white,red,yellow,blue,green,orange);
}
}

int base4(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])//1211
{
if(n==1211)//1
{
}

else if(n==1016)//2/
{
printf("\n f+ t- ru t+ ");
front90c(white,red,yellow,blue,green,orange);
top90a(white,red,yellow,blue,green,orange);
right90up(white,red,yellow,blue,green,orange);
top90c(white,red,yellow,blue,green,orange);
}

else if(n==1106)//3
{
printf("\n t+ lu t- ");
top90c(white,red,yellow,blue,green,orange);

left90up(white,red,yellow,blue,green,orange);
top90a(white,red,yellow,blue,green,orange);
}
else if(n==1126)//4
{
printf("\n t- ru t+ ");
top90a(white,red,yellow,blue,green,orange);

right90up(white,red,yellow,blue,green,orange);
top90c(white,red,yellow,blue,green,orange);
}

else if(n==1214)//5
{
printf("\n f-");
front90a(white,red,yellow,blue,green,orange);

}

else if(n==1014)//6
{
printf("\nr++ f- r++");
right180c(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);
right180c(white,red,yellow,blue,green,orange);
}

else if(n==1125)//7
{
printf("\n t- rd t+");
top90a(white,red,yellow,blue,green,orange);
right90down(white,red,yellow,blue,green,orange);
top90c(white,red,yellow,blue,green,orange);
}
else if(n==1105)//8
{
printf("\n t+ ld t-");
top90c(white,red,yellow,blue,green,orange);
left90down(white,red,yellow,blue,green,orange);
top90a(white,red,yellow,blue,green,orange);
}

else if(n==1013)//9
{
printf("\n l++ f+ l++");
left180c(white,red,yellow,blue,green,orange);
front90c(white,red,yellow,blue,green,orange);
left180c(white,red,yellow,blue,green,orange);
}

else if(n==1213)//10
{
printf("\n f+");

front90c(white,red,yellow,blue,green,orange);

}
else if(n==1216)//11
{
printf("\n f- t- ru t+");
front90a(white,red,yellow,blue,green,orange);
top90a(white,red,yellow,blue,green,orange);
right90up(white,red,yellow,blue,green,orange);
top90c(white,red,yellow,blue,green,orange);

}

else if(n==1124)//12
{
printf("\n bt+ f- t- ru t+");
bottom90c(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);
top90a(white,red,yellow,blue,green,orange);
right90up(white,red,yellow,blue,green,orange);
top90c(white,red,yellow,blue,green,orange);
}

else if(n==1015)//13
{
printf("\n bt++ f- t- ru t+");
bottom180c(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);
top90a(white,red,yellow,blue,green,orange);
right90up(white,red,yellow,blue,green,orange);
top90c(white,red,yellow,blue,green,orange);

}
else if(n==1103)//14
{
printf("\n bt- f- t- ru t+");
bottom90a(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);
top90a(white,red,yellow,blue,green,orange);
right90up(white,red,yellow,blue,green,orange);
top90c(white,red,yellow,blue,green,orange);

}

else if(n==1012)//15
{
printf("\n f++ ");

front180c(white,red,yellow,blue,green,orange);

}

else if(n==1122)//16
{
printf("\n bt+ f++ ");
bottom90c(white,red,yellow,blue,green,orange);
front180c(white,red,yellow,blue,green,orange);

}

else if(n==1212)//17
{
printf("\n bt++ f++ ");
bottom180c(white,red,yellow,blue,green,orange);
front180c(white,red,yellow,blue,green,orange);

}

else if(n==1102)//18
{
printf("\n bt- f++ ");
bottom90a(white,red,yellow,blue,green,orange);
front180c(white,red,yellow,blue,green,orange);

}
}


/// corners1

int corner11(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])//1001
{
if(n==1003)
{
printf("\n bt- b- bt+ b+");
bottom90a(white,red,yellow,blue,green,orange);
back90a(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
back90c(white,red,yellow,blue,green,orange);
}
else if(n==1005)
{
printf("\n bt+ lu bt- ld");
bottom90c(white,red,yellow,blue,green,orange);
left90up(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
left90down(white,red,yellow,blue,green,orange);
}
}


int corner12(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])//1001
{
if(n==1203|n==1206)
{
printf("\n bt+");
bottom90c(white,red,yellow,blue,green,orange);
}

else if(n==1226|n==1224)
{
printf("\n bt++");
bottom180c(white,red,yellow,blue,green,orange);
}
else if(n==1025|n==1024)
{
printf("\n bt-");
bottom90a(white,red,yellow,blue,green,orange);
}
}















int corner1(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])//1001
{
if(n==1001)//1
{
}
else if(n==1023)//2
{
printf("\n lu bt+ ld");

left90up(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
left90down(white,red,yellow,blue,green,orange);

}

else if(n==1205)//3
{
printf("\n b- bt- b+");

back90a(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
back90c(white,red,yellow,blue,green,orange);


}

else if(n==1223)//4,6
{
printf("\n ld bt- lu");

left90down(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
left90up(white,red,yellow,blue,green,orange);

}

else if(n==1201||n==1006)//5
{
printf("\n f- bt+ f+");

front90a(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
front90c(white,red,yellow,blue,green,orange);

}
else if(n==1221||n==1204)//7
{
printf("\n rd bt+ ru");

right90down(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
right90up(white,red,yellow,blue,green,orange);


}
else if(n==1026)//9
{
printf("\n f+ bt- f-");

front90c(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);

}

else if(n==1021||n==1225)//11
{
printf("\n b+ bt+ b-");

back90c(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
back90a(white,red,yellow,blue,green,orange);


}

else if(n==1004)//12
{
printf("\n ru bt- rd");

right90up(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
right90down(white,red,yellow,blue,green,orange);

}

else if(n==1003||n==1203||n==1206||n==1226||n==1224||n==1024||n==1025||n==1005)//20
{

}

else if(n==1002)//21
{
printf("\n f- bt-f+");

front90a(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
front90c(white,red,yellow,blue,green,orange);

}

else if(n==1022)//22
{
printf("\n f+ bt+ f-");

front90c(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);


}
else if(n==1202)//23
{
printf("\n b- bt+ b+");

back90a(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
back90c(white,red,yellow,blue,green,orange);


}

else if(n==1222)//24
{
printf("\n b+ bt- b-");

back90c(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
back90a(white,red,yellow,blue,green,orange);

}
}

//corner2

int corner21(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])//1001
{
if(n==1025)
{
printf("\n bt- ru bt+ rd");
bottom90a(white,red,yellow,blue,green,orange);
right90up(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
right90down(white,red,yellow,blue,green,orange);
}
else if(n==1024)
{
printf("\n bt+ b+ bt- b-");
bottom90c(white,red,yellow,blue,green,orange);
back90c(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
back90a(white,red,yellow,blue,green,orange);
}
}

int corner22(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])//1021
{
if(n==1203|n==1206)
{
printf("\n bt++");
bottom180c(white,red,yellow,blue,green,orange);
}

else if(n==1226|n==1224)
{
printf("\n bt-");
bottom90a(white,red,yellow,blue,green,orange);
}
else if(n==1005|n==1003)
{
printf("\n bt+");
bottom90c(white,red,yellow,blue,green,orange);
}
}

///////////////



int corner2(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])//1021
{
if(n==1021)//1                        ////////////////
{
}

else if(n==1223)//4,6
{
printf("\n ld bt- lu");

left90down(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
left90up(white,red,yellow,blue,green,orange);

}

else if(n==1201||n==1006)//5
{
printf("\n f- bt+ f+");

front90a(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
front90c(white,red,yellow,blue,green,orange);

}
else if(n==1221||n==1204)//7
{
printf("\n rd bt+ ru");

right90down(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
right90up(white,red,yellow,blue,green,orange);


}
else if(n==1026)//9
{
printf("\n f+ bt- f-");

front90c(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);

}

else if(n==1225)//11
{
printf("\n b+ bt+ b-");

back90a(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
back90c(white,red,yellow,blue,green,orange);


}

else if(n==1004)//12
{
printf("\n ru bt- rd");

right90up(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
right90down(white,red,yellow,blue,green,orange);

}

else if(n==1003||n==1203||n==1206||n==1226||n==1224||n==1024||n==1025||n==1005)//20
{

}

else if(n==1002)//21
{
printf("\n f- bt-f+");

front90a(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
front90c(white,red,yellow,blue,green,orange);

}

else if(n==1022)//22
{
printf("\n f+ bt+ f-");

front90c(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);


}
else if(n==1202)//23
{
printf("\nbt++ f+ bt+ f-");
bottom180c(white,red,yellow,blue,green,orange);
front90c(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);


}

else if(n==1222)//24
{
printf("\n b+ bt- b-");

back90c(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
back90a(white,red,yellow,blue,green,orange);

}
}

// corner3  

int corner31(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])//1001
{
if(n==1203)
{
printf("\n bt+ f- bt- f+");
bottom90c(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
front90c(white,red,yellow,blue,green,orange);
}
else if(n==1206)
{
printf("\n bt- ld bt+ lu");
bottom90a(white,red,yellow,blue,green,orange);
left90down(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
left90up(white,red,yellow,blue,green,orange);
}
}

int corner32(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])//1021
{
if(n==1025|n==1024)
{
printf("\n bt++");
bottom180c(white,red,yellow,blue,green,orange);
}

else if(n==1226|n==1224)
{
printf("\n bt+");
bottom90c(white,red,yellow,blue,green,orange);
}
else if(n==1005|n==1003)
{
printf("\n bt-");
bottom90a(white,red,yellow,blue,green,orange);
}
}

///////////////



int corner3(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])//1021
{
if(n==1201)//1                        ////////////////
{
}

else if(n==1223)//4,6
{
printf("\n ld bt- lu");

left90down(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
left90up(white,red,yellow,blue,green,orange);

}

else if(n==1006)//5
{
printf("\n f- bt+ f+");

front90a(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
front90c(white,red,yellow,blue,green,orange);

}
else if(n==1221||n==1204)//7
{
printf("\n rd bt+ ru");

right90down(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
right90up(white,red,yellow,blue,green,orange);


}
else if(n==1026)//9
{
printf("\n f+ bt- f-");

front90c(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);

}



else if(n==1003||n==1203||n==1206||n==1226||n==1224||n==1024||n==1025||n==1005)//20
{

}

else if(n==1002)//21
{
printf("\n f- bt-f+");

front90a(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
front90c(white,red,yellow,blue,green,orange);

}

else if(n==1022)//22
{
printf("\n f+ bt+ f-");

front90c(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);


}
else if(n==1202)//23
{
printf("\nbt++ f+ bt+ f-");
bottom180c(white,red,yellow,blue,green,orange);
front90c(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);


}

else if(n==1222)//24
{
printf("\nbt+ f+ bt+ f-");
bottom90c(white,red,yellow,blue,green,orange);
front90c(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);


}

}

//corner 4


// corner4

int corner41(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])//1001
{
if(n==1224) /// incomp......
{
printf("\n bt- f+ bt+ f-");
bottom90a(white,red,yellow,blue,green,orange);
front90c(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);
}
else if(n==1226)
{
printf("\n bt+ rd bt- ru");
bottom90c(white,red,yellow,blue,green,orange);
right90down(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
right90up(white,red,yellow,blue,green,orange);
}
}

int corner42(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])//1021
{
if(n==1025|n==1024)
{
printf("\n bt+");
bottom90c(white,red,yellow,blue,green,orange);
}

else if(n==1203|n==1206)
{
printf("\n bt-");
bottom90a(white,red,yellow,blue,green,orange);
}
else if(n==1005|n==1003)
{
printf("\n bt++");
bottom180c(white,red,yellow,blue,green,orange);
}
}

///////////////



int corner4(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])//1021
{
if(n==1211)//1                        ////////////////
{
}


else if(n==1204)//7
{
printf("\n rd bt+ ru");

right90down(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
right90up(white,red,yellow,blue,green,orange);


}
else if(n==1026)//9
{
printf("\n f+ bt- f-");

front90c(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);

}



else if(n==1003||n==1203||n==1206||n==1226||n==1224||n==1024||n==1025||n==1005)//20
{

}

else if(n==1002)//21
{
printf("\nbt- f+ bt+ f-");
bottom90a(white,red,yellow,blue,green,orange);
front90c(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);
}

else if(n==1022)//22
{
printf("\n f+ bt+ f-");

front90c(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);


}
else if(n==1202)//23
{
printf("\nbt++ f+ bt+ f-");
bottom180c(white,red,yellow,blue,green,orange);
front90c(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);


}

else if(n==1222)//24
{
printf("\nbt+ f+ bt+ f-");
bottom90c(white,red,yellow,blue,green,orange);
front90c(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);


}

}



int layer1(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3]) //1105/1013
{
// taking 1013 as radar

if(n==1013)
{
}
else if(n==1105)//1
{

printf("\nlu bt- ld bt- b- bt+ b+ ");
left90up(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
left90down(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
back90a(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
back90c(white,red,yellow,blue,green,orange);
}
else if(n==1213||n==1106)
{

printf("\nld bt+ lu bt+ f- bt- f+");
left90down(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
left90up(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
front90c(white,red,yellow,blue,green,orange);
}

else if(n==1126||n==1214)
{

printf("\nrd bt- ru bt- f+ bt+ f-");
right90down(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
right90up(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
front90c(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);
}

else if(n==1014||n==1125) //4
{

printf("\n b+ bt- b- bt- ru bt+ rd");
back90c(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
back90a(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
right90up(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
right90down(white,red,yellow,blue,green,orange);
}
}


int layer11(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])//1013
{
if(n==1103||n==1102)
{
}
else if(n==1015||n==1212)
{
printf("\n bt-");
bottom90a(white,red,yellow,blue,green,orange);
}

else if(n==1122||n==1124)
{
printf("\n bt++");
bottom180c(white,red,yellow,blue,green,orange);
}

else if(n==1216||n==1012)
{
printf("\n bt+");
bottom90c(white,red,yellow,blue,green,orange);
}
}


int layer12(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])//1013
{
if(n==1103)
{
printf("\nbt- b- bt+ b+ bt+ lu bt- ld");
bottom90a(white,red,yellow,blue,green,orange);
back90a(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
back90c(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
left90up(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
left90down(white,red,yellow,blue,green,orange);
}

else if(1102)///
{
printf("\nbt++ lu bt- ld bt- b- bt+ b+");
bottom180c(white,red,yellow,blue,green,orange);
left90up(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
left90down(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
back90a(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
back90c(white,red,yellow,blue,green,orange);
}
}

///////////////////corner2


int layer21(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])//1106
{
if(n==1216||n==1012)
{
}
else if(n==1015||n==1212)
{
printf("\n bt++");
bottom180c(white,red,yellow,blue,green,orange);
}

else if(n==1122||n==1124)
{
printf("\n bt+");
bottom90c(white,red,yellow,blue,green,orange);
}

else if(n==1103||n==1102)
{
printf("\n bt-");
bottom90a(white,red,yellow,blue,green,orange);
}
}


int layer22(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])//1106
{
if(n==1216)                                   /////
{
printf("\nbt- ld bt+ lu bt+ f- bt- f+");
bottom90a(white,red,yellow,blue,green,orange);
left90down(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
left90up(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
front90c(white,red,yellow,blue,green,orange);
}

else if(1012)///
{
printf("\nbt++ f- bt- f+ bt- ld bt+ lu");
bottom180c(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
front90c(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
left90down(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
left90up(white,red,yellow,blue,green,orange);
}
}


////corne333

int layer31(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])//1214
{
if(n==1124||n==1122)
{
}
else if(n==1015||n==1212)
{
printf("\n bt+");
bottom90c(white,red,yellow,blue,green,orange);
}

else if(n==1216||n==1012)
{
printf("\n bt-");
bottom90a(white,red,yellow,blue,green,orange);
}

else if(n==1103||n==1102)
{
printf("\n bt++");
bottom180c(white,red,yellow,blue,green,orange);
}
}


int layer32(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])//1106
{
if(n==1124)                                   /////
{
printf("\nbt- f+ bt+ f- bt+ rd bt- ru");
bottom90a(white,red,yellow,blue,green,orange);
front90c(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
right90down(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
right90up(white,red,yellow,blue,green,orange);
}

else if(n==1122)///
{
printf("\nbt++ rd bt- ru bt- f+ bt+ f-");
bottom180c(white,red,yellow,blue,green,orange);
right90down(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
right90up(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
front90c(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);
}
}


////////c4


int layer41(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])//1125
{
if(n==1015||n==1212)
{
}
else if(n==1124||n==1122)
{
printf("\n bt-");
bottom90a(white,red,yellow,blue,green,orange);
}

else if(n==1216||n==1012)
{
printf("\n bt++");
bottom180c(white,red,yellow,blue,green,orange);
}

else if(n==1103||n==1102)
{
printf("\n bt+");
bottom90c(white,red,yellow,blue,green,orange);
}
}


int layer42(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])//1106
{
if(n==1015)                                   /////
{
printf("\nbt- ru bt+ rd bt+ b+ bt- b-");
bottom90a(white,red,yellow,blue,green,orange);
right90up(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
right90down(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
back90c(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
back90a(white,red,yellow,blue,green,orange);
}

else if(n==1212)///
{
printf("\nbt++ b+ bt- b- bt- ru bt+ rd");
bottom180c(white,red,yellow,blue,green,orange);
back90c(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
back90a(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
right90up(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
right90down(white,red,yellow,blue,green,orange);
}
}


//////////////////last layer

int last1(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])// making plus
{
int i,j ,k,flag=0,b[4],t=0;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if((i+j)%2!=0)
{
k=(yellow[i][j]-(((yellow[i][j])/10)*10));

if(k==2)
{
b[t]=(i*10)+j;
t++;
flag++;
}
}
}
}
printf("\n flag %d ",flag);
if (flag==0)
{
printf("\n f+ ld bt+ lu f- rd bt- ru");
printf("\n f+ ld bt+ lu f- rd bt- ru");
front90c(white,red,yellow,blue,green,orange);
left90down(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
left90up(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);
right90down(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
right90up(white,red,yellow,blue,green,orange);
front90c(white,red,yellow,blue,green,orange);
left90down(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
left90up(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);
right90down(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
right90up(white,red,yellow,blue,green,orange);
} 

else if(flag==2)
{
if( b[0]==1 && b[1]==10)
{
printf("\n bt++ f+ ld bt- lu bt+ f-");
printf("\n  f+ ld bt- lu bt+ f-");

bottom180c(white,red,yellow,blue,green,orange);
front90c(white,red,yellow,blue,green,orange);
left90down(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
left90up(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);
front90c(white,red,yellow,blue,green,orange);
left90down(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
left90up(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);
}
else if(b[0]==1 && b[1]==12)
{
printf("\n bt- f+ ld bt- lu bt+ f-");
printf("\n  f+ ld bt- lu bt+ f-");

bottom90a(white,red,yellow,blue,green,orange);
front90c(white,red,yellow,blue,green,orange);
left90down(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
left90up(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);
front90c(white,red,yellow,blue,green,orange);
left90down(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
left90up(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);
}
else if(b[0]==10 && b[1]==21)
{
printf("\n bt+ f+ ld bt- lu bt+ f-");
printf("\n  f+ ld bt- lu bt+ f-");

bottom90c(white,red,yellow,blue,green,orange);
front90c(white,red,yellow,blue,green,orange);
left90down(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
left90up(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);
front90c(white,red,yellow,blue,green,orange);
left90down(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
left90up(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);
}
//

else if(b[0]==12 && b[1]==21)
{
printf("\n f+ ld bt- lu bt+ f-");
printf("\n  f+ ld bt- lu bt+ f-");


front90c(white,red,yellow,blue,green,orange);
left90down(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
left90up(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);
front90c(white,red,yellow,blue,green,orange);
left90down(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
left90up(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);
}
else if(b[0]==1 && b[1]==21)
{
printf("\n bt+ f+ ld bt- lu bt+ f-");


bottom90c(white,red,yellow,blue,green,orange);
front90c(white,red,yellow,blue,green,orange);
left90down(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
left90up(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);

}

else if(b[0]==10 && b[1]==12)
{
printf("\n  f+ ld bt- lu bt+ f-");



front90c(white,red,yellow,blue,green,orange);
left90down(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
left90up(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);

}
}
}

int print(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])
{
int i,j,k;



printf("\n\nwhite");

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("\t%d",white[i][j]);
}
printf("\n");
}


printf("\n\nyellow");

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("\t%d",yellow[i][j]);
}
printf("\n");
}

printf("\n\nred");

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("\t%d",red[i][j]);
}
printf("\n");
}

printf("\n\norange");

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("\t%d",orange[i][j]);
}
printf("\n");
}

printf("\n\ngreen");

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("\t%d",green[i][j]);
}
printf("\n");
}


printf("\n\nblue");

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("\t%d",blue[i][j]);
}
printf("\n");
}
}

// setting top plus


int last2(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])
{
int i,j,g,o,k,r,b;
k=search1(1216,white,red,yellow,blue,green,orange);
if(k==1216)
{
}
else if(k==1124)
{
printf("\n bt+");
bottom90c(white,red,yellow,blue,green,orange);
}
else if(k==1015)
{
printf("\n bt++");
bottom180c(white,red,yellow,blue,green,orange);
}
else if(k==1103)
{
printf("\n bt-");
bottom90a(white,red,yellow,blue,green,orange);
}
g=search1(1015,white,red,yellow,blue,green,orange);
o=search1(1124,white,red,yellow,blue,green,orange);
r=search1(1103,white,red,yellow,blue,green,orange);
b=search1(1216,white,red,yellow,blue,green,orange);
if(b==1216&&r==1103&&o==1124&&g==1015)
{
}
else if(o==1103 && g==1015)
{
printf("\n bt- ld bt++ lu bt+ ld bt+ lu bt++");
bottom90a(white,red,yellow,blue,green,orange);
left90down(white,red,yellow,blue,green,orange);
bottom180c(white,red,yellow,blue,green,orange);
left90up(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
left90down(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
left90up(white,red,yellow,blue,green,orange);
bottom180c(white,red,yellow,blue,green,orange);
}



else if(o==1124||r==1103)
{
printf("\n bt- ld bt++ lu bt+ ld bt+ lu ");
bottom90a(white,red,yellow,blue,green,orange);
left90down(white,red,yellow,blue,green,orange);
bottom180c(white,red,yellow,blue,green,orange);
left90up(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
left90down(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
left90up(white,red,yellow,blue,green,orange);
}

k=search1(1216,white,red,yellow,blue,green,orange);
printf("\n blue..%d",k);
if(k==1216)
{
}
else if(k==1124)
{
printf("\n bt+");
bottom90c(white,red,yellow,blue,green,orange);
}
else if(k==1015)
{
printf("\n bt++");
bottom180c(white,red,yellow,blue,green,orange);
}
else if(k==1103)
{
printf("\n bt-");
bottom90a(white,red,yellow,blue,green,orange);
}
g=search1(1015,white,red,yellow,blue,green,orange);
printf("\n%d........g..",g);
k=0;
while(g!=1015)
{
printf("\n ld bt++ lu bt+ ld bt+ lu");


left90down(white,red,yellow,blue,green,orange);
bottom180c(white,red,yellow,blue,green,orange);
left90up(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
left90down(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
left90up(white,red,yellow,blue,green,orange);
g=search1(1015,white,red,yellow,blue,green,orange);
printf("\n%d........g..",g);
k++;

}
printf("\n%d........g..",g);

}

//////// settting corner


int last3(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])
{

int g,b,r,y;

g=search1(1005,white,red,yellow,blue,green,orange);


if(g!=1005&& g!=1003&&g!=1202)
{

if(g!=1203&&g!=1206&&g!=1002)
{
while(g!=1005 && g!=1003 && g!=1202)
{
printf("\n rd bt- ld bt+ ru bt- lu bt+");

right90down(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
left90down(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
right90up(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
left90up(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
g=search1(1005,white,red,yellow,blue,green,orange);
printf("\n ...g...%d..",g);
}
}
else if(g!=1222 && g!=1024 && g!=1025)
{
while(g!=1005&&g!=1003&&g!=1202)
{
printf("\n lu bt- ru bt+ ld bt- rd bt+");

left90up(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
right90up(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
left90down(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
right90down(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
g=search1(1005,white,red,yellow,blue,green,orange);
printf("\n ...g...%d..",g);
}
}
}

b=search1(1206,white,red,yellow,blue,green,orange);
printf("\n ...b...%d..",b);

if(b!=1206 && b!=1203 && b!=1002)
{

while(b!=1206 && b!=1203 && b!=1002)
{
printf("\n ru bt+ lu bt- rd bt+ ld bt-");

right90up(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
left90up(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
right90down(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
left90down(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
b=search1(1206,white,red,yellow,blue,green,orange);
printf("\n ...b...%d..",b);
}
}

}

int last4(int n , int white[3][3], int red[3][3],int yellow[3][3], int blue[3][3], int green[3][3], int orange[3][3])
{
int y1,y2,y3,y4;
y1=search1(1002,white,red,yellow,blue,green,orange);
y2=search1(1202,white,red,yellow,blue,green,orange);
y3=search1(1222,white,red,yellow,blue,green,orange);
y4=search1(1022,white,red,yellow,blue,green,orange);

if(y1==1203)
{
printf("\n ld bt++ lu bt+ ld bt+ lu");
printf("\n rd bt++ ru bt- rd bt- ru");

left90down(white,red,yellow,blue,green,orange);
bottom180c(white,red,yellow,blue,green,orange);
left90up(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
left90down(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
left90up(white,red,yellow,blue,green,orange);

right90down(white,red,yellow,blue,green,orange);
bottom180c(white,red,yellow,blue,green,orange);
right90up(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
right90down(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
right90up(white,red,yellow,blue,green,orange);

}//


if(y1==1206)
{
printf("\n f- bt++ f+ bt- f- bt- f+");
printf("\n b- bt++ b+ bt+ b- bt+ b+");

front90a(white,red,yellow,blue,green,orange);
bottom180c(white,red,yellow,blue,green,orange);
front90c(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
front90c(white,red,yellow,blue,green,orange);

back90a(white,red,yellow,blue,green,orange);
bottom180c(white,red,yellow,blue,green,orange);
back90c(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
back90a(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
back90c(white,red,yellow,blue,green,orange);

}

y1=search1(1002,white,red,yellow,blue,green,orange);
printf("\n %d  ...y1....",y1);

y2=search1(1202,white,red,yellow,blue,green,orange);
print(1,white,red,yellow,blue,green,orange);

if(y2!=1202)
{

while(y2!=1202)/////////////////
{


printf("\n b- bt++ b+ bt+ b- bt+ b+");
printf("\n f- bt++ f+ bt- f- bt- f+");

back90a(white,red,yellow,blue,green,orange);
bottom180c(white,red,yellow,blue,green,orange);
back90c(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
back90a(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
back90c(white,red,yellow,blue,green,orange);

front90a(white,red,yellow,blue,green,orange);
bottom180c(white,red,yellow,blue,green,orange);
front90c(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
front90c(white,red,yellow,blue,green,orange);

y2=search1(1202,white,red,yellow,blue,green,orange);

printf("\n %d  ...y2....",y2);

}
}
/////////////////y3 
y3=search1(1222,white,red,yellow,blue,green,orange);
printf("\n %d  ...y3....",y3);

if(y3!=1222)
{

while(y3!=1222)/////////////////
{


printf("\n ru bt++ rd bt+ ru bt+ rd");///
printf("\n lu bt++ ld bt- lu bt- ld");

right90up(white,red,yellow,blue,green,orange);
bottom180c(white,red,yellow,blue,green,orange);
right90down(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
right90up(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
right90down(white,red,yellow,blue,green,orange);

left90up(white,red,yellow,blue,green,orange);
bottom180c(white,red,yellow,blue,green,orange);
left90down(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
left90up(white,red,yellow,blue,green,orange);
bottom90a(white,red,yellow,blue,green,orange);
left90down(white,red,yellow,blue,green,orange);

y3=search1(1222,white,red,yellow,blue,green,orange);

printf("\n %d  ...y3....",y3);

}
}

y4=search1(1022,white,red,yellow,blue,green,orange);
printf("\n %d  ...y4....",y4);

}








void main()
{
int i,j,k,value,g;

int white[3][3]={1204,1106,1005,1014,1111,1122,1004,1102,1006};
int yellow[3][3]={1023,1214,1206,1104,1112,1211,1222,1012,1226};
int red[3][3]={1025,1212,1026,1121,1113,1125,1205,1101,1225};
int blue[3][3]={1021,1103,1201,1123,1116,1013,1001,1126,1002};
int green[3][3]={1024,1216,1022,1015,1115,1011,1221,1213,1003};
int orange[3][3]={1202,1215,1224,1124,1114,1016,1223,1105,1203};



top90c(white,red,yellow,blue,green,orange);
//top180c(white,red,yellow,blue,green,orange);
//top90a(white,red,yellow,blue,green,orange);
bottom90c(white,red,yellow,blue,green,orange);
//bottom90a(white,red,yellow,blue,green,orange);
bottom180c(white,red,yellow,blue,green,orange);
//front90c(white,red,yellow,blue,green,orange);
front90a(white,red,yellow,blue,green,orange);
//front180c(white,red,yellow,blue,green,orange);
right90up(white,red,yellow,blue,green,orange);
//right90down(white,red,yellow,blue,green,orange);
right180c(white,red,yellow,blue,green,orange);
//left90up(white,red,yellow,blue,green,orange);
left90down(white,red,yellow,blue,green,orange);
//left180c(white,red,yellow,blue,green,orange);
back90c(white,red,yellow,blue,green,orange);
//back90a(white,red,yellow,blue,green,orange);
back180c(white,red,yellow,blue,green,orange);

print(value,white,red,yellow,blue,green,orange);


value=search1(1011,white,red,yellow,blue,green,orange);

base1(value,white,red,yellow,blue,green,orange);//1011
value=search1(1011,white,red,yellow,blue,green,orange);
printf("\n %d 1011...",value);

value=search1(1101,white,red,yellow,blue,green,orange);

base2(value,white,red,yellow,blue,green,orange);//1101
value=search1(1101,white,red,yellow,blue,green,orange);
printf("\n %d 1101...",value);


value=search1(1121,white,red,yellow,blue,green,orange);
base3(value,white,red,yellow,blue,green,orange);//1121

value=search1(1121,white,red,yellow,blue,green,orange);
printf("\n %d 1121...",value);



value=search1(1211,white,red,yellow,blue,green,orange);
base4(value,white,red,yellow,blue,green,orange);//1211

value=search1(1211,white,red,yellow,blue,green,orange);
printf("\n %d 1211...",value);
value=search1(1001,white,red,yellow,blue,green,orange);
printf("\n %d 1001...",value);

value=search1(1001,white,red,yellow,blue,green,orange);

corner1(value,white,red,yellow,blue,green,orange);//1211
value=search1(1001,white,red,yellow,blue,green,orange);

corner12(value,white,red,yellow,blue,green,orange);//1211
value=search1(1001,white,red,yellow,blue,green,orange);

corner11(value,white,red,yellow,blue,green,orange);//1211

value=search1(1001,white,red,yellow,blue,green,orange);
printf("\n %d 1001...",value);

/////

value=search1(1021,white,red,yellow,blue,green,orange);

corner2(value,white,red,yellow,blue,green,orange);//1211
value=search1(1021,white,red,yellow,blue,green,orange);

corner22(value,white,red,yellow,blue,green,orange);//1211
value=search1(1021,white,red,yellow,blue,green,orange);

corner21(value,white,red,yellow,blue,green,orange);//1211

value=search1(1021,white,red,yellow,blue,green,orange);
printf("\n %d 1021...",value);
///../

value=search1(1201,white,red,yellow,blue,green,orange);

corner3(value,white,red,yellow,blue,green,orange);//1201
value=search1(1201,white,red,yellow,blue,green,orange);

corner32(value,white,red,yellow,blue,green,orange);//1201
value=search1(1201,white,red,yellow,blue,green,orange);

corner31(value,white,red,yellow,blue,green,orange);//1201

value=search1(1201,white,red,yellow,blue,green,orange);
printf("\n %d 1201..",value);

//////

value=search1(1221,white,red,yellow,blue,green,orange);

corner4(value,white,red,yellow,blue,green,orange);//1221
value=search1(1221,white,red,yellow,blue,green,orange);

corner42(value,white,red,yellow,blue,green,orange);//1221
value=search1(1221,white,red,yellow,blue,green,orange);

corner41(value,white,red,yellow,blue,green,orange);//1221

value=search1(1221,white,red,yellow,blue,green,orange);
printf("\n %d 1221..",value);
////////


print(value,white,red,yellow,blue,green,orange);

value=search1(1013,white,red,yellow,blue,green,orange);
printf("\n %d ..1013...",value);

value=search1(1013,white,red,yellow,blue,green,orange);

layer1(value,white,red,yellow,blue,green,orange);//1221
value=search1(1013,white,red,yellow,blue,green,orange);

layer11(value,white,red,yellow,blue,green,orange);//1221
value=search1(1013,white,red,yellow,blue,green,orange);

layer12(value,white,red,yellow,blue,green,orange);//1221

value=search1(1013,white,red,yellow,blue,green,orange);
printf("\n %d 1013...",value);

print(value,white,red,yellow,blue,green,orange);

///


value=search1(1106,white,red,yellow,blue,green,orange);

layer1(value,white,red,yellow,blue,green,orange);//1221
value=search1(1106,white,red,yellow,blue,green,orange);

layer21(value,white,red,yellow,blue,green,orange);//1221
value=search1(1106,white,red,yellow,blue,green,orange);

layer22(value,white,red,yellow,blue,green,orange);//1221

value=search1(1106,white,red,yellow,blue,green,orange);
printf("\n %d 1106...",value);

///3

value=search1(1214,white,red,yellow,blue,green,orange);

layer1(value,white,red,yellow,blue,green,orange);//1221
value=search1(1214,white,red,yellow,blue,green,orange);

layer31(value,white,red,yellow,blue,green,orange);//1221
value=search1(1214,white,red,yellow,blue,green,orange);

layer32(value,white,red,yellow,blue,green,orange);//1221

value=search1(1214,white,red,yellow,blue,green,orange);
printf("\n %d 1214...",value);
////4


value=search1(1125,white,red,yellow,blue,green,orange);

layer1(value,white,red,yellow,blue,green,orange);//1221
value=search1(1125,white,red,yellow,blue,green,orange);

layer41(value,white,red,yellow,blue,green,orange);//1221
value=search1(1125,white,red,yellow,blue,green,orange);

layer42(value,white,red,yellow,blue,green,orange);//1221

value=search1(1125,white,red,yellow,blue,green,orange);
printf("\n %d 1125...",value);
print(value,white,red,yellow,blue,green,orange);

last1(value,white,red,yellow,blue,green,orange);
printf("\n %d 0",value);
print(value,white,red,yellow,blue,green,orange);
printf("\n oooooooo");

last2(value,white,red,yellow,blue,green,orange);////////checkk
printf("\n %d 022",value);
print(value,white,red,yellow,blue,green,orange);

last3(value,white,red,yellow,blue,green,orange);

print(value,white,red,yellow,blue,green,orange);
//

last4(value,white,red,yellow,blue,green,orange);

print(value,white,red,yellow,blue,green,orange);



/*printf("\n %d 1",value);
bottom90c(white,red,yellow,blue,green,orange);
print(value,white,red,yellow,blue,green,orange);
printf("\n %d 2",value);

front90c(white,red,yellow,blue,green,orange);
print(value,white,red,yellow,blue,green,orange);
printf("\n %d 3",value);
left90down(white,red,yellow,blue,green,orange);
print(value,white,red,yellow,blue,green,orange);
printf("\n %d 4",value);
bottom90a(white,red,yellow,blue,green,orange);
print(value,white,red,yellow,blue,green,orange);
printf("\n %d 5",value);
left90up(white,red,yellow,blue,green,orange);
print(value,white,red,yellow,blue,green,orange);
printf("\n %d 6",value);
bottom90c(white,red,yellow,blue,green,orange);
print(value,white,red,yellow,blue,green,orange);
printf("\n %d 7",value);
front90a(white,red,yellow,blue,green,orange);
print(value,white,red,yellow,blue,green,orange);
printf("\n %d 8",value);
bottom180c(white,red,yellow,blue,green,orange);
last1(value,white,red,yellow,blue,green,orange);
print(value,white,red,yellow,blue,green,orange);
/*
print(value,white,red,yellow,blue,green,orange);
printf("\n %d 0",value);
g=search1(1015,white,red,yellow,blue,green,orange);
printf("\n%d........g..",g);

left90down(white,red,yellow,blue,green,orange);

print(value,white,red,yellow,blue,green,orange);
printf("\n %d 1",value);
g=search1(1015,white,red,yellow,blue,green,orange);
printf("\n%d........g..",g);
top180c(white,red,yellow,blue,green,orange);

print(value,white,red,yellow,blue,green,orange);
printf("\n %d 2",value);
g=search1(1015,white,red,yellow,blue,green,orange);
printf("\n%d........g..",g);

left90up(white,red,yellow,blue,green,orange);

print(value,white,red,yellow,blue,green,orange);
printf("\n %d 3",value);
g=search1(1015,white,red,yellow,blue,green,orange);
printf("\n%d........g..",g);

top90c(white,red,yellow,blue,green,orange);

print(value,white,red,yellow,blue,green,orange);
printf("\n %d 4",value);
g=search1(1015,white,red,yellow,blue,green,orange);
printf("\n%d........g..",g);

left90down(white,red,yellow,blue,green,orange);

print(value,white,red,yellow,blue,green,orange);
printf("\n %d 5",value);
g=search1(1015,white,red,yellow,blue,green,orange);
printf("\n%d........g..",g);

top90c(white,red,yellow,blue,green,orange);

print(value,white,red,yellow,blue,green,orange);
printf("\n %d 6",value);
g=search1(1015,white,red,yellow,blue,green,orange);
printf("\n%d........g..",g);

left90up(white,red,yellow,blue,green,orange);

print(value,white,red,yellow,blue,green,orange);
printf("\n %d 7",value);
g=search1(1015,white,red,yellow,blue,green,orange);
printf("\n%d........g..",g);

g=search1(1015,white,red,yellow,blue,green,orange);
printf("\n%d........g..",g);
*/





}


























































































