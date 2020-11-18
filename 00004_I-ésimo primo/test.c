/*...extra...*/

int n, expected;

describe ("Test: ") {
    
    n = 1;
    expected = IESIMO_PRIMO(n);
    it (genMsj(n,expected)) {
        should_int(iesimoPrimo(n)) be equal to(expected);
    } end
    
    n = 4;
    expected = IESIMO_PRIMO(n);
    it (genMsj(n,expected)) {
        should_int(iesimoPrimo(n)) be equal to(expected);
    } end

    n = 11;
    expected = IESIMO_PRIMO(n);
    it (genMsj(n,expected)) {
        should_int(iesimoPrimo(n)) be equal to(expected);
    } end

    n = 50;
    expected = IESIMO_PRIMO(n);
    it (genMsj(n,expected)) {
        should_int(iesimoPrimo(n)) be equal to(expected);
    } end

    n = 103;
    expected = IESIMO_PRIMO(n);
    it (genMsj(n,expected)) {
        should_int(iesimoPrimo(n)) be equal to(expected);
    } end

} end