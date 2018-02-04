/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PAWSUpdate : NSObject <PASerializable> {
    double  _deferStartTime;
    double  _frameStartTime;
    double  _workEndTime;
    double  _workStartTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly) double deferDuration;
@property (readonly) double deferEndTime;
@property (readonly) double deferStartTime;
@property (readonly, copy) NSString *description;
@property (readonly) double frameDuration;
@property (readonly) double frameEndTime;
@property (readonly) double frameStartTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) double waitDuration;
@property (readonly) double waitEndTime;
@property (readonly) double waitStartTime;
@property (readonly) bool wasIdle;
@property (readonly) double workDuration;
@property (readonly) double workEndTime;
@property (readonly) double workStartTime;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;
+ (void)printASCIIBarLegendToStream:(id)arg1;

- (bool)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg2;
- (void)addSelfToSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg1;
- (double)deferDuration;
- (double)deferEndTime;
- (double)deferStartTime;
- (double)frameDuration;
- (double)frameEndTime;
- (double)frameStartTime;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (void)printFPSASCIIBarToStream:(id)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (double)waitDuration;
- (double)waitEndTime;
- (double)waitStartTime;
- (bool)wasIdle;
- (double)workDuration;
- (double)workEndTime;
- (double)workStartTime;

@end
