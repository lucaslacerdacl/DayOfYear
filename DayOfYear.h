class DayOfYear
{
  private:
    int _day;
    int _month;
    void ValidateDay(int day);
    void ValidateMonth(int month);
    void ValidateFebruary(int day, int month);
    void ValidateExtensiveMonths(int day, int month);
    void CheckProvidedDate(int day, int month);
    std::string FormatMonth();
  public:
    DayOfYear(int day, int month);
    int GetDay();
    std::string GetMonth();
};

DayOfYear::DayOfYear(int day, int month)
{
    CheckProvidedDate(day, month);
};

void DayOfYear::CheckProvidedDate(int day, int month)
{
    ValidateDay(day);
    ValidateMonth(month);
    ValidateFebruary(day, month);
    ValidateExtensiveMonths(day, month);
    _day = day;
    _month = month;
};

void DayOfYear::ValidateExtensiveMonths(int day, int month)
{
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day == 31)
    {
        exit(1);
    }
}

void DayOfYear::ValidateFebruary(int day, int month)
{
    if (month == 2 && day > 29)
    {
        exit(1);
    }
}

void DayOfYear::ValidateMonth(int month)
{
    if (month > 12)
    {
        exit(1);
    }
}

void DayOfYear::ValidateDay(int day)
{
    if (day > 31)
    {
        exit(1);
    }
}

std::string DayOfYear::FormatMonth()
{
    switch (_month)
    {
        case 1:
            return "Janeiro";
            break;
        case 2:
            return "Fevereiro";
            break;
        case 3:
            return "Março";
            break;
        case 4:
            return "Abril";
            break;
        case 5:
            return "Maio";
            break;
        case 6:
            return "Junho";
            break;
        case 7:
            return "Julho";
            break;
        case 8:
            return "Agosto";
            break;
        case 9:
            return "Setembro";
            break;
        case 10:
            return "Outubro";
            break;
        case 11:
            return "Novembro";
            break;
        case 12:
            return "Dezembro";
            break;
    
        default:
            exit(1);
    }
}

int DayOfYear::GetDay()
{
    return _day;
};

std::string DayOfYear::GetMonth()
{
    return FormatMonth();
};