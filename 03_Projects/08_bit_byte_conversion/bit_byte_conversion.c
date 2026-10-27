/*
TASK:
Create a storage-unit converter for bits, bytes, and units from KB through EB.
Accept source and destination units, perform the conversion, and display the result.
*/


#include <math.h>
#include <stdio.h>

double bitsPerUnit(char unit);

int main(void)
{
    double value;
    double sourceFactor;
    double destinationFactor;
    double result;
    char convertFrom;
    char convertTo;

    printf("\n'b' for bits, 'B' for bytes, 'K' for KB, 'M' for MB, ");
    printf("'G' for GB, 'T' for TB, 'P' for PB, 'E' for EB\n\n");

    printf("Enter the value to convert: ");
    if (scanf("%lf", &value) != 1 || value < 0.0)
    {
        printf("Enter a valid non-negative value.\n");
        return 1;
    }

    printf("Enter the source unit: ");
    if (scanf(" %c", &convertFrom) != 1)
    {
        printf("Unable to read the source unit.\n");
        return 1;
    }

    printf("Enter the destination unit: ");
    if (scanf(" %c", &convertTo) != 1)
    {
        printf("Unable to read the destination unit.\n");
        return 1;
    }

    sourceFactor = bitsPerUnit(convertFrom);
    destinationFactor = bitsPerUnit(convertTo);

    if (sourceFactor == 0.0 || destinationFactor == 0.0)
    {
        printf("Invalid unit. Use b, B, K, M, G, T, P, or E.\n");
        return 1;
    }

    result = value * sourceFactor / destinationFactor;
    if (!isfinite(result))
    {
        printf("The converted value is too large to represent.\n");
        return 1;
    }

    printf("%.20g %c\n", result, convertTo);
    return 0;
}

double bitsPerUnit(char unit)
{
    const double bitsPerByte = 8.0;
    const double kilo = 1024.0;

    switch (unit)
    {
    case 'b':
        return 1.0;
    case 'B':
        return bitsPerByte;
    case 'K':
        return bitsPerByte * kilo;
    case 'M':
        return bitsPerByte * kilo * kilo;
    case 'G':
        return bitsPerByte * kilo * kilo * kilo;
    case 'T':
        return bitsPerByte * kilo * kilo * kilo * kilo;
    case 'P':
        return bitsPerByte * kilo * kilo * kilo * kilo * kilo;
    case 'E':
        return bitsPerByte * kilo * kilo * kilo * kilo * kilo * kilo;
    default:
        return 0.0;
    }
}
