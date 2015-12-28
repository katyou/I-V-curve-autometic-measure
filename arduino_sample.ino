int v;
int i;
int x;

void setup()
{
  pinMode(8,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  char a;
  if (Serial.available() > 0)   //データをIDEから受信したら処理を始める
  {
    a = Serial.read();    //データを１バイト読み込む
    if (a =='z')           
    {
      digitalWrite(8,HIGH);  //8番ピンから5V出力　スイッチ1,3オン　充電開始
      digitalWrite(0,LOW);   //0番ピンの電源オフ　スイッチ2オフ
      Measure();
    }
    if (a =='y')
    {
      digitalWrite(8,LOW);  //8晩ピンの電源オフ　スイッチ1,3オフ
      digitalWrite(0,HIGH);  //0晩ピンから5V出力　スイッチ2オン　放電開始
      dammymeasure();
    }
  }
}
void Measure()
{
  for(x=1; x<=100;x++)
  {
    v = analogRead(A1);
    i = analogRead(A2);
    Serial.println(v);
    Serial.println(i);
    delay(100);
  }
}
void dammymeasure()
{
  v = analogRead(A1);
    i = analogRead(A2);
    Serial.println(v);
    Serial.println(i);
    delay(100);
}
  



    
