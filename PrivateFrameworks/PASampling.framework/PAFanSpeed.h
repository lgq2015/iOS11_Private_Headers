/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PAFanSpeed : NSObject <PASerializable> {
    int  _fanSpeed;
    double  _machTimestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) int fanSpeed;
@property (readonly) bool fanSpeedIsValid;
@property (readonly) unsigned long long hash;
@property (readonly) double machTimesamp;
@property (readonly) Class superclass;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;
+ (int)numFans;

- (bool)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (int)fanSpeed;
- (bool)fanSpeedIsValid;
- (id)init;
- (id)initWithMachTime:(double)arg1;
- (id)initWithSerializedFanSpeed:(const struct { unsigned long long x1; double x2; int x3; }*)arg1;
- (double)machTimesamp;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (unsigned long long)sizeInBytesForSerializedVersion;

@end
