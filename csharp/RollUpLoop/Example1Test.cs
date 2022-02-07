using System;
using System.IO;
using System.Text;
using ApprovalTests;
using ApprovalTests.Reporters;
using Xunit;

namespace RollUpLoop
{
    public class Example1
    {
        public static void Hello(TextWriter writer)
        {
            int i;
            i = 0;
            writer.WriteLine($"hello {i}");
            i = 1;
            writer.WriteLine($"hello {i}");
            i = 2;
            writer.WriteLine($"hello {i}");
            i = 3;
            writer.WriteLine($"hello {i}");
            i = 4;
            writer.WriteLine($"hello {i}");
        }
    }
    [UseReporter(typeof(DiffReporter))]
    public class Example1Test
    {
        [Fact]
        public void HelloWorldTest()
        {
            StringBuilder sb = new StringBuilder();
            StringWriter sw = new StringWriter(sb);
            Example1.Hello(sw);
            Approvals.Verify(sb);
        }
    }
}