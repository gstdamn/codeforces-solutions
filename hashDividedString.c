char* stringHash(char* s, int k) {
    int tamanhoString = strlen(s) / k;
    char *result = (char *)malloc((tamanhoString + 1) * sizeof(char));

    int posicaoPalavra = 0, auxPos = 0; 
    for(int i = 0; i < tamanhoString; i++){
        int somaChar = 0;

        for(int j = 0; j < k; j++){
            somaChar += (int)s[posicaoPalavra] - 97;
            posicaoPalavra++;
        }
        somaChar = somaChar % 26;
        result[auxPos] = (char) ( 'a' + somaChar);
        auxPos++;
    }
    result[auxPos] = '\0';
    return result;

}
