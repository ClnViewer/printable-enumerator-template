# C++ printable enumerator template
C++17 enum printable template, one header source

````
 class eTest
 {
    public:
     ENUM_PRINTABLE(EnumeratorName, int32_t,
         ENUM_TAG_OKAY,  // == 0
         ENUM_TAG_FAIL,
         ENUM_TAG_DONE,
         ENUM_TAG_SEND,
         ENUM_TAG_RECV,
         ENUM_TAG_DATA
     );
 };

 ...
  
     // Get enum size by labels:
     std::size_t s = eTest::sizeEnumeratorName();

     // Get string by number:
     std::cout << eTest::getEnumeratorName(2);

     // Get number by enum value:
     int32_t n = enumtoint(EnumeratorName::ENUM_TAG_DONE);
  
     // Get string by enum value:
     std::cout << enumtostring(EnumeratorName::ENUM_TAG_DONE);
  
     // Get string by enum value to std::ostream:
     std::cout << EnumeratorName::ENUM_TAG_DONE;

````

