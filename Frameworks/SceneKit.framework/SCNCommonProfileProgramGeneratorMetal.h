/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNCommonProfileProgramGeneratorMetal : SCNCommonProfileProgramGenerator {
    NSArray * _injectionPointRanges;
    NSString * _originalSourceCode;
    bool  _useFunctionConstants;
}

- (struct __C3DFXProgram { }*)_newProgramWithHashCode:(struct __C3DRendererElementProgramHashCode { }*)arg1 engineContext:(struct __C3DEngineContext { }*)arg2 introspectionDataPtr:(void*)arg3;
- (struct __C3DFXProgram { }*)_newProgramWithHashCodeWithFunctionConstants:(struct __C3DRendererElementProgramHashCode { }*)arg1 engineContext:(struct __C3DEngineContext { }*)arg2 introspectionDataPtr:(void*)arg3;
- (void)dealloc;
- (id)init;
- (int)profile;

@end
