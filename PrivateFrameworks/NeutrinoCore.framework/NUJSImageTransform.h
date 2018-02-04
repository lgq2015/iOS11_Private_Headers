/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUJSImageTransform : NUJSProxy <NUJSImageTransformExport>

@property (readonly) NUImageTransformAffine *transform;

- (id)description;
- (id)initWithImageTransform:(id)arg1 context:(id)arg2;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;
- (id)transform;
- (id)transformByRotate:(double)arg1;
- (id)transformByScaleX:(double)arg1 scaleY:(double)arg2;
- (id)transformByTranslateX:(double)arg1 translateY:(double)arg2;

@end
