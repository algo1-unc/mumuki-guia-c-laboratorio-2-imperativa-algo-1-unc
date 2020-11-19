/*...extra...*/

int len, i, j;
bool array_equal;


//  --- Test 0
char student_0[] = {1,2,3,4,5};
char control_0[] = {1,2,3,4,5};
len = sizeof(student_0)/sizeof(int);
i = 0;
j = len - 1;

intercambiar(student_0, len);
INTERCAMBIAR(control_0, len);

describe(genMsjTest("[1,2,3,4,5]", arrayToString(control_0, len), i, j)) {

    it (genMsjResult(arrayToString(student_0, len))) {
        array_equal = twoArrayEqual(student_0, control_0, len);
        should_bool(array_equal) be equal to(true);
    } end

} end

//  --- Test 1
char student_1[] = {71};
char control_1[] = {71};
len = sizeof(student_1)/sizeof(int);
i = 0;
j = 0;

intercambiar(student_1, len);
INTERCAMBIAR(control_1, len);

describe(genMsjTest("[1]", arrayToString(control_1, len), i, j)) {

    it (genMsjResult(arrayToString(student_1, len))) {
        array_equal = twoArrayEqual(student_1, control_1, len);
        should_bool(array_equal) be equal to(true);
    } end

} end

//  --- Test 2
char student_2[] = {-3,-2,-1,0,1,2,3};
char control_2[] = {-3,-2,-1,0,1,2,3};
len = sizeof(student_2)/sizeof(int);
i = 1;
j = 5;

intercambiar(student_2, len);
INTERCAMBIAR(control_2, len);

describe(genMsjTest("[-3,-2,-1,0,1,2,3]", arrayToString(control_2, len), i, j)) {

    it (genMsjResult(arrayToString(student_2, len))) {
        array_equal = twoArrayEqual(student_2, control_2, len);
        should_bool(array_equal) be equal to(true);
    } end

} end