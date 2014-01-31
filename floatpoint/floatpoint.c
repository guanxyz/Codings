#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <fenv.h>

typedef union __ieee32
{
  float f;
  uint32_t i;

}ieee32;

int main(int argc, char ** argv)
{
  ieee32 t;
  t.f = 2.8;

  printf("%08X\n", (t.i & 0x8000000)>> 31);
  printf("%08X\n", (t.i & 0x7f80000)>>23);
  printf("%08X\n", (t.i & 0x007FFFF)>>0);

  t.i |= 0x80000000;
  printf( "%f\n", t.f);
  
  printf("%ld\n", sizeof(uint32_t));
  return 0;
}
