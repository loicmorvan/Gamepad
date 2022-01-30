#include "pch.h"

#include "GamepadXInputFactory.h"
#include "GamepadXInput.h"

using namespace Gamepad;
using namespace Gamepad::XInput;

IGamepad^ GamepadXInputFactory::Create()
{
	return gcnew GamepadXInput();
}
