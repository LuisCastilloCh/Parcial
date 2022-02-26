// C++ code
using namespace std;
//

int array[2]={140,123};

void setup()
{
  Serial.begin(9600);
  Serial.write((byte*)array,5);
}

void loop()
{
}

