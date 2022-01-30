namespace Gamepad;

public interface IGamepadFactory
{
    IGamepad Create(Index index);
}
