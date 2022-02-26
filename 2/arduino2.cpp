// C++ code
using namespace std;
//

int array[2];

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()){
	Serial.readBytes((byte*)array,5);
    Serial.println(array[1]);
  }
  
  delay(10);
 
}


