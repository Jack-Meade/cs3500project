// CS3500 Project - Code Generator Tests
// Conor Patrick Mc Donald, Daniels Leonards Bindemans, Jack Meade
// Author: Daniels Bindemans

#include "../src/code_generator.h"
#include <ctap.h>

TESTS {
    #define TEST_INPUT_FILE       "tests/i2p.txt"
    #define TEST_OUTPUT_FILE      "tests/code.txt"
    #define TEST_INPUT1           "n,10\no,+\nn,5\no,/\nn,10\n"
    #define TEST_INPUT2           "n,10\no,-\nn,20\no,/\nn,1\n"
    #define TEST_EXPECTED_OUTPUT1 "10\nADD\n5\nDIV\n10\n"
    #define TEST_EXPECTED_OUTPUT2 "10\nSUB\n20\nDIV\n1\n"

    write_file(TEST_INPUT_FILE, TEST_INPUT1);
    is(generate_code(TEST_INPUT_FILE), TEST_EXPECTED_OUTPUT1, "result correct");

    write_file(TEST_INPUT_FILE, TEST_INPUT2);
    is(generate_code(TEST_INPUT_FILE), TEST_EXPECTED_OUTPUT2, "result correct");
}
