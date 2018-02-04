/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGSeekableData : NSObject <SGSeekable> {
    const void * _bytes;
    NSData * _data;
    unsigned long long  _length;
    unsigned long long  _offsetInFile;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long offsetInFile;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (const void*)dataOfLength:(unsigned long long)arg1;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithMemoryMappedPath:(id)arg1;
- (id)initWithMemoryMappedPath:(id)arg1 error:(id*)arg2;
- (unsigned long long)offsetInFile;
- (void)seekToFileOffset:(unsigned long long)arg1;

@end
