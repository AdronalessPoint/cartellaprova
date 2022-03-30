//ehi



#ifndef REGRESSION_HPP
#define REGRESSION_HPP
#include <vector>

struct Result {
  double A;
  double B;


};
//
class Regression {
     struct Point { //struttura point dentro a regression 
     //(permette di creare punti ma i metodi di regression non hanno accesso a x e y) (nested class)
    double x;
    double y;
  };
  std::vector<Point> points_{};
  
 public:
  int size() const;
  void add(double exe, double eps);
  Result fit() const;

  /////
  //
};  
Result fit(Regression const &reg);

#endif
