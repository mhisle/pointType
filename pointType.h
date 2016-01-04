#include <string>
using namespace std;

class pointType
{
public:
      pointType(int x1 = 0, int y1 = 0);
      string showPoint() const;
      void setPoint(int, int);
      void print() const;
      int getX();
      int getY();
private:
      int x;
      int y;
};
      
