using System.Collections.Generic;
using System.IO;
using System.Text;
using ApprovalTests;
using ApprovalTests.Reporters;
using Xunit;

namespace RollUpLoop
{
    class Example2
    {
        public static void Timers(TextWriter writer)
        {
            var timers = new List<Timer>()
            {
                new IDTimer(),
                new P88NTimer(),
                new TimeQuotaTimer(),
                new ZB12Timer(),
                new DY9XTimer(),
            };
            foreach (var timer in timers)
            {
                timer.Print(writer);
            }
        }
    }

    interface Timer
    {
        public void Print(TextWriter writer);
    }
    class IDTimer : Timer
    {
        public void Print(TextWriter writer)
        {
            writer.WriteLine("IDT");
        }
    }

    class P88NTimer : Timer
    {
        public void Print(TextWriter writer)
        {
            writer.WriteLine("P88N");
        }
    }

    class TimeQuotaTimer : Timer
    {
        public void Print(TextWriter writer)
        {
            writer.WriteLine("TimeQuota");
        }
    }

    class ZB12Timer : Timer
    {
        public void Print(TextWriter writer)
        {
            writer.WriteLine("ZB12");
        }
    }
    
    class DY9XTimer : Timer
    {
        public void Print(TextWriter writer)
        {
            writer.WriteLine("DY9X");
        }
    }
    
    [UseReporter(typeof(DiffReporter))]
    public class Example2Test
    {
        [Fact]
        public void HelloWorldTest()
        {
            StringBuilder sb = new StringBuilder();
            StringWriter sw = new StringWriter(sb);
            Example2.Timers(sw);
            Approvals.Verify(sb);
        }
    }
}