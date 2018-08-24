class DateOutputter
{
  public:
    void PrintAsString(DayOfYear date);
};

void DateOutputter::PrintAsString(DayOfYear date)
{
    std::cout << date.GetMonth() << " " << date.GetDay() << std::endl;
};