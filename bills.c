#include <stdio.h>
#include <math.h>

int main()
{
    char name[50], repeat;
        int plan, Id, Y;
        float top_rate, Base_rate, limited, Gb, Totalamount_vat, totalamount, Net_amount, extra_consumed, extra;

       do
    {
        printf("Which subscription you want to choose Homeplan then enter 1 or corporateplan then press 2:");
        scanf("%d", &plan);
        if (plan == 1)
        {
            Base_rate = 1500;
            limited = 350;
            top_rate = 3;
            printf("The Homeplan provides\n NPR %.1f for upto %.1f gb \n NPR %.1f per gb extra\n", Base_rate, limited, top_rate);
        }

        else if (plan == 2)
        {
            Base_rate = 3500;
            limited = 1000;
            float top_rate = 1.5;
            printf("The corporate plan provides\n NPR %.1f for upto %.1f \n NPR %.1f per gb extra\n", Base_rate, limited, top_rate);
        }

        else
        {
            printf("invalid");
        }
        printf("\nEnter customers name:");
        scanf("%s", &name);
        printf("Enter customer Id:");
        scanf("%d", &Id);
        printf("Enter how much GB the customer have consumed:");
        scanf("%f", &Gb);

        if (Gb >= limited)
        {
            extra = Gb - limited;
            extra_consumed = extra * top_rate;
            Net_amount = Base_rate + extra_consumed;
            Totalamount_vat = Net_amount * 0.13;
            totalamount = Net_amount + Totalamount_vat;
        }
        else
        {
            Totalamount_vat = Base_rate * 0.13;
            totalamount = Base_rate + Totalamount_vat;
        }

        printf("------Bill-------\n");
        printf("Name: %s\n", name);
        printf("CustomerId: %d\n", Id);
        printf("Total Gb consumed: %.2f\n", Gb);
        printf("Vat_amount: %.2f\n",Totalamount_vat);
        printf("Total amount: %.2f\n", totalamount);

       while(repeat != 'y' && repeat != 'n'){
        printf("Do you want to create another billing :");
        scanf("%c",&repeat);
       }


        return 0;
    } while(repeat == 'y');

    printf("Do you want to clear the screen :");
    scanf("%c",&repeat);
    if( repeat == 'y' || repeat== 'Y'){
        system("cls");
    }

    return 0;
}



