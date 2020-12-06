//OPIS: branch test fail zbog tipa
int main() {
    int a;
    branch [a -> 1 -> 4 -> 6u]
        first a = 2 + 3;
        second a++;
        third a = a;
        otherwise a = 2 + a + 3;
}
