/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFData : NSData <NSCopying, NSMutableCopying> {
    NSData * _internal;
    NSData * _parent;
    NSString * _path;
    bool  _subdata;
}

+ (void)setDefaultMappingThresholdInBytes:(unsigned long long)arg1;

- (id)_initWithData:(id)arg1 maybeMutable:(bool)arg2;
- (id)_initWithFile:(id)arg1;
- (id)_initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 from:(id)arg2 retainingParent:(bool)arg3;
- (const void*)bytes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)dealloc;
- (id)init;
- (id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(bool)arg3;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithContentsOfMappedFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithData:(id)arg1;
- (id)initWithImmutableData:(id)arg1;
- (unsigned long long)length;
- (bool)mf_immutable;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)writeToFile:(id)arg1 atomically:(bool)arg2;
- (bool)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)writeToURL:(id)arg1 atomically:(bool)arg2;
- (bool)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;

@end
