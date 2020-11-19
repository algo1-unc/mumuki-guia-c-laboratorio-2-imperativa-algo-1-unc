/*...extra...*/

int x, y, expected;

describe ("Test: ") {
    
    x = 15;
    y = 2;
    expected = DISTANCIA(x,y);
    it (genMsj(x,y,expected)) {
        should_int(distancia(x,y)) be equal to(expected);
    } end

    x = -15;
    y = -2;
    expected = DISTANCIA(x,y);
    it (genMsj(x,y,expected)) {
        should_int(distancia(x,y)) be equal to(expected);
    } end

    x = 0;
    y = 0;
    expected = DISTANCIA(x,y);
    it (genMsj(x,y,expected)) {
        should_int(distancia(x,y)) be equal to(expected);
    } end
    
    x = 2;
    y = 3;
    expected = DISTANCIA(x,y);
    it (genMsj(x,y,expected)) {
        should_int(distancia(x,y)) be equal to(expected);
    } end
    
    x = 50;
    y = -100;
    expected = DISTANCIA(x,y);
    it (genMsj(x,y,expected)) {
        should_int(distancia(x,y)) be equal to(expected);
    } end
  
} end