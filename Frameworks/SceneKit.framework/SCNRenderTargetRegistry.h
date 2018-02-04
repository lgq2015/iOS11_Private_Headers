/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNRenderTargetRegistry : NSObject {
    long long  _frameStamp;
    NSMutableDictionary * _nameToRenderTarget;
    NSMutableArray * _purgeArray;
    <SCNRenderContext> * _renderContext;
    NSMutableDictionary * _renderTargets;
}

@property (nonatomic, readonly) long long numberOfRenderTargets;

- (void)_purgeWithReason:(int)arg1;
- (void)bumpTimeStamp;
- (void)cleanup;
- (void)dealloc;
- (void)finalizeFrame;
- (id)initWithRenderContext:(id)arg1;
- (long long)numberOfRenderTargets;
- (void)purge;
- (void)purgeRenderTargetsMatchingFrameBuffer;
- (void)releaseRenderTarget:(id)arg1;
- (void)releaseRenderTargetNamed:(id)arg1;
- (void)releaseTextureWithName:(id)arg1 retainCount:(long long)arg2;
- (id)renderTargetWithDescription:(void *)arg1 size:(void *)arg2 arrayLength:(void *)arg3 name:(void *)arg4 useCount:(void *)arg5; // needs 5 arg types, found 4: struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned char x9[4]; }, long long, id, long long
- (id)renderTargetWithName:(id)arg1;
- (void)retainTextureWithName:(id)arg1 retainCount:(long long)arg2;
- (void)viewportDidResize;

@end
