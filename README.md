# PPL Assignment 
This assignment is created for Course Principles of Programming Languages of Indian Institute of Information Technology, Allahabad. Build Environment
  
  - C++
  - g++ (Ubuntu 5.4.0-6ubuntu1~16.04.4) 5.4.0 20160609
  - Ubuntu 16.04
  - Sublime Text

# Features!

  - Assigns Boys to Girls to according to provided constraints.
  - Keeps track of Gifts, Relationships, Breakups etc.
  - Generates Random Girls, Boys and Gifts.

### Installation

Git clone [PPL-Assignment](https://github.com/PPL-IIITA/ppl-assignment-BelieveC) v4+ to get code.

Perform following steps in terminal
```sh
$ g++ -c GeekBoys.cpp GenerousBoys.cpp MiserBoys.cpp ChoosyGirls.cpp DesperateGirls.cpp NormalGirls.cpp Relationship.cpp GiftRecord.cpp LuxuryGift.cpp EssentialGift.cpp UtilityGift.cpp
$ ar rvs Static.a GiftRecord.o GeekBoys.o ChoosyGirls.o DesperateGirls.o NormalGirls.o MiserBoys.o GenerousBoys.o Relationship.o EssentialGift.o LuxuryGift.o UtilityGift.o

For Question 1:
$ g++ Q1Main.cpp Static.a
$ ./a.out

For Question 2:
$ g++ Q2Main.cpp Static.a
$ ./a.out

```
### [Documentation](https://believec.github.io/PPL-Assignment-Doc/)

Looking for Documentation? Great!


```sh
$ cd html
$ firefox index.html
```

Want to generate random data!

```sh
$ g++ randomGen.cpp
$ ./a.out
```

