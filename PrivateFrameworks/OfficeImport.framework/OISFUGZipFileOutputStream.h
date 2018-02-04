/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OISFUGZipFileOutputStream : NSObject <SFUOutputStream> {
    struct gzFile_s { unsigned int x1; char *x2; long long x3; } * _file;
    long long  _offset;
    NSString * _path;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)gzipExtension;

- (bool)canCreateInputStream;
- (bool)canSeek;
- (void)close;
- (id)closeLocalStream;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (id)inputStream;
- (long long)offset;
- (id)path;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long long)arg2;

@end
