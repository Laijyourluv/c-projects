#include <stdio.h>
int main()
{
    int n;

    printf("Enter the number\n");
    scanf("%d", &n);

    if (n > 0 && n <= 100)
    {
        if (n > 10 && n <= 19)
        {
            switch (n)
            {

            case 11:
                printf("Eleven\n");
                break;
            case 12:
                printf("Twelve\n");
                break;
            case 13:
                printf("Thirteen\n");
                break;
            case 14:
                printf("fourteen\n");
                break;
            case 15:
                printf("fifteen\n");
                break;
            case 16:
                printf("sixteen\n");
                break;
            case 17:
                printf("seventeen\n");
                break;

            case 18:
                printf("eighteen\n");
                break;

            case 19:
                printf("ninteen\n");
                break;
            }
        }
        else

        {

            switch (n / 10)
            {
            case 1:
                printf("Ten\n");
                break;
            case 2:
                printf("Twenty\n");
                break;
                /*    case 21:
            printf("Twenty-One\n");
            break;
        case 22:
            printf("\n");
            break;
        case 23:
            printf("One\n");
            break;
        case 24:
            printf("One\n");
            break;
        case 25:
            printf("One\n");
            break;
        case 26:
            printf("One\n");
            break;
        case 27:
            printf("One\n");
            break;
        case 28:
            printf("One\n");
            break;
        case 29:
            printf("One\n");
            break; */
            case 3:
                printf("thirty\n");
                break;
                /*  case 31:
            printf("One\n");
            break;
        case 32:
            printf("One\n");
            break;
        case 33:
            printf("One\n");
            break;
        case 34:
            printf("One\n");
            break;
        case 35:
            printf("One\n");
            break;

        case 36:
            printf("One\n");
            break;
        case 37:
            printf("One\n");
            break;
        case 38:
            printf("One\n");
            break;
        case 39:
            printf("One\n");
            break; */
            case 4:
                printf("forty\n");
                break;
                /* case 41:
            printf("One\n");
            break;
        case 42:
            printf("One\n");
            break;
        case 43:
            printf("One\n");
            break;
        case 44:
            printf("One\n");
            break;
        case 45:
            printf("One\n");
            break;
        case 46:
            printf("One\n");
            break;
        case 47:
            printf("One\n");
            break;
        case 48:
            printf("One\n");
            break;
        case 49:
            printf("One\n");
            break; */
            case 5:
                printf("fifty\n");
                break;
                /*        case 51:
            printf("One\n");
            break;
        case 52:
            printf("One\n");
            break;
        case 53:
            printf("One\n");
            break;
        case 54:
            printf("One\n");
            break;
        case 55:
            printf("One\n");
            break;
        case 56:
            printf("One\n");
            break;
        case 57:
            printf("One\n");
            break;
        case 58:
            printf("One\n");
            break;
        case 59:
            printf("One\n");
            break; */
            case 6:
                printf("sixty\n");
                break;
                /* case 61:
            printf("One\n");
            break;
        case 62:
            printf("One\n");
            break;
        case 63:
            printf("One\n");
            break;
        case 64:
            printf("One\n");
            break;
        case 65:
            printf("One\n");
            break;
        case 66:
            printf("One\n");
            break;
        case 67:
            printf("One\n");
            break;
        case 68:
            printf("One\n");
            break;
        case 69:
            printf("One\n");
            break; */
            case 7:
                printf("Seventy\n");
                break; /*
        case 71:
            printf("One\n");
            break;
        case 72:
            printf("One\n");
            break;
        case 73:
            printf("One\n");
            break;
        case 74:
            printf("One\n");
            break;
        case 75:
            printf("One\n");
            break;
        case 76:
            printf("One\n");
            break;
        case 77:
            printf("One\n");
            break;
        case 78:
            printf("One\n");
            break;
        case 79:
            printf("One\n");
            break;  */
            case 8:
                printf("Eighty\n");
                break;
                /*      case 81:
            printf("One\n");
            break;
        case 82:
            printf("One\n");
            break;
        case 83:
            printf("One\n");
            break;
        case 84:
            printf("One\n");
            break;
        case 85:
            printf("One\n");
            break;
        case 86:
            printf("One\n");
            break;
        case 87:
            printf("One\n");
            break;
        case 88:
            printf("One\n");
            break;
        case 89:
            printf("One\n");
            break; */
            case 9:
                printf("Ninety\n");
                break;
                /*     case 91:
            printf("One\n");
            break;
        case 92:
            printf("One\n");
            break;
        case 93:
            printf("One\n");
            break;
        case 94:
            printf("One\n");
            break;
        case 95:
            printf("One\n");
            break;
        case 96:
            printf("One\n");
            break;
        case 97:
            printf("One\n");
            break;
        case 98:
            printf("One\n");
            break;   */
            case 10:
                printf("Hundred\n");
                break;
            }

            switch (n % 10)
            {

            case 1:
                printf("One\n");
                break;

            case 2:
                printf("two\n");
                break;
            case 3:
                printf("three\n");
                break;
            case 4:
                printf("four\n");
                break;
            case 5:
                printf("five\n");
                break;
            case 6:
                printf("six\n");
                break;
            case 7:
                printf("seven\n");
                break;
            case 8:
                printf("eight\n");
                break;
            case 9:
                printf("nine\n");
                break;
            }
        }
    }
    return 0;
}