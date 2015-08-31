using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using MyTestFuncsBridge;

namespace LCARD.ConsoleTestWrapper
{
    class Program
    {
        static void Main(string[] args)
        {
            MyTestFuncsBridge.MyTestFuncsBridge br = new MyTestFuncsBridge.MyTestFuncsBridge(1);
            var res = br.Add(1, 1);
            br.MessageReceived += BrOnMessageReceived;
            br.GetMessages();
            Console.WriteLine("1 + 1 = " + res);
            
        }

        private static bool BrOnMessageReceived(double d, double y0, double y1, double y2, double y3)
        {
            Console.WriteLine("d = " + d);
            return true;
        }
    }
}
