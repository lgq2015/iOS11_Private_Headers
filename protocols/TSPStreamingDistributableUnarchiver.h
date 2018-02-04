/* made by EzioChiu.
 */

@protocol TSPStreamingDistributableUnarchiver <NSObject>

@required

- (bool)handleArchivedVersions:(struct { unsigned long long x1; unsigned long long x2; })arg1 error:(id*)arg2;
- (bool)handleClassInfoWithClassType:(int)arg1 className:(NSString *)arg2 isProtobufClass:(bool)arg3 error:(id*)arg4;
- (bool)handleFileDescriptorProtoWithInputStream:(id <SFUBufferedInputStream>)arg1 length:(unsigned int)arg2 error:(id*)arg3;
- (bool)handleObjectWithIdentifier:(long long)arg1 fileStateIdentifier:(NSString *)arg2 version:(unsigned int)arg3 classType:(int)arg4 stream:(id <SFUBufferedInputStream>)arg5 length:(long long)arg6 relationshipTargets:(long long*)arg7 relationshipCount:(unsigned int)arg8 error:(id*)arg9;

@end