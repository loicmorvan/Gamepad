#pragma once

namespace Gamepad {
	namespace XInput {
		public ref class GamepadXInput : IGamepad
		{
		public:
			property bool A
			{
				virtual bool get();
			}
			property bool B
			{
				virtual bool get();
			}
			property bool X
			{
				virtual bool get();
			}
			property bool Y
			{
				virtual bool get();
			}
			property bool L
			{
				virtual bool get();
			}
			property bool R
			{
				virtual bool get();
			}
			property bool Select
			{
				virtual bool get();
			}
			property bool Start
			{
				virtual bool get();
			}
			property bool Left
			{
				virtual bool get();
			}
			property bool Right
			{
				virtual bool get();
			}
			property bool Top
			{
				virtual bool get();
			}
			property bool Bottom
			{
				virtual bool get();
			}
		};
	}
}
