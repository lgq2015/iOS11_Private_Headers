/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNMetalRenderPipeline : NSObject {
    unsigned int  _buffersUsageMask;
    NSArray * _frameBufferBindings;
    NSArray * _lightBufferBindings;
    NSArray * _nodeBufferBindings;
    struct __C3DFXPass { } * _pass;
    NSArray * _passBufferBindings;
    struct __C3DFXProgram { } * _program;
    unsigned int  _samplersUsageMask;
    struct { 
        BOOL vertexIndex; 
        BOOL fragmentIndex; 
    }  _sceneBuffer;
    NSArray * _shadableBufferBindings;
    <MTLRenderPipelineState> * _state;
    unsigned int  _texturesUsageMask;
}

@property (nonatomic, copy) NSArray *frameBufferBindings;
@property (nonatomic, copy) NSArray *lightBufferBindings;
@property (nonatomic, copy) NSArray *nodeBufferBindings;
@property (nonatomic, copy) NSArray *passBufferBindings;
@property (nonatomic, copy) NSArray *shadableBufferBindings;
@property (nonatomic, retain) <MTLRenderPipelineState> *state;
@property (nonatomic, readonly) unsigned int vertexBuffersUsageMask;

- (void)_computeUsageForArguments:(id)arg1 stage:(int)arg2;
- (void)dealloc;
- (id)description;
- (id)frameBufferBindings;
- (id)init;
- (id)lightBufferBindings;
- (id)nodeBufferBindings;
- (id)passBufferBindings;
- (void)setFrameBufferBindings:(id)arg1;
- (void)setLightBufferBindings:(id)arg1;
- (void)setNodeBufferBindings:(id)arg1;
- (void)setPassBufferBindings:(id)arg1;
- (void)setShadableBufferBindings:(id)arg1;
- (void)setState:(id)arg1;
- (id)shadableBufferBindings;
- (id)state;
- (unsigned int)vertexBuffersUsageMask;

@end
