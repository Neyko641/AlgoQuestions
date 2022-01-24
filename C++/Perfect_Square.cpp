template<class T>
bool checkNumber(T n) {
  bool isPS = false;
   for (int i = 0; i <= n; i++) {
      if ( i * i == n) {
         isPS = true;
         break;
      }
      if ( i * i > n) {
        break;
      } 
   }
   return isPS;
}

bool solve(int n) {
  return checkNumber(n);
}
