void normalitzaValors(float vector[], int nValors)
{
    float max, min;

    for (int i = 0; i < nValors; i++)
    {
        if (i == 0)
        {
            min = vector[i];
            max = vector[i];
        }
        else if (vector[i] < min)
        {
            min = vector[i];
        }
        else if (vector[i] > max)
        {
            max = vector[i];
        }
    }

    if (nValors != 0 && min != max)
    {
        for (int i = 0; i < nValors; i++)
        {
            vector[i] = (vector[i] - min) / (max - min);
        }
    }
}