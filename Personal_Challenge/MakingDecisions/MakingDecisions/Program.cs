using System;

namespace MakingDecisions
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter the temperature");
            string temperature = Console.ReadLine();
            int numTemp;
            int number;
            if(int.TryParse(temperature, out number))
            {
                numTemp = number;
            }
            else
            {
                numTemp=0;
                Console.WriteLine("Value entered was no number. 0 set as temperature");
            }
            if(numTemp < 10)
            {
                Console.WriteLine("Take the coat");
            }
            else if(numTemp == 10)
            {
                Console.WriteLine("it's 10 degree");
            }else
            {
                Console.WriteLine("Cozy and warm!");
            }
            Console.Read();
        }
    }
}
