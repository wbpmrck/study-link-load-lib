int printf(const char *format, ...);

int global_init_var = 84;
int global_uninit_var;

void func1(int i)
{
  printf("%d\n", i);
}

int main(void)
{
  static int static_var = 85;
  static int staticVar2;
  int a = 1;
  int b;

  func1(static_var + staticVar2 + a + b);

  return a;
}