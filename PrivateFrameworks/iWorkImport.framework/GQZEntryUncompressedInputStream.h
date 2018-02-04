/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQZEntryUncompressedInputStream : NSObject <GQZEntryInputStream> {
    long long  mEnd;
    <GQZArchiveInputStream> * mInput;
    long long  mOffset;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithOffset:(long long)arg1 end:(long long)arg2 input:(id)arg3;
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;
- (void)readToOwnBuffer:(const char **)arg1 size:(unsigned long long*)arg2;

@end
