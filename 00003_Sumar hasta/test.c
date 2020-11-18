/*...extra...*/

int n, expected;

describe ("Test: ") {
    
    n = 0
    expected = SUMAR_HASTA(n);
    it (genMsj(n,expected)) {
        should_int(sumarHasta(n)) be equal to(expected);
    } end
    
    n = 4
    expected = SUMAR_HASTA(n);
    it (genMsj(n,expected)) {
        should_int(sumarHasta(n)) be equal to(expected);
    } end

    n = 11
    expected = SUMAR_HASTA(n);
    it (genMsj(n,expected)) {
        should_int(sumarHasta(n)) be equal to(expected);
    } end

} end