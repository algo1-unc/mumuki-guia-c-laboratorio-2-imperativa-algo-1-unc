/*...extra...*/

int list[];
int len;
struct info_t st_student;
struct INFO_T st_expected;


describe ("[0]: ") {
    
    list = {0};
    len = sizeof(list) / sizeof(int);
    
    st_student = analiza_array(list, len);
    st_expected = ANALIZA_ARRAY(list, len);

    describe (genMsj(st_expected.sumatoria, st_expected.maximo, st_expected.minimo, st_expected.alguno_positivo, st_expected.todos_positivos) {
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

} end

describe ("[-54]: ") {
    
    list = {-54};
    len = sizeof(list) / sizeof(int);
    
    st_student = analiza_array(list, len);
    st_expected = ANALIZA_ARRAY(list, len);

    describe (genMsj(st_expected.sumatoria, st_expected.maximo, st_expected.minimo, st_expected.alguno_positivo, st_expected.todos_positivos) {
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

} end

describe ("[-1,-2,0,1,2]: ") {
    
    list = {-1,-2,0,1,2};
    len = sizeof(list) / sizeof(int);
    
    st_student = analiza_array(list, len);
    st_expected = ANALIZA_ARRAY(list, len);

    describe (genMsj(st_expected.sumatoria, st_expected.maximo, st_expected.minimo, st_expected.alguno_positivo, st_expected.todos_positivos) {
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

} end

describe ("[1,2,3,4,5]: ") {
    
    list = {1,2,3,4,5};
    len = sizeof(list) / sizeof(int);
    
    st_student = analiza_array(list, len);
    st_expected = ANALIZA_ARRAY(list, len);

    describe (genMsj(st_expected.sumatoria, st_expected.maximo, st_expected.minimo, st_expected.alguno_positivo, st_expected.todos_positivos) {
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

} end