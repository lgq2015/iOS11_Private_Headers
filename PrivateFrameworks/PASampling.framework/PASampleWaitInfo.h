/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PASampleWaitInfo : NSObject {
    unsigned long long  _context;
    unsigned long long  _owner;
    unsigned long long  _wait_type;
}

@property (readonly) unsigned long long context;
@property (readonly) unsigned long long owner;
@property (readonly) unsigned long long wait_type;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;
+ (id)waitInfoWithStackshotWaitInfo:(const struct stackshot_thread_waitinfo { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned char x4; }*)arg1;

- (id)_initWithSerializedWaitInfo:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1;
- (bool)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (unsigned long long)context;
- (id)description;
- (id)descriptionForPid:(int)arg1 andTid:(unsigned long long)arg2 withOptions:(unsigned long long)arg3 andNameCallback:(id /* block */)arg4;
- (unsigned long long)hash;
- (id)initWithStackshotWaitInfo:(const struct stackshot_thread_waitinfo { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned char x4; }*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)matchesStackshotWaitInfo:(const struct stackshot_thread_waitinfo { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned char x4; }*)arg1;
- (unsigned long long)owner;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg2 andDataBufferDictionary:(struct NSMutableDictionary { Class x1; }*)arg3;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (unsigned long long)wait_type;

@end
