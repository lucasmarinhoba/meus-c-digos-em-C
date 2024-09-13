int main() {
    float temperatura_c, distancia_km,temperatura_f,distancia_milhas;
    printf("Insira a temperatura em Celsius:\n");
    scanf("%f", &temperatura_c);
    temperatura_f = (temperatura_c*9/5) + 32;
    printf("A temperatura em Fahrenheit é: %.2f\n",temperatura_f);

    printf("Insira a distancia em Kilometros:\n");
    scanf("%f", &distancia_km);
    distancia_milhas = distancia_km*0.621371;
    printf("A distância em milhas é: %.2f\n",distancia_milhas);
    return 0;
}
