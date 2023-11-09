# Observer-Pattern
- application uses observer pattern to broadcast messages.
- applications consist of Client and IphoneShop class. Both classes implements the Customer interface.
- Manufacturer class represents iphone manufacturer and sends out information to customer objects concerning the release of iphone.
- IphoneInfo dispatcher acts as the broadcaster. It gets information from the Manufacturer class and broadcast the information to customer objects subscribed to it

# Procedure
- clone application and in the source directory run; make -f Makefile to build the application
- make -f Makefile Run to execute the application
- make -f Makefile to clean objects files and executables

Application output looks thus:
![image](https://github.com/O-Cube/Observer-Pattern/assets/65163799/d87c8447-7f5a-45ad-a256-00c47de84f0b)

# Test application
- test requires gtest, gmock, gcov, lcov and genhtml packages
- in test folder, run make -f Makefile to build test application
- make -f Makefile Run to execute test application
- make -f Makefile clean to delete object files, executable, test output directory, .gcda and .gcno files

Test application output looks as follows:

![image](https://github.com/O-Cube/Observer-Pattern/assets/65163799/008fb000-0537-441e-b2a0-e8e6f3e796a8)

extract of test coverage data looks thus:

![image](https://github.com/O-Cube/Observer-Pattern/assets/65163799/e5722d55-bd31-4e11-b31d-06e4f13548f5)

