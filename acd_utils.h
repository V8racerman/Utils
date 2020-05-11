#ifndef   ACD_Utils
#define   ACD_Utils

#if (ARDUINO >= 100)
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

class ACDUtils {
    public:
      // Constructor
      ACDUtils();

      // Methods
      void ftoa(float n, char* res, int total_length, int afterpoint);

    private:

    void reverse(char* str, int len);
    int intToStr(int x, char str[], int d); 
      
};


#endif
