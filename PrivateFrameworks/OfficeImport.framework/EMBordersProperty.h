/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EMBordersProperty : CMProperty <NSCopying> {
    OITSUColor * mBorderBottomColor;
    OITSUColor * mBorderColor;
    OITSUColor * mBorderLeftColor;
    OITSUColor * mBorderRightColor;
    int  mBorderStyle;
    OITSUColor * mBorderTopColor;
    int  mBorderWidth;
}

- (void).cxx_destruct;
- (id)borderColor;
- (int*)borderStyles;
- (int*)borderWidths;
- (id)colorString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cssString;
- (id)cssStringForName:(id)arg1;
- (bool)hasSameColorsAs:(id)arg1;
- (bool)hasSameStylesAs:(id)arg1;
- (bool)hasSameWidthsAs:(id)arg1;
- (id)initWithEDBorders:(id)arg1;
- (id)initWithOADStroke:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isNoneAtLocation:(int)arg1;
- (void)setBorderStyleAndWidth:(int)arg1 location:(unsigned int)arg2;
- (void)setNoneAtLocation:(int)arg1;
- (id)stringFromColor:(id)arg1;
- (id)stringFromStyleEnum:(int)arg1;
- (id)stringFromWidthEnum:(int)arg1;
- (id)styleHashNumber;
- (id)styleString;
- (id)widthHashNumber;
- (id)widthString;

@end
