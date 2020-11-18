/*...extra...*/

int x,y,expected;

describe ("Distancia") {
    
    x, y = 15,2;
    expected = DISTANCIA(x,y);
    it (genMsj(x,y,expected)) {
        should_int(distancia(x,y)) be equal to(expected);
    } end

    x, y = -15,-2;
    expected = DISTANCIA(x,y);
    it (genMsj(x,y,expected)) {
        should_int(distancia(x,y)) be equal to(expected);
    } end

    x, y = 0,0;
    expected = DISTANCIA(x,y);
    it (genMsj(x,y,expected)) {
        should_int(distancia(x,y)) be equal to(expected);
    } end

    x, y = -50,100;
    expected = DISTANCIA(x,y);
    it (genMsj(x,y,expected)) {
        should_int(distancia(x,y)) be equal to(expected);
    } end
  
} end