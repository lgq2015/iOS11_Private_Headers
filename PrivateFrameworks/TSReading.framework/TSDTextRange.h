/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDTextRange : UITextRange {
    bool  _eolAffinity;
    float  _preferredEndPosition;
    float  _preferredStartPosition;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

@property (nonatomic) bool isAtEndOfLine;
@property (nonatomic, readonly) float preferredEndPosition;
@property (nonatomic, readonly) float preferredStartPosition;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;

+ (id)textRangeWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
+ (id)textRangeWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 eolAffinity:(bool)arg2 preferredStartPosition:(float)arg3 preferredEndPosition:(float)arg4;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)end;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 eolAffinity:(bool)arg2 preferredStartPosition:(float)arg3 preferredEndPosition:(float)arg4;
- (bool)isAtEndOfLine;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (float)preferredEndPosition;
- (float)preferredStartPosition;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setIsAtEndOfLine:(bool)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)start;

@end
