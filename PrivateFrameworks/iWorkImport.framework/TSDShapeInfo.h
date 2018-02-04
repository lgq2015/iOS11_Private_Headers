/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDShapeInfo : TSDStyledInfo <TSDMixing, TSDReducableInfo, TSKSearchable, TSSThemedObject> {
    TSDLineEnd * mHeadLineEnd;
    TSDPathSource * mPathSource;
    TSDShapeStyle * mStyle;
    TSDLineEnd * mTailLineEnd;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) TSDFill *fill;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TSDLineEnd *headLineEnd;
@property (nonatomic, retain) TSDPathSource *pathSource;
@property (nonatomic, readonly) TSDShapeStyle *shapeStyle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsShrinkTextToFit;
@property (nonatomic, readonly) bool supportsTextInset;
@property (nonatomic, retain) TSDLineEnd *tailLineEnd;

- (id)animationFilters;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (int)elementKind;
- (id)fill;
- (id)headLineEnd;
- (id)imageDatasForReducingFileSizeWithAssociatedHints;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4;
- (Class)layoutClass;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)objectForProperty:(int)arg1;
- (id)pathSource;
- (Class)repClass;
- (void)setFill:(id)arg1;
- (void)setGeometry:(id)arg1;
- (void)setHeadLineEnd:(id)arg1;
- (void)setPathSource:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)setTailLineEnd:(id)arg1;
- (void)setValuesForProperties:(id)arg1;
- (id)shapeStyle;
- (id)style;
- (Class)styleClass;
- (bool)supportsShrinkTextToFit;
- (bool)supportsTextInset;
- (id)tailLineEnd;
- (struct CGSize { double x1; double x2; })targetSizeForImageData:(id)arg1 associatedHint:(id)arg2;

@end
