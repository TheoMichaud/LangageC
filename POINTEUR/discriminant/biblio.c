float discriminant(float a, float b, float c, float *x1, float *x2)
{
  float delta;

    delta=b*b-4*a*c;



    if(delta>0)
    {
        *x1=((-b)+sqrt(delta))/(2*a);

        *x2=((-b)-sqrt(delta))/(2*a);

    }
    else if(delta==0)
    {
    *x1=(-b)/(2*a);
    *x1=*x2;
    }
    else
    {
    printf("pas de solutions dans l'ensemble des réels");
    }



    return delta;

}
