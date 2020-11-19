/*...extra...*/

int len;
bool array_equal;


//  --- Test 0
int input_0[] = {0, -2};
int student_0[] = {0, -2};
int sorted_0[] = {-2, 0};
len = sizeof(input_0) / sizeof(int);

ordenar(student_0, len);

describe(genMsjTest(arrayToString(input_0, len), 
                    arrayToString(sorted_0, len))) {
                        

    it (genMsjResult(arrayToString(student_0, len))) {
        array_equal = twoArrayEqual(student_0, sorted_0, len);
        should_bool(array_equal) be equal to(true);
    } end
} end

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


//  --- Test 2
int input_2[] = {-3, -8, -1, 0, 2, -8, 1};
int student_2[] = {-3, -8, -1, 0, 2, -8, 1};
int sorted_2[] = {-8, -8, -3, -1, 0, 1, 2};

len = sizeof(input_2) / sizeof(int);

ordenar(student_2, len);

describe(genMsjTest(arrayToString(input_2, len), 
                    arrayToString(sorted_2, len))) {
                        

    it (genMsjResult(arrayToString(student_2, len))) {
        array_equal = twoArrayEqual(student_2, sorted_2, len);
        should_bool(array_equal) be equal to(true);
    } end
} end


//  --- Test 3
int input_3[] = {-6, 2, 4, -3, 4, 5, -9};
int student_3[] = {-6, 2, 4, -3, 4, 5, -9};
int sorted_3[] = {-9, -6, -3, 2, 4, 4, 5};

len = sizeof(input_3) / sizeof(int);

ordenar(student_3, len);

describe(genMsjTest(arrayToString(input_3, len), 
                    arrayToString(sorted_3, len))) {
                        

    it (genMsjResult(arrayToString(student_3, len))) {
        array_equal = twoArrayEqual(student_3, sorted_3, len);
        should_bool(array_equal) be equal to(true);
    } end
} end


//  --- Test 3
int input_4[] = {100};
int student_4[] = {100};
int sorted_4[] = {100};

len = sizeof(input_4) / sizeof(int);

ordenar(student_4, len);

describe(genMsjTest(arrayToString(input_4, len), 
                    arrayToString(sorted_4, len))) {
                        

    it (genMsjResult(arrayToString(student_4, len))) {
        array_equal = twoArrayEqual(student_4, sorted_4, len);
        should_bool(array_equal) be equal to(true);
    } end
} end
