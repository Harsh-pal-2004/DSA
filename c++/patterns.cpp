#include <bits/stdc++.h>
using namespace std;

void pat1(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}

void pat2(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}

void pat3(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << j << " ";
    }
    cout << endl;
  }
}

void pat4(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << i << " ";
    }
    cout << endl;
  }
}

void pat5(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}

void pat6(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i; j++) {
      cout << j + 1 << " ";
    }
    cout << endl;
  }
}

void pat7(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < n - i; j++) {
      cout << "  ";
    }
    for (int k = 1; k <= i * 2 - 1; k++) {
      cout << "* ";
    }
    for (int j = 0; j < n - i; j++) {
      cout << "  ";
    }
    cout << endl;
  }
}

void pat8(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < i - 1; j++) {
      cout << "  ";
    }
    for (int k = 1; k <= 2 * (n - i) + 1; k++) {
      cout << "* ";
    }
    for (int j = 0; j < i - 1; j++) {
      cout << "  ";
    }
    cout << endl;
  }
}

void pat9(int n) {
  pat7(n);
  pat8(n);
}

void pat10(int n) {
  for (int i = 1; i <= 2 * n - 1; i++) {
    int stars = i;
    if (i > n) {
      stars = 2 * n - i;
    }
    for (int j = 1; j <= stars; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}

void pat11(int n) {
  int start = 1;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) start = 1;
    else start = 0;

    for (int j = 0; j <= i; j++) {
      cout << start << " ";
      start = 1 - start;
    }
    cout << endl;
  }
}

void pat12(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << j << " ";
    }
    for (int k = 1; k <= 2 * (n - i); k++) {
      cout << "  ";
    }
    for (int j = i; j >= 1; j--) {
      cout << j << " ";
    }
    cout << endl;
  }
}

void pat13(int n) {
  int num = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << num << " ";
      num++;
    }
    cout << endl;
  }
}

void pat14(int n) {
  for (int i = 0; i < n; i++) {
    for (char ch = 'A'; ch <= 'A' + i; ch++) {
      cout << ch << " ";
    }
    cout << endl;
  }
}

void pat15(int n) {
  for (int i = 0; i < n; i++) {
    for (char ch = 'A'; ch <= 'A' + n - i - 1; ch++) {
      cout << ch << " ";
    }
    cout << endl;
  }
}

void pat16(int n) {
  for (int i = 0; i < n; i++) {
    char ch = 'A' + i;
    for (int j = 0; j <= i; j++) {
      cout << ch << " ";
    }
    cout << endl;
  }
}

void pat17(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < (n - i - 1); j++) {
      cout << "  ";
    }
    int breakpoint = i;
    char ch = 'A';
    for (int k = 0; k < 2 * i + 1; k++) {
      cout << ch << " ";
      if (k < breakpoint) ch++;
      else ch--;
    }
    for (int j = 0; j < (n - i - 1); j++) {
      cout << "  ";
    }
    cout << endl;
  }
}

void pat18(int n) {
  
  for (int i = 0; i < n; i++) {
    char ch = 'E';
    for (int j = 0; j <= i; j++) {
      cout << (char)(ch-i) << " ";
      ch++;
    }
    cout << endl;
  }
}

void pat19(int n) {
  for(int i =0; i <= n; i++){
    for(int j=0; j<= n-i;j++){
      cout<<"* ";
    }
    for(int j=0;j<=i-1;j++){
      cout<<"    ";
    }
    for(int j=0; j<= n-i;j++){
      cout<<"* ";
    }
    cout<<endl;
  }
  for(int i =0;i<=n;i++){
    for(int j = 0;j<=i;j++){
      cout<<"* ";
    }
    for(int j=0;j<n-i;j++){
      cout<<"    ";
    }
    for(int j = 0;j<=i;j++){
      cout<<"* ";
    }
    cout<<endl;
  }
}

int main() {
  int n = 5;
  pat19(n);
  return 0;
}
