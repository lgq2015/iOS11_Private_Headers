/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DShaderEffect : NSObject <TSCH3DShaderEffectStateInfo>

+ (id)effect;
+ (Class)stateClass;
+ (id)stateSharingID;

- (void)addVariables:(id)arg1;
- (bool)alwaysUploadData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (Class)stateClass;
- (id)stateSharingID;
- (void)updateState:(id)arg1 effectsStates:(id)arg2;
- (void)uploadData:(id)arg1 effectsStates:(id)arg2;
- (void)uploadData:(id)arg1 effectsStates:(id)arg2 updateCurrentStates:(id)arg3;

@end
