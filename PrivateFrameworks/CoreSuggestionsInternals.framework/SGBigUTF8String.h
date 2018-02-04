/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGBigUTF8String : NSString <NSCopying, NSMutableCopying, NSSecureCoding> {
    bool  _ascii;
    NSData * _backingData;
    struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 24; } * _chunks;
    unsigned long long  _hash;
    unsigned int  _length;
    unsigned int  _nchunks;
    const char * _utf8;
}

- (void).cxx_destruct;
- (const char *)UTF8String;
- (const char *)_fastCStringContents:(bool)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataUsingEncoding:(unsigned long long)arg1;
- (void)dealloc;
- (unsigned long long)fastestEncoding;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)hash;
- (id)initWithUTF8Data:(id)arg1;
- (id)initWithUTF8DataNullTerminated:(id)arg1;
- (id)initWithUTF8String:(const char *)arg1;
- (unsigned long long)length;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)replacementObjectForCoder:(id)arg1;

@end
