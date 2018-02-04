/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSWPDropCapSpacing : NSObject <NSCopying> {
    bool  _allowSpanParagraphs;
    unsigned long long  _elevatedLineCount;
    unsigned long long  _flags;
    unsigned long long  _followingLineCount;
    unsigned long long  _lineCount;
    double  _maxWidthFactor;
    double  _padding;
}

@property (nonatomic) bool allowSpanParagraphs;
@property (nonatomic) unsigned long long elevatedLineCount;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) unsigned long long followingLineCount;
@property (nonatomic) unsigned long long lineCount;
@property (nonatomic) double maxWidthFactor;
@property (nonatomic) double padding;

+ (id)dropCapSpacingWithLineCount:(unsigned long long)arg1 elevatedLineCount:(unsigned long long)arg2;

- (bool)allowSpanParagraphs;
- (unsigned long long)computedFlagsWithPropertyMap:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)elevatedLineCount;
- (unsigned long long)flags;
- (unsigned long long)followingLineCount;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)lineCount;
- (double)maxWidthFactor;
- (double)padding;
- (void)setAllowSpanParagraphs:(bool)arg1;
- (void)setElevatedLineCount:(unsigned long long)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setFollowingLineCount:(unsigned long long)arg1;
- (void)setLineCount:(unsigned long long)arg1;
- (void)setMaxWidthFactor:(double)arg1;
- (void)setPadding:(double)arg1;

@end
