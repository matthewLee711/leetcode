class OCAtoi {
  // <COMPLETE>
  int atoi(String str) {
    int i = 0;
    int num = 0;
    boolean isNeg = false;

    //Check negative sign
    if(str.charAt(0) == '-') {
      isNeg = true;
      i = 1;
    }
    //process each character of the string --charAt returns char
    while(i < str.length()) {
      num *= 10;
      //Minus ascii code of '0' to get value of charAt
      //0 = 30, so for 9, 39 - 30 = 9
      num += str.charAt(i++) - '0';
    }

    if(isNeg) {
      num = -num;
    }

    return num;
  }

  public static void main(String[] args) {
    OCAtoi convert = new OCAtoi();
    System.out.println(convert.atoi(new String("543")));
  }
}
