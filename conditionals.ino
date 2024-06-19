void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int tempurature = 3000;

  //conditionals work the same as java
  if(tempurature==20){
    Serial.println("perfect temp");
  }

  //|| is or conditions on either side can be true to evaluate to true
  // condition 1 | condition 2 | result
  //    T        |      T      |    T
  //    F        |      T      |    T
  //    T        |      F      |    T
  //    F        |      F      |    F

  else if (tempurature < 0 ||  tempurature > 100){
    Serial.println("impossile temp");
  }

  //&& is or conditions on both sides side have to be true to evaluate to true
  // condition 1 | condition 2 | result
  //    T        |      T      |    T
  //    F        |      T      |    F
  //    T        |      F      |    F
  //    F        |      F      |    F
  else if(tempurature > 20  && tempurature < 25){
    Serial.println("too hot");
  }
  else if (tempurature>=25){
    Serial.println("buring hot");
  }
  
  else {
    Serial.println("too cold");
  }
  Serial.println("the temp is ");
  Serial.println(tempurature);
  Serial.println("degrees");
}

void loop() {
  // put your main code here, to run repeatedly:

}
