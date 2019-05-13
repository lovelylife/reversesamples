
#include <string.h>

void fun1( char* tmp ) 
{
  char c[8];
  strcpy( c, tmp );
}


int main( int argc, char* argv[] )
{
  _asm
  {
    nop;
    nop;
    nop;
    nop;
    nop;
  }

  char array0[]="fffffff";
  char array1[]="ffffffff";   //f=0x66
  char array2[]="ffffffffgggg";
  char array3[]="ffffffffgggghhhh";
  fun1(array0);

  return 1;


}

