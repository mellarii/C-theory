#include <iostream>

using namespace std;

enum PrintType {
  E_RGBA,
};

class RGBA {
  private:
  int red = 0;
  int green = 0;
  int blue = 0;
  int alpha = 255;
  PrintType printType;
  public:
  RGBA() = default;
  RGBA(int red, int green, int blue, int alpha) {
    this->red = red;
    this->green = green;
    this->blue = blue;
    this->alpha = alpha;
  };

  void setColor() { this->red = 0; this->green = 0; this->blue = 0; this->alpha = 255; }
  void setColor(int red, int green, int blue, int alpha) {
    this->red = red;
    this->green = green;
    this->blue = blue;
    this->alpha = alpha;
  };

  void print(PrintType printType) {
    if (printType == PrintType::E_RGBA) {
      cout << " RGB Colors: " << red << " " << green << " " << blue << " " << alpha << endl;
    }
  };

  RGBA sum(const RGBA& c2) {
    return RGBA(red + c2.red, green + c2.green, blue + c2.blue, alpha + c2.alpha);
  };

  ~RGBA() {};
};

int main() {

  RGBA color1;
  RGBA color2(32,12,42,122);
  color1.print(E_RGBA);

  color1.setColor(69, 52, 42, 67);
  color1.print(E_RGBA);

  color1.setColor();
  color1.print(E_RGBA);

  color1 = color1.sum(color2);
  color1.print(E_RGBA);

  return 0;
}