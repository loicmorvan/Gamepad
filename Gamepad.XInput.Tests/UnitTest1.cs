using System;
using Xunit;

namespace Gamepad.XInput.Tests;
public class UnitTest1
{
    [Fact]
    public void Test1()
    {
        foreach(Index index in typeof(Index).GetEnumValues())
        {
            var sut = new GamepadXInputFactory();
            try
            {
                var gamepad = sut.Create(Index.One);
            }
            catch(NotSupportedException)
            {
                continue;
            }

            return;
        }

        throw new Exception();
    }
}
