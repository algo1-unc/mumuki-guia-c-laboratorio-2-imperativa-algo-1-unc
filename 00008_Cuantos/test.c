/*...extra...*/

int len;
int elem;
struct comp_t st_student;
struct COMP_T st_expected;


//  --- Test 0
int list_0[] = {};
len = sizeof(list_0) / sizeof(int);
elem = 66;

st_student = cuantos(list_0, len, elem);
st_expected = CUANTOS(list_0, len, elem);

describe( genMsj(arrayToString(list_0, len),
                elem,
                st_expected.menores,
                st_expected.iguales, 
                st_expected.mayores)) {

    it (" [Check 'Menores']") {
        should_int(st_student.menores) be equal to(st_expected.menores);
    } end

    it (" [Check 'Iguales']") {
        should_int(st_student.iguales) be equal to(st_expected.iguales);
    } end

    it (" [Check 'Mayores']") {
        should_int(st_student.mayores) be equal to(st_expected.mayores);
    } end

} end

//  --- Test 1
int list_1[] = {1,2,3,4,5};
len = sizeof(list_1) / sizeof(int);
elem = 3;

st_student = cuantos(list_1, len, elem);
st_expected = CUANTOS(list_1, len, elem);

describe( genMsj(arrayToString(list_1, len),
                elem,
                st_expected.menores,
                st_expected.iguales, 
                st_expected.mayores)) {

    it (" [Check 'Menores']") {
        should_int(st_student.menores) be equal to(st_expected.menores);
    } end

    it (" [Check 'Iguales']") {
        should_int(st_student.iguales) be equal to(st_expected.iguales);
    } end

    it (" [Check 'Mayores']") {
        should_int(st_student.mayores) be equal to(st_expected.mayores);
    } end

} end


//  --- Test 2
int list_2[] = {-1,-2,3,40,50};
len = sizeof(list_2) / sizeof(int);
elem = -1;

st_student = cuantos(list_2, len, elem);
st_expected = CUANTOS(list_2, len, elem);

describe( genMsj(arrayToString(list_2, len),
                elem,
                st_expected.menores,
                st_expected.iguales, 
                st_expected.mayores)) {

    it (" [Check 'Menores']") {
        should_int(st_student.menores) be equal to(st_expected.menores);
    } end

    it (" [Check 'Iguales']") {
        should_int(st_student.iguales) be equal to(st_expected.iguales);
    } end

    it (" [Check 'Mayores']") {
        should_int(st_student.mayores) be equal to(st_expected.mayores);
    } end

} end


//  --- Test 3
int list_3[] = {-23,-21,0,4,500};
len = sizeof(list_3) / sizeof(int);
elem = 40;

st_student = cuantos(list_3, len, elem);
st_expected = CUANTOS(list_3, len, elem);

describe( genMsj(arrayToString(list_3, len),
                elem,
                st_expected.menores,
                st_expected.iguales, 
                st_expected.mayores)) {

    it (" [Check 'Menores']") {
        should_int(st_student.menores) be equal to(st_expected.menores);
    } end

    it (" [Check 'Iguales']") {
        should_int(st_student.iguales) be equal to(st_expected.iguales);
    } end

    it (" [Check 'Mayores']") {
        should_int(st_student.mayores) be equal to(st_expected.mayores);
    } end

} end