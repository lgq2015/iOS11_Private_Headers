/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNShadableHelper : NSObject <NSSecureCoding> {
    NSMutableArray * _argumentsNames;
    id  _owner;
    SCNProgram * _program;
    NSDictionary * _shaderModifiers;
    NSDictionary * _symbolToBinder;
    NSDictionary * _symbolToUnbinder;
}

@property (nonatomic, readonly) id owner;
@property (nonatomic, retain) SCNProgram *program;
@property (nonatomic, copy) NSDictionary *shaderModifiers;
@property (nonatomic, readonly) NSArray *shaderModifiersArgumentsNames;

+ (bool)supportsSecureCoding;

- (const void*)__CFObject;
- (bool)_bindValueForSymbol:(id)arg1 atLocation:(unsigned int)arg2 programID:(unsigned int)arg3 node:(id)arg4 renderer:(id)arg5;
- (void)_commonInit;
- (void)_customDecodingOfSCNShadableHelper:(id)arg1;
- (void)_customEncodingOfSCNShadableHelper:(id)arg1;
- (void)_didDecodeSCNShadableHelper:(id)arg1;
- (void)_programDidChange:(id)arg1;
- (struct __C3DFXGLSLProgram { }*)_programFromPassAtIndex:(long long)arg1;
- (void)_setC3DProgram;
- (void)_setC3DProgramDelegate;
- (void)_shaderModifiersDidChange;
- (void)_startObservingProgram;
- (void)_stopObservingProgram;
- (struct __C3DFXTechnique { }*)_technique;
- (void)_unbindValueForSymbol:(id)arg1 atLocation:(unsigned int)arg2 programID:(unsigned int)arg3 node:(id)arg4 renderer:(id)arg5;
- (void)_updateAllC3DProgramInputs;
- (void)_updateC3DProgramInput:(struct __C3DFXGLSLProgram { }*)arg1 forSymbol:(id)arg2;
- (void)_updateC3DProgramInputForSymbol:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)handleBindingOfSymbol:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)handleUnbindingOfSymbol:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithOwner:(id)arg1;
- (bool)isOpaque;
- (id)owner;
- (void)ownerWillDie;
- (id)program;
- (void)setProgram:(id)arg1;
- (void)setShaderModifiers:(id)arg1;
- (id)shaderModifiers;
- (id)shaderModifiersArgumentsNames;

@end
