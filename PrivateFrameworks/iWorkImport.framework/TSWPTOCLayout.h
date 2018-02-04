/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTOCLayout : TSWPShapeLayout {
    TSWPTOCLayoutHint * _hint;
    unsigned long long  _initialCharIndex;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxSize;
    unsigned long long  _storageChangeCount;
}

@property (nonatomic, readonly) TSWPTOCLayoutHint *hint;
@property (nonatomic, readonly) unsigned long long initialCharIndex;
@property (getter=isLastLayoutInTOC, nonatomic, readonly) bool lastLayoutInTOC;
@property (nonatomic) struct CGSize { double x1; double x2; } maxSize;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })adjustedInsetsForTarget:(id)arg1;
- (bool)alwaysStartsNewTarget;
- (unsigned int)autosizeFlagsForTextLayout:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForStandardKnobs;
- (id)childSearchTargets;
- (unsigned long long)columnCount;
- (id)commandToClampModelToLayoutSize;
- (id)computeLayoutGeometry;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (id)hint;
- (id)initWithInfo:(id)arg1;
- (id)initWithInfo:(id)arg1 initialCharIndex:(unsigned long long)arg2 maxSize:(struct CGSize { double x1; double x2; })arg3;
- (unsigned long long)initialCharIndex;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (bool)isDraggable;
- (bool)isLastLayoutInTOC;
- (id)layoutMargins;
- (void)layoutSearchForString:(id)arg1 options:(unsigned long long)arg2 hitBlock:(id /* block */)arg3;
- (double)maxAutoGrowHeightForTextLayout:(id)arg1;
- (struct CGSize { double x1; double x2; })maxSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })nonAutosizedFrameForTextLayout:(id)arg1;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 target:(id)arg3 outWidth:(double*)arg4 outGap:(double*)arg5;
- (Class)repClassForTextLayout:(id)arg1;
- (void)setMaxSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)shrinkTextToFit;
- (bool)textLayoutShouldWrapAroundExternalDrawables:(id)arg1;
- (void)transferLayoutGeometryToInfo:(id)arg1;
- (int)verticalAlignmentForTextLayout:(id)arg1;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;

@end
