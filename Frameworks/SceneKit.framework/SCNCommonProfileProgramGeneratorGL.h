/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNCommonProfileProgramGeneratorGL : SCNCommonProfileProgramGenerator {
    int  _profile;
}

- (struct __C3DFXProgram { }*)_newProgramWithHashCode:(struct __C3DRendererElementProgramHashCode { }*)arg1 engineContext:(struct __C3DEngineContext { }*)arg2 introspectionDataPtr:(void*)arg3;
- (id)init;
- (id)initWithProfile:(int)arg1;
- (int)profile;

@end
