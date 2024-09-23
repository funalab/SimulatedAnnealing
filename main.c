#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "sbml/SBMLTypes.h"
#include "experiment.h"

double unif_param(void);
double unif_update(void);

double likelihood_simple(double init_S1 , double init_S2, double k) {
  /* 変数定義 */
  double likelihood = 0.0;



  /* t = 0 ~ 10.0 までシミュレーションを実行 */




  /* 与えられたkの値に応じてlikelihoodを計算 */




  return likelihood;
}

int main(void) {
  srand(100); /* 乱数のシード設定 */
  double k = 0.8;
  double T = 1000;

  double alpha = 0.01;
  int Nt = 10;
  double rt = 0.8;
  double epsilon = pow(10, -8);

  double difference; /* 更新前後の尤度の差を格納する */

  /* simple.xmlを読み込み最急勾配法に必要な情報を取得する */
  SBMLDocument_t *d = readSBML("simple.xml");



  do {
    /* 焼きなまし法に基づきパラメータを更新する */




  } while(difference > epsilon);

  printf("Best k = %lf , likelihood = %lf\n" , ... , ...);

  SBMLDocument_free(d);
  return 0;
}
