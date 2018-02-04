/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPPageLayout : TSWPPageLayout <TPAttachmentLayoutParent, TSDWrapInvalidationParent, TSWPColumnMetrics, TSWPLayoutParent> {
    NSMutableSet * _anchoredDrawableLayouts;
    bool  _childLayoutsValid;
    bool  _childTextLayoutsNeedInvalidationForExteriorWrap;
    int  _contentFlags;
    TPFootnoteContainerLayout * _footnoteContainerLayout;
    <TSWPHeaderFooterProvider> * _headerFooterProvider;
    int  _inInvalidationClusterCount;
    TPMarginAdjustLayout * _marginAdjustLayout;
    <TPMasterDrawableProvider> * _masterDrawableProvider;
    TSURetainedPointerKeyDictionary * _oldChildLayouts;
    unsigned long long  _pageCount;
    unsigned long long  _pageNumber;
    bool  _validating;
}

@property (nonatomic, readonly) bool allowsBody;
@property (nonatomic, readonly) bool allowsFootnotes;
@property (nonatomic, readonly) bool alwaysStartsNewTarget;
@property (nonatomic, readonly) NSSet *anchoredDrawableLayouts;
@property (nonatomic, readonly) TPBodyLayout *bodyLayout;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bodyRect;
@property (nonatomic, readonly) <NSFastEnumeration> *childTextLayoutsForExteriorWrap;
@property (nonatomic, readonly) unsigned long long columnCount;
@property (nonatomic, readonly) bool columnsAreLeftToRight;
@property (nonatomic, readonly) NSArray *floatingDrawableLayouts;
@property (nonatomic, readonly) TPFootnoteContainerLayout *footnoteContainerLayout;
@property (nonatomic, readonly) TSWPPadding *layoutMargins;
@property (nonatomic, readonly) TPMarginAdjustLayout *marginAdjustLayout;
@property (nonatomic, readonly) <TPMasterDrawableProvider> *masterDrawableProvider;
@property (nonatomic, readonly) unsigned long long pageCount;
@property (nonatomic, readonly) unsigned long long pageIndex;
@property (nonatomic, readonly) unsigned long long pageNumber;
@property (nonatomic, readonly) bool shrinkTextToFit;
@property (nonatomic, readonly) double textScaleFactor;
@property (getter=isValidating, nonatomic) bool validating;

- (void).cxx_destruct;
- (void)addAttachmentLayout:(id)arg1;
- (id)additionalDependenciesForChildLayout:(id)arg1;
- (struct CGSize { double x1; double x2; })adjustedInsetsForTarget:(id)arg1;
- (bool)allowIntersectionOfChildLayout:(id)arg1;
- (bool)allowsBody;
- (bool)allowsFootnotes;
- (bool)allowsHeaderFooter;
- (bool)alwaysStartsNewTarget;
- (id)anchoredDrawableLayouts;
- (unsigned int)autosizeFlagsForTextLayout:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize { double x1; double x2; })arg2;
- (void)beginResizeWrapInvalidationCluster;
- (id)bodyLayout;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bodyRect;
- (id)childTextLayoutsForExteriorWrap;
- (unsigned long long)columnCount;
- (bool)columnsAreLeftToRight;
- (id)computeLayoutGeometry;
- (void)dealloc;
- (id)dependentLayouts;
- (id)dependentsOfTextLayout:(id)arg1;
- (void)endResizeWrapInvalidationCluster;
- (void)evacuateOldChildLayoutCache;
- (id)existingAttachmentLayoutForInfo:(id)arg1;
- (id)floatingDrawableLayouts;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })footnoteContainerFrameWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)footnoteContainerLayout;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (bool)hasFooters;
- (bool)hasHeaders;
- (id)headerFooterProvider;
- (bool)headerFooterProviderValid;
- (double)heightAvailableForFootnotes;
- (void)inflateFootnotesInFootnoteContainer:(id)arg1;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)invalidateBodyAndMarginLayouts;
- (void)invalidateFootnoteContainers;
- (void)invalidateFootnoteSeparatorLine;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (void)invalidateHeaderFooterLayouts;
- (void)invalidateHeaderFooterLayoutsCache;
- (void)invalidateLayoutsForPageCountChange;
- (void)invalidatePosition;
- (void)invalidateSize;
- (bool)isReadyForBodyLayout;
- (bool)isRootLayoutForInspectorGeometry;
- (bool)isValidating;
- (id)layoutForChildInfo:(id)arg1;
- (id)layoutMargins;
- (id)layoutsCausingWrapOnTextLayoutTarget:(id)arg1 ignoreIntersection:(bool)arg2;
- (id)layoutsForChildInfo:(id)arg1;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (id)marginAdjustLayout;
- (id)masterDrawableProvider;
- (double)maxAutoGrowHeightForTextLayout:(id)arg1;
- (double)maxAutoGrowWidthForTextLayout:(id)arg1;
- (struct CGSize { double x1; double x2; })maximumFrameSizeForChild:(id)arg1;
- (int)naturalAlignmentForTextLayout:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })nonAutosizedFrameForTextLayout:(id)arg1;
- (void)p_addLayoutIfAttached:(id)arg1;
- (void)p_addLayoutsForInfos:(id)arg1 toArray:(id)arg2;
- (id)p_childLayoutInParentLayout:(id)arg1 forChildInfo:(id)arg2;
- (id)p_existingChildLayoutForInfo:(id)arg1;
- (void)p_insertBodyLayout;
- (id)p_insertChildLayoutForInfo:(id)arg1;
- (void)p_insertFootnoteContainerLayout;
- (id)p_insertValidatedChildLayoutForInfo:(id)arg1;
- (void)p_insertValidatedFloatingLayouts;
- (void)p_insertValidatedMarginAdjustLayout;
- (void)p_insertValidatedMasterLayouts;
- (bool)p_isHeaderFooterLayout:(id)arg1;
- (id)p_orderedChildInfos;
- (void)p_populateOldChildLayoutsWithLayouts:(id)arg1;
- (void)p_removeInlineLayoutsFromPageLayout;
- (void)p_removeNoLongerInlineLayoutsFromBodyLayout;
- (struct pair<double, double> { double x1; double x2; })p_sideMargins;
- (void)p_sortChildLayouts;
- (void)p_updateFromLayoutInfoProvider;
- (unsigned long long)pageCount;
- (unsigned long long)pageCountForAttachment:(id)arg1;
- (unsigned long long)pageIndex;
- (id)pageLayout;
- (unsigned long long)pageNumber;
- (unsigned long long)pageNumberForAttachment:(id)arg1;
- (void)parentDidChange;
- (void)parentWillChangeTo:(id)arg1;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 target:(id)arg3 outWidth:(double*)arg4 outGap:(double*)arg5;
- (id)primaryLayoutForInfo:(id)arg1;
- (void)processWidowAndInflation;
- (bool)providesGuidesForChildLayouts;
- (void)rebuildChildLayoutsOnNextValidationForcingTextLayout:(bool)arg1;
- (Class)repClassForTextLayout:(id)arg1;
- (void)replaceChild:(id)arg1 with:(id)arg2;
- (void)setChildren:(id)arg1;
- (void)setNeedsInflation;
- (void)setValidating:(bool)arg1;
- (bool)shouldHeaderFooterBeVisible:(int)arg1;
- (bool)shouldHeaderFooterBeVisibleForPageIndex:(unsigned long long)arg1;
- (bool)shouldProvideGuidesDuringExclusiveAlignmentOperation;
- (bool)shrinkTextToFit;
- (bool)textIsVertical;
- (void)validate;
- (int)verticalAlignmentForTextLayout:(id)arg1;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (void)wrappableChildInvalidated:(id)arg1;

@end
