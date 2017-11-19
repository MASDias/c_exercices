#include <stdio.h>

int rotate_left (int num, int nbits){
    if ((nbits &= sizeof(num)*8 - 1) == 0)
      return num;
    return (num << nbits) | (num >> (sizeof(num)*8 - nbits));
	
}

int rotate_right (int num, int nbits){
    if ((nbits &= sizeof(num)*8 - 1) == 0)
      return num;
    return (num >> nbits) | (num << (sizeof(num)*8 - nbits));
	
}
