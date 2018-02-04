/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

@interface CLKUIMetalQuad : CLKUIQuad {
    unsigned int  _isInitialized;
    <MTLRenderPipelineState> * _renderPipelineState;
    <MTLBuffer> * _texCoordBuffer;
    <MTLBuffer> * _uniformBuffer;
    <MTLBuffer> * _vertexBuffer;
}

@property (nonatomic, retain) <MTLRenderPipelineState> *renderPipelineState;
@property (nonatomic, retain) <MTLBuffer> *texCoordBuffer;
@property (nonatomic, retain) <MTLBuffer> *uniformBuffer;
@property (nonatomic, retain) <MTLBuffer> *vertexBuffer;

- (void).cxx_destruct;
- (void)_initialize;
- (id)_newRenderPipelineStateOpaque:(bool)arg1;
- (void)encode:(id)arg1;
- (id)renderPipelineState;
- (void)setOpaque:(bool)arg1;
- (void)setRenderPipelineState:(id)arg1;
- (void)setTexCoordBuffer:(id)arg1;
- (void)setUniformBuffer:(id)arg1;
- (void)setVertexBuffer:(id)arg1;
- (id)texCoordBuffer;
- (id)uniformBuffer;
- (id)vertexBuffer;

@end
