/*...extra...*/

int len;
bool array_equal;

//  --- Test 0
int input_0[] = {0, -2};
int sorted_0[] = {-2, 0};
len = sizeof(input_0) / sizeof(int);

ordenar(input_0, len);

describe(genMsjTest("[0,-2]","[-2,0]")) {
                        

    it (genMsjResult(arrayToString(input_0, len))) {
        array_equal = twoArrayEqual(input_0, sorted_0, len);
        should_bool(array_equal) be equal to(true);
    } end
} end

//  --- Test 1
int input_1[] = {-1, 0, -6, 9, -3};
int sorted_1[] = {-6, -3, -1, 0, 9};
len = sizeof(input_1) / sizeof(int);

ordenar(input_1, len);

describe(genMsjTest("[-1,0,-6,9,-3]","[-6,-3,-1,0,9]")) {
                        
    it (genMsjResult(arrayToString(input_1, len))) {
        array_equal = twoArrayEqual(input_1, sorted_1, len);
        should_bool(array_equal) be equal to(true);
    } end
} end


//  --- Test 2
int input_2[] = {-3, -8, -1, 0, 2, -8, 1};
int sorted_2[] = {-8, -8, -3, -1, 0, 1, 2};
len = sizeof(input_2) / sizeof(int);

ordenar(input_2, len);

describe(genMsjTest("[-3,-8,-1,0,2,-8,1]","[-8,-8,-3,-1,0,1,2]")) {
                        
    it (genMsjResult(arrayToString(input_2, len))) {
        array_equal = twoArrayEqual(input_2, sorted_2, len);
        should_bool(array_equal) be equal to(true);
    } end
} end

//  --- Test 3
int input_3[] = {100};
int sorted_3[] = {100};
len = sizeof(input_3) / sizeof(int);

ordenar(input_3, len);

describe(genMsjTest("[100]","[100]")) {
                        
    it (genMsjResult("[100]")) {
        array_equal = twoArrayEqual(input_3, sorted_3, len);
        should_bool(array_equal) be equal to(true);
    } end
} end
