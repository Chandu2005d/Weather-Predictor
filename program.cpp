#include "splashkit.h"
#include <vector>
#include "weather.h"

using namespace std;

string climate, wind, location, loop, user_province, effective;
string input;
int digit_province;

string read_string(string prompt)
{
    string result;
    write(prompt);
    result = read_line();
    return result;
}

void Introduction()
{
    write_line("");
    write_line("-_-_-_-_-Hey, this is a program that predict weather and climate.");
    write_line("");
    write_line("-_-_-_-_-Enter the required information and then you will be aware about the upcoming weather.");
    write_line("-_-_-_-_-Also there is some options to check annual rainfall and temperature of your province.");
    write_line("-_-_-_-_-If you want any more clarifications you can access guidelines in main menu.");
    write_line("PRESS ENTER");
    effective = getchar();
}

void Guidelines()
{
    write_line("");
    write_line("-_-_-_-_-GUIDELINES ");
    write_line("-_-_-_-_-Weather Forecasting System ");
    write_line("");
    write_line("First of all you can access INTRODUCTION to know simply about program.");
    write_line("PRESS ENTER");
    effective = getchar();
    write_line("Now you already accessed guidelines for further clarifications.");
    write_line("PRESS ENTER");
    effective = getchar();
    write_line("Then you can get the weather forecast related to your area.");
    write_line("");
    write_line("Follow instructions");
    write_line("");
    write_line("Enter the all required information in lower case.");
    write_line("PRESS ENTER");
    effective = getchar();
    write_line("Also our program able to let you know about annual rainfalls and temperatures in your area.");
    write_line("Thereby this program can rank provinces according to annual rainfalls and temperatures.");
    write_line("PRESS ENTER");
    effective = getchar();
}

void WeatherForecast()
{
    do
    {
        loop = "abc";
        write_line("Hey you, Welcome to the Weather prediction program");
        write_line("Press ENTER to continue");
        input = getchar();

        write_line("How about the day? ");
        write_line("Is it rainy, sunny, or cloudy?  ");
        write_line("");
        climate = read_line();

        write_line("Okay then, how about the behavior of wind?");
        write_line("Is it breeze, average, storm? ");
        write_line("");
        wind = read_line();

        write_line("Well, where are you from?");
        write_line("Mention the city.");
        write_line("");
        location = read_line();
        write_line("");

        if ((climate == "cloudy") and (wind == "breeze" || wind == "average"))
        {
            write_line("It might be rain today at " + location);
            write_line("But lightnings cannot be expected");
            write_line("Take an umbrella where ever you go ");
        }
        else if (climate == "cloudy" and wind == "storm")
        {
            write_line("It might be rain today at " + location);
            write_line("Lightnings may occur");
            write_line("Switch off the plugs in your home. also, stay in home");
        }
        else if ((climate == "sunny") and (wind == "breeze" || wind == "average"))
        {
            write_line("Better day, complete your daily tasks. There is no any rains or storms for " + location);
        }
        else if (climate == "sunny" and wind == "storm")
        {
            write_line("Be in alert about tall trees near your home at " + location);
        }
        else if ((climate == "rainy") and (wind == "breeze" || wind == "average"))
        {
            write_line("It might be raining for several hours to " + location);
            write_line("You can go outside safely with an umbrella");
        }
        else if (climate == "rainy" and wind == "storm")
        {
            write_line("It might be raining with lightning for several hours to " + location);
            write_line("Stay in home. Switch off the plugs");
        }
        else
        {
            write_line("Please enter valid data and try again.");
        }

        write_line("Do you want to run again?");
        loop = read_line();
    } while (loop == "yes");
}

void AnnualRainfall()
{
    do
    {
        vector<string> provinces;
        provinces = {"1.Western", "2.Southern", "3.Sabaragamuwa", "4.Uva", "5.Central", "6.North_central", "7.North", "8.North_western", "9.Eastern"};
        write_line("");
        write_line("Select province ; ");
        write_line("");
        for (int AR = 0; AR < provinces.size(); AR++)
        {
            write_line(provinces[AR]);
        }
        write_line("10.Exit to main menu");
        user_province = read_line();
        digit_province = convert_to_integer(user_province);

        switch (digit_province)
        {
        case 1:
            write_line("Annual average rainfall for western province : 2387mm");
            write_line("PRESS ENTER TO CONTINUE");
            effective = getchar();
            break;
        case 2:
            write_line("Annual average rainfall for southern province : 2261mm");
            write_line("PRESS ENTER TO CONTINUE");
            effective = getchar();
            break;
        case 3:
            write_line("Annual average rainfall for sabaragamuwa province : 2368mm");
            write_line("PRESS ENTER TO CONTINUE");
            effective = getchar();
            break;
        case 4:
            write_line("Annual average rainfall for uva province : 1309mm");
            write_line("PRESS ENTER TO CONTINUE");
            effective = getchar();
            break;
        case 5:
            write_line("Annual average rainfall for central province : 1435mm");
            write_line("PRESS ENTER TO CONTINUE");
            effective = getchar();
            break;
        case 6:
            write_line("Annual average rainfall for north central province : 1085mm");
            write_line("PRESS ENTER TO CONTINUE");
            effective = getchar();
            break;
        case 7:
            write_line("Annual average rainfall for north province : 1152mm");
            write_line("PRESS ENTER TO CONTINUE");
            effective = getchar();
            break;
        case 8:
            write_line("Annual average rainfall for north western province : 1100mm");
            write_line("PRESS ENTER TO CONTINUE");
            effective = getchar();
            break;
        case 9:
            write_line("Annual average rainfall for eastern province : 2000mm");
            write_line("PRESS ENTER TO CONTINUE");
            effective = getchar();
            break;
        case 10:
            write_line("Exiting to main menu...");
            write_line("");
            break;
        default:
            write_line("Please enter the number of relevant province...");
            write_line("");
            break;
        };

    } while (digit_province != 10);
}
void AnnualTemperature()
{
    do
    {
        vector<string> provinces;
        provinces = {"1.Western", "2.Southern", "3.Sabaragamuwa", "4.Uva", "5.Central", "6.North_central", "7.North", "8.North_western", "9.Eastern"};
        write_line("");
        write_line("Select province ; ");
        write_line("");
        for (int AT = 0; AT < provinces.size(); AT++)
        {
            write_line(provinces[AT]);
        }
        write_line("10.Exit to main menu");
        user_province = read_line();
        digit_province = convert_to_integer(user_province);

        switch (digit_province)
        {
        case 1:
            write_line("Annual average temperature for western province : 26 'C");
            write_line("PRESS ENTER TO CONTINUE");
            effective = getchar();
            break;
        case 2:
            write_line("Annual average temperature for southern province : 27 'C");
            write_line("PRESS ENTER TO CONTINUE");
            effective = getchar();
            break;
        case 3:
            write_line("Annual average temperature for sabaragamuwa province : 24 'C");
            write_line("PRESS ENTER TO CONTINUE");
            effective = getchar();
            break;
        case 4:
            write_line("Annual average temperature for uva province : 23 'C");
            write_line("PRESS ENTER TO CONTINUE");
            effective = getchar();
            break;
        case 5:
            write_line("Annual average temperature for central province : 22 'C");
            write_line("PRESS ENTER TO CONTINUE");
            effective = getchar();
            break;
        case 6:
            write_line("Annual average temperature for north central province : 29 'C");
            write_line("PRESS ENTER TO CONTINUE");
            effective = getchar();
            break;
        case 7:
            write_line("Annual average temperature for north province : 30 'C");
            write_line("PRESS ENTER TO CONTINUE");
            effective = getchar();
            break;
        case 8:
            write_line("Annual average temperature for north western province : 28 'C");
            write_line("PRESS ENTER TO CONTINUE");
            effective = getchar();
            break;
        case 9:
            write_line("Annual average temperature for eastern province : 31 'C");
            write_line("PRESS ENTER TO CONTINUE");
            effective = getchar();
            break;
        case 10:
            write_line("Exiting to main menu...");
            write_line("");
            break;
        default:
            write_line("Please enter the number of relevant province...");
            write_line("");
            break;
        };

    } while (digit_province != 10);
}

int main()
{
    struct myStruct m1;

    write_line("------------Weather Forecasting System------------");
    write_line("------developed by chandu dissanaayke | 2023------");
    m1.a = getchar();

    do
    {
        write_line("1. Introduction");
        write_line("2. Guidelines");
        write_line("3. Weather Forecast");
        write_line("4. Annual Average Rainfall");
        write_line("5. Annual Average Temperature");
        write_line("6. Rainfall Rank");
        write_line("7. Temperature Rank");
        write_line("8. Exit");
        write_line("");
        m1.b = read_string("Enter your choice : ");
        write_line("");

        m1.i = convert_to_integer(m1.b);
        switch (m1.i)
        {
        case 1:
            Introduction();
            break;
        case 2:
            Guidelines();
            break;
        case 3:
            WeatherForecast();
            break;
        case 4:
            AnnualRainfall();
            break;
        case 5:
            AnnualTemperature();
            break;

        case 6:
            rainfallRank myRank;
            myRank = western;
            write("Western Province : ");
            write_line(western);
            myRank = sabaragamuwa;
            write("Sabaragamuwa Province : ");
            write_line(myRank);
            myRank = southern;
            write("Southern Province : ");
            write_line(myRank);
            myRank = eastern;
            write("Eastern Province : ");
            write_line(myRank);
            myRank = central;
            write("Central Province : ");
            write_line(myRank);
            myRank = uva;
            write("Uva Province : ");
            write_line(myRank);
            myRank = north;
            write("North Province : ");
            write_line(myRank);
            myRank = north_western;
            write("North Western Province : ");
            write_line(myRank);
            myRank = north_central;
            write("North Central Province : ");
            write_line(myRank);
            write_line("");

            write_line("PRESS ENTER TO EXIT");
            m1.a = getchar();
            break;
        case 7:
            tempRank myrank;
            myrank = e;
            write("Eastern Province : ");
            write_line(myrank);
            myrank = n;
            write("North Province : ");
            write_line(myrank);
            myrank = nc;
            write("North Central Province : ");
            write_line(myrank);
            myrank = nw;
            write("North Western Province : ");
            write_line(myrank);
            myrank = sp;
            write("Southern Province : ");
            write_line(myrank);
            myrank = w;
            write("Western Province : ");
            write_line(myrank);
            myrank = sg;
            write("Sabaragamuwa Province : ");
            write_line(myrank);
            myrank = u;
            write("Uva Province : ");
            write_line(myrank);
            myrank = c;
            write("Central Province : ");
            write_line(myrank);
            write_line("");

            write_line("PRESS ENTER TO EXIT");
            m1.a = getchar();
            break;
        case 8:
            write_line("Thanks for using me...");
            write_line("----------------------");
            break;
        default:
            write_line("Invalid choice. Please try again.");
            break;
        };
    } while (m1.i != 8);

    return 0;
}




// CREATION BY :CHANDU DISSANAYAKE: 7.4D