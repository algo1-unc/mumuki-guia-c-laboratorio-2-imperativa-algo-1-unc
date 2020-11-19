/*...extra...*/

int len;
bool array_equal;

//  --- Test 0
int student_0[] = {};
int control_0[] = {};
len = sizeof(control_0) / sizeof(int);

invertir(student_0, len);
INVERTIR(control_0, len);

describe(genMsjTest("[]", arrayToString(control_0, len))) {

    it (genMsjResult(arrayToString(student_0, len))) {
        array_equal = twoArrayEqual(student_0, control_0, len);
        should_bool(array_equal) be equal to(true);
    } end
} end


//  --- Test 1
int student_1[] = {66};
int control_1[] = {66};
len = sizeof(control_1) / sizeof(int);

invertir(student_1, len);
INVERTIR(control_1, len);

describe(genMsjTest("[66]", arrayToString(control_1, len))) {

    it (genMsjResult(arrayToString(student_1, len))) {
        array_equal = twoArrayEqual(student_1, control_1, len);
        should_bool(array_equal) be equal to(true);
    } end
} end


//  --- Test 2
int student_2[] = {1,2,3,4};
int control_2[] = {1,2,3,4};
len = sizeof(control_2) / sizeof(int);

invertir(student_2, len);
INVERTIR(control_2, len);

describe(genMsjTest("[1,2,3,4]", arrayToString(control_2, len))) {

    it (genMsjResult(arrayToString(student_2, len))) {
        array_equal = twoArrayEqual(student_2, control_2, len);
        should_bool(array_equal) be equal to(true);
    } end
} end


//  --- Test 3
int student_3[] = {-2,-1,0,1,2};
int control_3[] = {-2,-1,0,1,2};
len = sizeof(control_3) / sizeof(int);

invertir(student_3, len);
INVERTIR(control_3, len);

describe(genMsjTest("[-2,-1,0,1,2]", arrayToString(control_3, len))) {

    it (genMsjResult(arrayToString(student_3, len))) {
        array_equal = twoArrayEqual(student_3, control_3, len);
        should_bool(array_equal) be equal to(true);
    } end
} end