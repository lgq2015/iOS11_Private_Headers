/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGTokenString : NSString {
    int  _confidence;
    union { 
        BOOL ascii[0]; 
        unsigned short utf16[0]; 
    }  _contents;
    unsigned int  _isASCII;
    unsigned int  _length;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

@property (nonatomic) int confidence;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;

+ (id)stringWithString:(id)arg1;
+ (id)stringWithString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)stringWithString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 confidence:(int)arg3;

- (const char *)UTF8String;
- (const char *)_fastCStringContents:(bool)arg1;
- (const unsigned short*)_fastCharacterContents;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (int)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)fastestEncoding;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)length;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setConfidence:(int)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)stringWithNewContents:(id)arg1;

@end
