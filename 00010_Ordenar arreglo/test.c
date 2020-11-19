/*...extra...*/

int len;
bool array_equal;

//  --- Test 1
int input_1[] = {-1, 0, -6, 9, -3};
int student_1[] = {-1, 0, -6, 9, -3};
int sorted_1[] = {-6, -3, -1, 0, 9};

len = sizeof(input_1) / sizeof(int);

ordenar(student_1, len);

describe(genMsjTest(arrayToString(input_1, len), 
                    arrayToString(sorted_1, len))) {
                        

    it (genMsjResult(arrayToString(student_1, len))) {
        array_equal = twoArrayEqual(student_1, sorted_1, len);
        should_bool(array_equal) be equal to(true);
    } end
} end