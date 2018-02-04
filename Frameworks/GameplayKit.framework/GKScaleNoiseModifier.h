/* made by EzioChiu
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKScaleNoiseModifier : GKNoiseModifier {
    void _factor;
}

- (id)cloneModule;
- (id)init;
- (id)initWithFactor;
- (id)initWithInputModuleCount:(unsigned long long)arg1;
- (int)requiredInputModuleCount;
- (double)valueAt;

@end
