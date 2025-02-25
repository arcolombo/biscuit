#ifndef _WZ_STATS_H_
#define _WZ_STATS_H_

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

#define MAXIT 100
#define EPS 3.0e-7
#define FPMIN 1.0e-30

typedef enum{HOMOREF = 0, HET = 1, HOMOVAR = 2} Genotype;

double binom_pval(int s, int n, double p);

double pval2qual(double pval);

double varcall_pval(int kr, int kv, double error, double mu, double contam);

double genotype_lnlik(Genotype genotype, int kr, int kv, double error, double contam);

double somatic_lnlik(int kr, int kv, double error);

double fisher_exact(int n11, int n12, int n21, int n22, double *_left, double *_right, double *two);

/* double ln_beta_incdiff_kernel(double p1, double p2, int a, int b); */
double inconsist_score(int kr_tumor, int kv_tumor, int kr_normal, int kv_normal, double mu, double error);

double ln_sum2(double ln1, double ln2);

double ln_sum3(double ln1, double ln2, double ln3);

double ln_substract(double ln1, double ln2);

double ln_binom_kernel(double p, int a, int b);

double ln_beta_incdiff_kernel(double p1, double p2, int a, int b);

double somatic_posterior(int kr_t, int kv_t, int kr_n, int kv_n, double error, double mu, double mu_somatic, double contam);

#endif
