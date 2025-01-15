#include <math.h>
#include <stdio.h>

#define SW 80
#define SH 30

int main(){
  double R2 = 2,R1 = 1, K2 = 5, K1 = (SW*K2*3)/(8*(R1+R2));
  printf("%lf %lf %lf %lf\n",R1,R2,K1,K2);
  double rev = 2 * M_PI;
  char output[SW][SH];
  for(int i=0; i<SW; ++i){
    for(int j=0; j<SH;++j){
      output[i][j] = ' ';
    }
  }
  for(double i=0; i<= rev; i+=0.02){
    double costheta = cos(i);
    double sintheta = sin(i);
    for(double j=0; j<= rev; j+=0.02){
      double cosphi = cos(j);
      double sinphi = sin(j);
      double circlex = R2 + R1*costheta;
      double circley = R1 * sintheta;

      double z = K2 + circley;
      double x = - circlex * sinphi;
      double y = circlex * cosphi;
      double ooz = 1/z;

      int xp = (int) ((double)SW/2 + K1 * ooz * x);
      int yp = (int) ((double)SH/2 - K1 * ooz * y);
      output[xp][yp] = '.';
    }
  }

  printf("\x1b[H");
  for(int j=0; j<SH; ++j){
    for(int i=0; i<SW; ++i){
      printf("%c",output[i][j]);
    }
    printf("\n");
  }
  return 0;
}
