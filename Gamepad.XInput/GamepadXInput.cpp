#include "GamepadXInput.h"
#include <winerror.h>
#include <Xinput.h>

using namespace Gamepad::XInput;

GamepadXInput::GamepadXInput(Gamepad::Index index)
{
	DWORD userIndex = (DWORD)index;
	XINPUT_STATE state;
	DWORD dwResult = XInputGetState(userIndex, &state);
	if (dwResult == ERROR_SUCCESS)
	{
		// Controller is connected
	}
	else
	{
		// Controller is not connected
		throw gcnew System::NotSupportedException();
	}
}

bool GamepadXInput::A::get()
{
	return false;
}

bool GamepadXInput::B::get()
{
	return false;
}

bool GamepadXInput::X::get()
{
	return false;
}

bool GamepadXInput::Y::get()
{
	return false;
}

bool GamepadXInput::L::get()
{
	return false;
}

bool GamepadXInput::R::get()
{
	return false;
}

bool GamepadXInput::Select::get()
{
	return false;
}

bool GamepadXInput::Start::get()
{
	return false;
}

bool GamepadXInput::Left::get()
{
	return false;
}

bool GamepadXInput::Right::get()
{
	return false;
}

bool GamepadXInput::Top::get()
{
	return false;
}

bool GamepadXInput::Bottom::get()
{
	return false;
}