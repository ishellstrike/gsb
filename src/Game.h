#pragma once

#include <Magnum/Platform/Sdl2Application.h>
#include <Corrade/Containers/ArrayView.h>
#include <Corrade/PluginManager/Manager.h>
#include <Magnum/Buffer.h>
#include <Magnum/DefaultFramebuffer.h>
#include <Magnum/Mesh.h>
#include <Magnum/Texture.h>
#include <Magnum/TextureFormat.h>
#include <Magnum/Trade/AbstractImporter.h>
#include <Magnum/Trade/ImageData.h>

#include "TexturedTriangleShader.h"
#include "configure.h"
#include "tools\FpsCounter.h"
#include "../ImguiPort.h"
#include "../imgui/imgui.h"

using namespace Magnum;

class Game : public Platform::Application
{
public:
	explicit Game(const Arguments& arguments);
  ~Game();

	void drawEvent() override;

  void viewportEvent(const Vector2i& size) override;

  void keyPressEvent(KeyEvent& event) override;

  void keyReleaseEvent(KeyEvent& event) override;

  void mousePressEvent(MouseEvent& event) override;

  void mouseReleaseEvent(MouseEvent& event) override;

  void mouseMoveEvent(MouseMoveEvent& event) override;

  void mouseScrollEvent(MouseScrollEvent& event) override;

  void textInputEvent(TextInputEvent& event) override;

  void textEditingEvent(TextEditingEvent& event) override;

private:
	Buffer _buffer;
	Mesh _mesh;
	TexturedTriangleShader _shader;
	Texture2D _texture;

	FpsCounter mFpsCounter;

  ImguiPort mImguiPort;

  bool show_test_window = false;
  bool show_another_window = false;
  ImVec4 clear_color = ImColor(114, 144, 154);
};
