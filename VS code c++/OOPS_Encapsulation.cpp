#include <iostream>
using namespace std;
class student
{
private:
  string name;
  int id;

public:
  void set(string name1, int id1)
  {
    name = name1;
    id = id1;
  }
  string get()
  {
    return name;
  }
  int get1()
  {
    return id;
  }
};
int main()
{
  student s1;
  s1.set("Abdullah", 18);
  cout << s1.get() << " " << s1.get1();

  return 0;
}