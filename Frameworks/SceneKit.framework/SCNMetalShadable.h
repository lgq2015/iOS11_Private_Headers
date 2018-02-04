/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNMetalShadable : NSObject {
    /* Warning: unhandled array encoding: '[31@]' */ id  _fragmentBuffers;
    /* Warning: unhandled array encoding: '[16@]' */ id  _fragmentSamplers;
    /* Warning: unhandled array encoding: '[31@]' */ id  _fragmentTextures;
    /* Warning: unhandled array encoding: '[31@]' */ id  _vertexBuffers;
    /* Warning: unhandled array encoding: '[16@]' */ id  _vertexSamplers;
    /* Warning: unhandled array encoding: '[31@]' */ id  _vertexTextures;
    long long  geometryModificationCount;
    long long  materialModificationCount;
}

@property (nonatomic) long long geometryModificationCount;
@property (nonatomic) long long materialModificationCount;

- (id)bufferAtIndices:(struct { BOOL x1; BOOL x2; })arg1;
- (void)dealloc;
- (long long)geometryModificationCount;
- (long long)materialModificationCount;
- (id)samplerAtIndices:(struct { BOOL x1; BOOL x2; })arg1;
- (void)setGeometryModificationCount:(long long)arg1;
- (void)setMaterialModificationCount:(long long)arg1;
- (void)setResource:(id)arg1 ofType:(unsigned long long)arg2 atIndices:(struct { BOOL x1; BOOL x2; })arg3;
- (id)textureAtIndices:(struct { BOOL x1; BOOL x2; })arg1;

@end
