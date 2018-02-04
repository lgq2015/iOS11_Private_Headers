/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PAGenealogyTraceMessage : PAGenealogyTimestampedMessage <PASerializable> {
    unsigned int  _binaryOffset;
    NSUUID * _binaryUuid;
    void * _buffer;
    unsigned long long  _bufferLength;
    NSString * _message;
    unsigned long long  _traceId;
}

@property (readonly) unsigned int binaryOffset;
@property (readonly) NSUUID *binaryUuid;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;

- (void).cxx_destruct;
- (bool)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (unsigned int)binaryOffset;
- (id)binaryUuid;
- (void)dealloc;
- (id)initWithId:(unsigned long long)arg1 andOffset:(unsigned int)arg2 intoBinaryWithUUID:(id)arg3 withBuffer:(const void*)arg4 ofLength:(unsigned long long)arg5 atMachTime:(double)arg6 withActivityId:(unsigned long long)arg7;
- (id)initWithSerializedGenealogyTraceMessage:(const struct { unsigned long long x1; double x2; unsigned long long x3; unsigned long long x4; long long x5; unsigned int x6; unsigned long long x7; }*)arg1;
- (id)message;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (unsigned long long)sizeInBytesForSerializedVersion;

@end
