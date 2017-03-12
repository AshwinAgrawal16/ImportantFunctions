int POW (int num, int exp)
{
  int out = 1;
  while (exp-- > 0)
    out *= num;
  return out;
}
int Reverse(int num)
{
  //get num digits
  int nb_digits = 0;
  while (num / POW(10,nb_digits) > 0)
    ++nb_digits;

  //add the digits, one at a time:
  int out = 0, iterator = nb_digits;
  while (iterator > 0)
  {
    out += num / POW(10,iterator-1) * POW(10,nb_digits-iterator);
    num %= POW(10,--iterator);
  }
  return out;
}
