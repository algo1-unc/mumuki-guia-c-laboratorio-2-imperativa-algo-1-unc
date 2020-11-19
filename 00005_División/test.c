/*...extra...*/

int dividendo, divisor;
struct div_t st_student;
struct DIV_T st_expected;


describe (":") {
    
    dividendo = 12;
    divisor = 3;
    
    st_student = division(dividendo, divisor);
    st_expected = DIVISION(dividendo, divisor);

    describe (genMsj(dividendo, divisor, st_expected.cociente, st_expected.resto, st_expected.excepcion)) {
        it (" [Check 'Cociente']") {
            should_int(st_student.cociente) be equal to(st_expected.cociente);
        } end

        it (" [Check 'Resto']") {
            should_int(st_student.resto) be equal to(st_expected.resto);
        } end

        it ("   [Check 'Excepcion']") {
            should_bool(st_student.excepcion) be equal to(st_expected.excepcion);
        } end
    } end

    // ---
    dividendo = 12;
    divisor = 5;
    
    st_student = division(dividendo, divisor);
    st_expected = DIVISION(dividendo, divisor);

    describe (genMsj(dividendo, divisor, st_expected.cociente, st_expected.resto, st_expected.excepcion)) {
        it (" [Check 'Cociente']") {
            should_int(st_student.cociente) be equal to(st_expected.cociente);
        } end

        it (" [Check 'Resto']") {
            should_int(st_student.resto) be equal to(st_expected.resto);
        } end

        it ("   [Check 'Excepcion']") {
            should_bool(st_student.excepcion) be equal to(st_expected.excepcion);
        } end
    } end

    // ---
    dividendo = 0;
    divisor = 5;
    
    st_student = division(dividendo, divisor);
    st_expected = DIVISION(dividendo, divisor);

    describe (genMsj(dividendo, divisor, st_expected.cociente, st_expected.resto, st_expected.excepcion)) {
        it (" [Check 'Cociente']") {
            should_int(st_student.cociente) be equal to(st_expected.cociente);
        } end

        it (" [Check 'Resto']") {
            should_int(st_student.resto) be equal to(st_expected.resto);
        } end

        it ("   [Check 'Excepcion']") {
            should_bool(st_student.excepcion) be equal to(st_expected.excepcion);
        } end
    } end

    // ---
    dividendo = 12;
    divisor = 0;
    
    st_student = division(dividendo, divisor);
    st_expected = DIVISION(dividendo, divisor);

    describe (genMsj(dividendo, divisor, st_expected.cociente, st_expected.resto, st_expected.excepcion)) {
        it (" [Check 'Cociente']") {
            should_int(st_student.cociente) be equal to(st_expected.cociente);
        } end

        it (" [Check 'Resto']") {
            should_int(st_student.resto) be equal to(st_expected.resto);
        } end

        it ("   [Check 'Excepcion']") {
            should_bool(st_student.excepcion) be equal to(st_expected.excepcion);
        } end
    } end

    // ---
    dividendo = 0;
    divisor = 0;
    
    st_student = division(dividendo, divisor);
    st_expected = DIVISION(dividendo, divisor);

    describe (genMsj(dividendo, divisor, st_expected.cociente, st_expected.resto, st_expected.excepcion)) {
        it (" [Check 'Cociente']") {
            should_int(st_student.cociente) be equal to(st_expected.cociente);
        } end

        it (" [Check 'Resto']") {
            should_int(st_student.resto) be equal to(st_expected.resto);
        } end

        it ("   [Check 'Excepcion']") {
            should_bool(st_student.excepcion) be equal to(st_expected.excepcion);
        } end
    } end
    
} end