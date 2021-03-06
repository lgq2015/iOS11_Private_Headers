/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUJSRenderNode : NUJSProxy <NUJSRenderNodeExport>

@property (readonly) NUJSImageGeometry *geometry;
@property (readonly) NUJSImageProperties *imageProperties;
@property (readonly) NURenderNode *node;
@property (readonly) NUJSVideoProperties *videoProperties;

- (id)geometry;
- (id)imageProperties;
- (id)initWithNode:(id)arg1 context:(id)arg2;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;
- (id)node;
- (id)videoProperties;

@end
