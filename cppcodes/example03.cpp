#include <iostream>

int main(int argc, char *argv[])
{
  unsigned short x = 0xffff;
  unsigned short y = 0xffff;
  auto z = x * y;
  std::cout << (z > 0) << " " << z << std::endl;
  return 0;
}
