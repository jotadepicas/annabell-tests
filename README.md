# annabell-tests
Unit Tests for [Annabell](https://github.com/golosio/annabell) project.

Building
--------

This unit tests depend on [Google Test](https://github.com/google/googletest/) Unit Testing framework.
See [Google Test building instructions](https://github.com/google/googletest/blob/master/googletest/README.md) for information on how to build GoogleTest for your platform.

Once you have installed Google Test, all you need to build this tests is:
* Make sure you include Google Test libraries (gtest and pthread) in your build settings 
* Make sure Annabell is on your build path (so you can include, for example, Annabell.h from a test and invoke Annabell's methods).

As a quick reference, for linux using g++ you could build it like this:

    g++ -I path/to/annabell/src/ -o annabell-test ParseCommandTests.cpp -lgtest -lpthread

