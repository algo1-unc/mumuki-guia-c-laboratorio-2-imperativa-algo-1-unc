/*...extra...*/

int dividendo, divisor;
struct div_t st_student;
struct DIV_T st_expected;


describe ("Test: ") {
    
    dividendo = 12;
    divisor = 3;
    
    st_student = division(dividendo, divisor);
    st_expected = DIVISION(dividendo, divisor);

    it (genMsj(dividendo, divisor, st_expected.cociente, st_expected.resto, st_expected.excepcion)) {
        should_int(st_student.cociente) be equal to(st_expected.cociente);
        should_int(st_student.resto) be equal to(st_expected.resto);
        should_bool(st_student.exception) be equal to(st_expected.exception);
    } end
    
} end