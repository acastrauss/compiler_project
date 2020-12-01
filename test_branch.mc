//OPIS: branch test
int main() {
    int a;
    branch [a -> 1 -> 4 -> 6]
        first a = 2 + 3;
        second a++;
        third a = a;
        otherwise a = 2 + a + 3;
}
