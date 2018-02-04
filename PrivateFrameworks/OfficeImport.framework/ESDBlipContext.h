/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ESDBlipContext : NSObject <OCDDelayedMediaContext> {
    unsigned int  mByteCount;
    unsigned int  mStartOffset;
    struct SsrwOOStream { int (**x1)(); } * mStream;
    unsigned int  mStreamID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)dataRep;
- (id)description;
- (id)initWithOffset:(unsigned int)arg1 byteCount:(unsigned int)arg2 stream:(struct SsrwOOStream { int (**x1)(); }*)arg3 streamID:(unsigned int)arg4;
- (bool)loadDelayedNode:(id)arg1;
- (bool)saveDelayedMedia:(id)arg1 toFile:(id)arg2;
- (struct SsrwOOStream { int (**x1)(); }*)stream;

@end
