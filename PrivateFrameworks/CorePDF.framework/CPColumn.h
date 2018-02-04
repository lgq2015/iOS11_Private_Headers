/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPColumn : CPRegion {
    bool  complete;
    bool  hasCentredParagraph;
    bool  hasColumnBreak;
    double  maxLeftPad;
    double  maxRight;
    double  maxRightPad;
    double  minLeft;
}

@property bool complete;

- (void)accept:(id)arg1;
- (double)bottomBaseline;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })columnBounds;
- (bool)complete;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (bool)hasCentredParagraph;
- (int)inOrder;
- (id)init;
- (bool)isBoxRegion;
- (bool)isGraphicalRegion;
- (bool)isImageRegion;
- (bool)isRowRegion;
- (bool)isShapeRegion;
- (double)leftPad;
- (double)maxLeftPad;
- (double)maxRightPad;
- (int)outOrder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })paddedBounds;
- (double)rightPad;
- (double)selectionBottom;
- (void)setComplete:(bool)arg1;
- (void)setHasCentredParagraph:(bool)arg1;
- (void)setHasColumnBreak:(bool)arg1;
- (void)setIsImageRegion:(bool)arg1;
- (void)setMaxLeftPad:(double)arg1;
- (void)setMaxRightPad:(double)arg1;

@end
