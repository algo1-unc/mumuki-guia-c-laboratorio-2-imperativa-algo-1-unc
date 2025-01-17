/*...extra...*/

int len;
struct info_t st_student;
struct INFO_T st_expected;


//  --- Test 0
int list0[] = {0};
len = sizeof(list0) / sizeof(int);

st_student = analizaArray(list0, len);
st_expected = ANALIZA_ARRAY(list0, len);

describe( genMsj(arrayToString(list0, len),
                st_expected.sumatoria, 
                st_expected.maximo, 
                st_expected.minimo, 
                st_expected.alguno_positivo, 
                st_expected.todos_positivos)) {

    it (" [Check 'Sum']") {
        should_int(st_student.sumatoria) be equal to(st_expected.sumatoria);
    } end

    it (" [Check 'Max']") {
        should_int(st_student.maximo) be equal to(st_expected.maximo);
    } end

    it (" [Check 'Min']") {
        should_int(st_student.minimo) be equal to(st_expected.minimo);
    } end

    it (" [Check 'Alguno(+)']") {
        should_bool(st_student.alguno_positivo) be equal to(st_expected.alguno_positivo);
    } end

    it (" [Check 'Todos(+)']") {
        should_bool(st_student.todos_positivos) be equal to(st_expected.todos_positivos);
    } end
} end


//  --- Test 1
int list1[] = {-54};
len = sizeof(list1) / sizeof(int);

st_student = analizaArray(list1, len);
st_expected = ANALIZA_ARRAY(list1, len);

describe( genMsj(arrayToString(list1, len),
                st_expected.sumatoria, 
                st_expected.maximo, 
                st_expected.minimo,
                st_expected.alguno_positivo, 
                st_expected.todos_positivos)) {

    it (" [Check 'Sum']") {
        should_int(st_student.sumatoria) be equal to(st_expected.sumatoria);
    } end

    it (" [Check 'Max']") {
        should_int(st_student.maximo) be equal to(st_expected.maximo);
    } end

    it (" [Check 'Min']") {
        should_int(st_student.minimo) be equal to(st_expected.minimo);
    } end

    it (" [Check 'Alguno(+)']") {
        should_bool(st_student.alguno_positivo) be equal to(st_expected.alguno_positivo);
    } end

    it (" [Check 'Todos(+)']") {
        should_bool(st_student.todos_positivos) be equal to(st_expected.todos_positivos);
    } end
} end


//  --- Test 2
int list2[] = {-1,-2,0,1,2};
len = sizeof(list2) / sizeof(int);

st_student = analizaArray(list2, len);
st_expected = ANALIZA_ARRAY(list2, len);

describe( genMsj(arrayToString(list2, len),
                st_expected.sumatoria, 
                st_expected.maximo, 
                st_expected.minimo, 
                st_expected.alguno_positivo, 
                st_expected.todos_positivos)) {

    it (" [Check 'Sum']") {
        should_int(st_student.sumatoria) be equal to(st_expected.sumatoria);
    } end

    it (" [Check 'Max']") {
        should_int(st_student.maximo) be equal to(st_expected.maximo);
    } end

    it (" [Check 'Min']") {
        should_int(st_student.minimo) be equal to(st_expected.minimo);
    } end

    it (" [Check 'Alguno(+)']") {
        should_bool(st_student.alguno_positivo) be equal to(st_expected.alguno_positivo);
    } end

    it (" [Check 'Todos(+)']") {
        should_bool(st_student.todos_positivos) be equal to(st_expected.todos_positivos);
    } end
} end


//  --- Test 3
int list3[] = {1,2,3,4,5};
len = sizeof(list3) / sizeof(int);

st_student = analizaArray(list3, len);
st_expected = ANALIZA_ARRAY(list3, len);

describe( genMsj(arrayToString(list3, len),
                st_expected.sumatoria, 
                st_expected.maximo, 
                st_expected.minimo, 
                st_expected.alguno_positivo, 
                st_expected.todos_positivos)) {

    it (" [Check 'Sum']") {
        should_int(st_student.sumatoria) be equal to(st_expected.sumatoria);
    } end

    it (" [Check 'Max']") {
        should_int(st_student.maximo) be equal to(st_expected.maximo);
    } end

    it (" [Check 'Min']") {
        should_int(st_student.minimo) be equal to(st_expected.minimo);
    } end

    it (" [Check 'Alguno(+)']") {
        should_bool(st_student.alguno_positivo) be equal to(st_expected.alguno_positivo);
    } end

    it (" [Check 'Todos(+)']") {
        should_bool(st_student.todos_positivos) be equal to(st_expected.todos_positivos);
    } end
} end