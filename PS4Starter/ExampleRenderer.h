#pragma once
#include "../Plugins/PlayStation4/PS4RendererBase.h"

namespace NCL {
	namespace PS4 {
		class ExampleRenderer : public PS4RendererBase
		{
		public:
			ExampleRenderer(PS4Window* window);
			
			~ExampleRenderer();

			void Update(float dt)	 override;

			void initialiseAssests();//1
			void Initworld();//1
		protected:
			void UpdateRotationAmount(float dt);
			void DrawRenderObject(RenderObject* o);
			void	RenderFrame()	override;
			void RenderActiveScene() override;

			RenderObject* defaultObject[2];

			PS4ComputeShader*	computeTest;
			PS4Shader*	defaultShader;
			PS4Mesh*	defaultMesh;
			PS4Texture* defaultTexture;

			//initial mesh
			PS4Mesh* cubeMesh = nullptr;
			PS4Mesh* sphereMesh = nullptr;
			PS4Texture* basicTex = nullptr;
			PS4Shader* basicShader = nullptr;

			NCL::Maths::Matrix4* viewProjMat;
			Gnm::Buffer	cameraBuffer;

			float* computeResult;
			float time;
		};
	}
}

