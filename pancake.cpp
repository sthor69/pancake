// evaluate current pancake value
int evaluatePrice (int, int[], int, int);

// find max price changing one digit
int incPrice (int);

// convert a number in an array of digits
int* convert(int);

int main() {
  int sum = 0;
  
  for (int i = 0; i <= N; i++) {
    p = incPrice(L[i]);
    sum += p;
  }
}

int evaluatePrice (int label, int[] D, int B, int P) {
  int digitSum = 0;
  int digitProd = 1;
  
  int result = B;
    
  if (isPrime(label)) {
    result += P;
  }
  
  int* digits = convert(label);
  
  for (int d = 0; d < 6; d++) {
    switch (digits[d]) {
    case 2:
      s += D[2];
      break;
    case 3:
      s += D[3];
      break;
    case 5:
      s += D[5];
      break;
    case 7:
      s += D[7];
    break;
    }
    
    digitSum += digits[d];
    digitProd *= digits[d];
  }  
    }
  }
}
