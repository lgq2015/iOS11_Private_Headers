/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUBoolSetting : NUSetting

@property (readonly) NSNumber *defaultValue;

+ (id)deserializeFromDictionary:(id)arg1 error:(out id*)arg2;

- (id)defaultValue;
- (bool)isValid:(out id*)arg1;
- (id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id*)arg3;
- (bool)serializeIntoDictionary:(id)arg1 error:(out id*)arg2;
- (bool)validate:(id)arg1 error:(out id*)arg2;

@end
