/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUNumberSetting : NUSetting {
    NSNumber * _maximumValue;
    NSNumber * _minimumValue;
}

@property (readonly) NSNumber *defaultValue;
@property (readonly) NSNumber *maximumValue;
@property (readonly) NSNumber *minimumValue;

+ (id)deserializeFromDictionary:(id)arg1 error:(out id*)arg2;

- (void).cxx_destruct;
- (id)defaultValue;
- (id)description;
- (id)init;
- (id)initWithAttributes:(id)arg1;
- (id)initWithMinimum:(id)arg1 maximum:(id)arg2 attributes:(id)arg3;
- (bool)isValid:(out id*)arg1;
- (id)maximumValue;
- (id)minimumValue;
- (bool)serializeIntoDictionary:(id)arg1 error:(out id*)arg2;
- (bool)validate:(id)arg1 error:(out id*)arg2;
- (bool)validateNumber:(id)arg1 error:(out id*)arg2;

@end
