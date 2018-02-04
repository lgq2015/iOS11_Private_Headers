/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
 */

@interface UAFileChunkInputStream : NSInputStream {
    NSNumber * _chunkOffset;
    long long  _chunkSize;
    NSNumber * _currentOffset;
    NSFileHandle * _file;
    long long  _readSize;
    unsigned long long  _status;
}

@property (retain) NSNumber *chunkOffset;
@property long long chunkSize;
@property (retain) NSNumber *currentOffset;
@property (retain) NSFileHandle *file;
@property long long readSize;
@property unsigned long long status;

- (void).cxx_destruct;
- (id)chunkOffset;
- (long long)chunkSize;
- (void)close;
- (id)currentOffset;
- (id)file;
- (bool)getBuffer:(char **)arg1 length:(unsigned long long*)arg2;
- (bool)hasBytesAvailable;
- (id)initWithFileHandle:(id)arg1 offsetInFile:(id)arg2 size:(long long)arg3;
- (void)open;
- (id)propertyForKey:(id)arg1;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (long long)readSize;
- (void)setChunkOffset:(id)arg1;
- (void)setChunkSize:(long long)arg1;
- (void)setCurrentOffset:(id)arg1;
- (void)setFile:(id)arg1;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)setReadSize:(long long)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (unsigned long long)status;
- (id)streamError;
- (unsigned long long)streamStatus;

@end
