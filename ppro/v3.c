#include "PRE"

void v2048(register real *a)
{
  u512((complex *)(a + 1024));
  v1024(a);
  vpassbig(a,d2048,256);
}
