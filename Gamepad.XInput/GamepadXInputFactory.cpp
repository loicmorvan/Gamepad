#include "GamepadXInputFactory.h"
#include "GamepadXInput.h"

using namespace Gamepad;
using namespace Gamepad::XInput;

IGamepad^ GamepadXInputFactory::Create(Gamepad::Index index)
{
	return gcnew GamepadXInput(index);
}
