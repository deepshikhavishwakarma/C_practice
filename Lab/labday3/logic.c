int main() {
 int a=1,b;
 b=a++ + a++ + a++;
  printf("%d %d\n",a,b);
  a=1;
  b=++a + ++a + ++a; 
  printf("%d %d",a,b);
  
return 0;    
}