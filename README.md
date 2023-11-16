# Builder-pattern
Builder-pattern uses creation of 3 drinks to explain the builder pattern in c++. These drinks are tea, coffee and cappuccino. Each drink require 3 components. These components are water, sugar and any of tea, coffee and cappiccino. All 5 
components are made into an enumeration to make the application very much explicit. Each class is made of a vector as a member variable. Whenever a component is added, it is added into this vector. Numerical values are used to represent the 
components because it makes easy for it to be tested.
There is a director class directs the build process. It takes a particular drink and calls all the functions require to build this drink in a sequential manner.
The output of the application looks as follows:

![image](https://github.com/O-Cube/Builder-pattern/assets/65163799/392d5e71-5eaf-4908-bd45-b209470cd562)

- Every third number represents the specific component. This component can be tea, coffee and cappuccino. The first and second numbers preceeding the third figure represent water and sugar which are generic to the drink making process.
Procedure:
- clone repository into local directory
- make -f Makefile to build the application
- make -f Makefile Run to execute the application
- make -f Makefike clean to get rid of build components and executable

Test:
- the application was tested using google test and mock framework. The contents that makes up each drink was tested against an expected value.
Test procedure:
- navigate into the test folder
- make -f Makefile to build the test application
- make -f Makefile Run to execute the test application
- make -f Makefile clean to remove build components, executables and lcov output directory

The test output looks as follows:
![builder test out](https://github.com/O-Cube/Builder-pattern/assets/65163799/3559b44b-d5e4-4396-a4c5-b92c09a06856)

the test statistics looks as follows:
![builder lcov out](https://github.com/O-Cube/Builder-pattern/assets/65163799/ee5fc0b9-15a1-475e-9241-925797ef9ebe)


