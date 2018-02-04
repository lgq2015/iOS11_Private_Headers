/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TISCTextRunRequest : NSObject {
    bool  _allowTruncation;
    struct CGColor { } * _color;
    double  _maxFontSize;
    double  _minFontSize;
    NSArray * _strings;
    NSString * _truncationSentinel;
    unsigned long long  _widthGroup;
}

+ (id)textRunRequestWithStrings:(id)arg1 color:(struct CGColor { }*)arg2 maxFontSize:(double)arg3 minFontSize:(double)arg4 allowTruncation:(bool)arg5 truncationSentinel:(id)arg6 widthGroup:(unsigned long long)arg7;

- (bool)allowTruncation;
- (struct CGColor { }*)color;
- (void)dealloc;
- (double)maxFontSize;
- (double)minFontSize;
- (id)strings;
- (id)truncationSentinel;
- (unsigned long long)widthGroup;

@end
