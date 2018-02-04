/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
 */

@interface DSTextFile : NSObject <DSTextFileEnumeratorControl> {
    unsigned long long  _bufferSize;
    bool  _cancelEnumeration;
    unsigned long long  _currentLineIndex;
    NSFileHandle * _fileHandle;
    bool  _isEnumerating;
    NSData * _lineBreak;
    NSMutableArray * _linePositions;
    long long  _skipCount;
}

@property (nonatomic) unsigned long long bufferSize;
@property (nonatomic) bool cancelEnumeration;
@property (nonatomic) unsigned long long currentLineIndex;
@property (nonatomic, retain) NSFileHandle *fileHandle;
@property (nonatomic) bool isEnumerating;
@property (nonatomic, retain) NSData *lineBreak;
@property (nonatomic, retain) NSMutableArray *linePositions;
@property (nonatomic) long long skipCount;

+ (id)textFileWithPath:(id)arg1;

- (void).cxx_destruct;
- (bool)advanceToNextLine:(id*)arg1;
- (unsigned long long)bufferSize;
- (bool)cancelEnumeration;
- (unsigned long long)currentLineIndex;
- (unsigned long long)currentOffset;
- (void)end;
- (void)enumerateUsingBlock:(id /* block */)arg1;
- (id)extractLine:(unsigned long long)arg1;
- (id)fileHandle;
- (unsigned long long)getOffsetAtLineIndex:(unsigned long long)arg1;
- (id)init;
- (id)initWithFilePath:(id)arg1;
- (id)initWithFilePath:(id)arg1 withBufferSize:(unsigned long long)arg2;
- (bool)isEnumerating;
- (id)lineBreak;
- (id)linePositions;
- (id)readDataOfLength:(unsigned long long)arg1;
- (void)resetEnumerator;
- (bool)searchForNextLineFromCurrentPosition:(id*)arg1;
- (void)seekToBeginning;
- (void)seekToOffset:(unsigned long long)arg1;
- (void)setBufferSize:(unsigned long long)arg1;
- (void)setCancelEnumeration:(bool)arg1;
- (void)setCurrentLineIndex:(unsigned long long)arg1;
- (void)setFileHandle:(id)arg1;
- (void)setIsEnumerating:(bool)arg1;
- (void)setLineBreak:(id)arg1;
- (void)setLinePositions:(id)arg1;
- (void)setSkipCount:(long long)arg1;
- (long long)skipCount;
- (void)skipWithLines:(long long)arg1;

@end
