/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDSlideMaster : PDSlideBase {
    OADTextListStyle * mBodyTextStyle;
    OADColorMap * mColorMap;
    bool  mDateTimePlaceholderIsVisible;
    bool  mFooterPlaceholderIsVisible;
    bool  mHeaderPlaceholderIsVisible;
    OADTextListStyle * mOtherTextStyle;
    PDPresentation * mPresentation;
    NSMutableArray * mSlideLayouts;
    bool  mSlideNumberPlaceholderIsVisible;
    OADTheme * mTheme;
    OADTextListStyle * mTitleTextStyle;
}

@property (nonatomic) bool dateTimePlaceholderIsVisible;
@property (nonatomic) bool footerPlaceholderIsVisible;
@property (nonatomic) bool headerPlaceholderIsVisible;
@property (nonatomic, readonly) PDPresentation *presentation;
@property (nonatomic, retain) NSMutableArray *slideLayouts;
@property (nonatomic) bool slideNumberPlaceholderIsVisible;

- (id)addSlideLayout;
- (void)addSlideLayout:(id)arg1;
- (id)bodyTextStyle;
- (id)colorMap;
- (id)colorScheme;
- (bool)dateTimePlaceholderIsVisible;
- (void)dealloc;
- (id)defaultTextListStyle;
- (id)defaultTheme;
- (id)description;
- (void)doneWithContent;
- (id)drawingTheme;
- (id)fontScheme;
- (bool)footerPlaceholderIsVisible;
- (bool)headerPlaceholderIsVisible;
- (id)initWithPresentation:(id)arg1;
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(bool)arg3;
- (id)otherTextStyle;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(bool)arg3;
- (id)parentSlideBase;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(bool)arg3;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(bool)arg4;
- (id)parentTextStyleForTables;
- (id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(bool)arg3;
- (id)presentation;
- (void)removeUnnecessaryOverrides;
- (void)setBodyTextStyle:(id)arg1;
- (void)setDateTimePlaceholderIsVisible:(bool)arg1;
- (void)setFooterPlaceholderIsVisible:(bool)arg1;
- (void)setHeaderPlaceholderIsVisible:(bool)arg1;
- (void)setOtherTextStyle:(id)arg1;
- (void)setSlideLayouts:(id)arg1;
- (void)setSlideNumberPlaceholderIsVisible:(bool)arg1;
- (void)setTitleTextStyle:(id)arg1;
- (void)setUpPropertyHierarchyPreservingEffectiveValues;
- (id)slideLayoutAtIndex:(unsigned long long)arg1;
- (unsigned long long)slideLayoutCount;
- (id)slideLayoutOfType:(int)arg1;
- (id)slideLayouts;
- (bool)slideNumberPlaceholderIsVisible;
- (id)styleMatrix;
- (id)theme;
- (id)titleTextStyle;

@end
