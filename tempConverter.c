#include <stdio.h>

float convertCF(float C) //função que converte Celsius para Fahrenheit
{
    float F;
    F = 1.8 * C + 32;
    return F;
}
float convertCK(float C) //função que converte Celsius para Kelvin
{
    float K;
    K = C + 273;
    return K;
}
float convertFC(float F) //Função que converte de Fahrenheit para Celsius
{
    float C;
    C = (F - 32) / 1.8;
    return C;
}
float convertFK(float F) //Função que converte de Fahrenheit para Kelvin
{
    float K;
    K = (F - 32) / 1.8 + 273;
    return K;
}
float convertKC(float K) //Função que converte de Kelvin para Celsius
{
    float C;
    C = K - 273;
    return C;
}
float convertKF(float K) //Função que converte de Kelvin para Fahrenheit
{
    float F;
    F = 1.8 * (K - 273) + 32;
    return F;
}

int main(void)
{
    float CelsiusValue;
    float FahrenheitValue;
    float KelvinValue;
    float temp;
    char tempScale;

    printf("====^====\n");
    printf("Welcome to the temperature scales converter!\n");
    printf("Enter a temperature with the scale suffix (C, F or K):\n");
    scanf("%f %c", &temp, &tempScale);                                                                                        // Define a temperatura e a escala usada
    if (tempScale != 'C' && tempScale != 'c' && tempScale != 'F' && tempScale != 'f' && tempScale != 'K' && tempScale != 'k') //se não for nem Celsius, nem Fahrenheit, nem Kelvin, da a mensagem "Scale not valid"
        printf("Scale Not Valid\n");
    else
    {
        if (tempScale == 'C' || tempScale == 'c') //se a escala for Celsius ele vai converter para Fahrenheit e Kelvin
        {

            FahrenheitValue = convertCF(temp);
            KelvinValue = convertCK(temp);
            printf("\n");
            printf("Celsius temperature: %18.2f°\n", temp);
            printf("Fahrenheit temperature: %15.2f°\n", FahrenheitValue);
            printf("Kelvin temperature: %19.2f°\n", KelvinValue);
            printf("====^====\n");
        }
        if (tempScale == 'F' || tempScale == 'f') //se a escala for Fahrenheit ele vai converter para e Kelvin e  Celsius
        {
            CelsiusValue = convertFC(temp);
            KelvinValue = convertFK(temp);
            printf("\n");
            printf("Celsius temperature: %18.2f°\n", CelsiusValue);
            printf("Fahrenheit temperature: %15.2f°\n", temp);
            printf("Kelvin temperature: %19.2f°\n", KelvinValue);
            printf("====^====\n");
        }
        if (tempScale == 'K' || tempScale == 'k') //se a escala for Kelvin ele vai converter para Fahrenheit e Celsius
        {
            CelsiusValue = convertKC(temp);
            FahrenheitValue = convertKF(temp);
            printf("\n");
            printf("Celsius temperature: %18.2f°\n", CelsiusValue);
            printf("Fahrenheit temperature: %15.2f°\n", FahrenheitValue);
            printf("Kelvin temperature: %19.2f°\n", temp);
            printf("====^====\n");
        }
    }
    return 0;
}
