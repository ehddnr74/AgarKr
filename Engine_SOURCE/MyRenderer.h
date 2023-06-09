#pragma once
#include "MyEngine.h"
#include "MyGraphicDevice_Dx11.h"
#include "Mesh.h"
#include "Shader.h"
#include "ConstantBuffer.h"

using namespace My::math;
namespace renderer
{
	struct Vertex
	{
		Vector3 pos;
		Vector4 color;
	};

	extern Vertex vertexes[];
	extern My::Mesh* mesh;
	extern My::Shader* shader;
	extern My::graphics::ConstantBuffer* constantBuffer;

	void Initialize();
	void Release();
}

