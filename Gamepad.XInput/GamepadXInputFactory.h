#pragma once

namespace Gamepad {
	namespace XInput {
		public ref class GamepadXInputFactory : IGamepadFactory
		{
		public:
			virtual IGamepad^ Create();
		};
	}
}
