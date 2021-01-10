//OPIS: branch test fail zbog nedefinisane varijable
int main() {
    int a;
    branch [b -> 1 -> 4 -> 6]
        first a = 2 + 3;
        second a++;
        third a = a;
        otherwise a = 2 + a + 3;
}
