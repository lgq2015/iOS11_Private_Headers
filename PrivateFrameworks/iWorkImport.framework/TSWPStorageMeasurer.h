/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSWPStorageMeasurer : NSObject <TSWPColumnMetrics, TSWPLayoutOwner, TSWPLayoutTarget> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchor;
    NSMutableArray * _columns;
    unsigned int  _flags;
    NSObject<TSWPLayoutParent> * _layoutParent;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _minSize;
    TSWPStorage * _storage;
    <TSWPStyleProvider> * _styleProvider;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } adjustedInsets;
@property (nonatomic, readonly) bool allowsDescendersToClip;
@property (nonatomic, readonly) bool allowsLastLineTruncation;
@property (nonatomic, readonly) bool alwaysAllowWordSplit;
@property (nonatomic, readonly) bool alwaysStartsNewTarget;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } anchorPoint;
@property (nonatomic, retain) NSMutableArray *anchoredDrawablesForRelayout;
@property (nonatomic, readonly) unsigned int autosizeFlags;
@property (nonatomic, readonly) TSDCanvas *canvas;
@property (nonatomic, readonly) unsigned long long columnCount;
@property (nonatomic, readonly, retain) NSMutableArray *columns;
@property (nonatomic, readonly) bool columnsAreLeftToRight;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } currentSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <TSWPFootnoteHeightMeasurer> *footnoteHeightMeasurer;
@property (nonatomic, readonly) <TSWPFootnoteMarkProvider> *footnoteMarkProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct __CFLocale { }*hyphenationLocale;
@property (nonatomic, readonly) bool ignoresEquationAlignment;
@property (nonatomic, readonly) bool layoutIsValid;
@property (nonatomic, readonly) TSWPPadding *layoutMargins;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } maskRect;
@property (nonatomic, readonly) double maxAnchorY;
@property (nonatomic, readonly) unsigned int maxLineCount;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } maxSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } minSize;
@property (nonatomic, readonly) unsigned int naturalAlignment;
@property (nonatomic, readonly) int naturalDirection;
@property (nonatomic, readonly) TSPObject<TSDHint> *nextTargetFirstChildHint;
@property (nonatomic, readonly, retain) <TSWPOffscreenColumn> *nextTargetFirstColumn;
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{TSWPTopicNumberHints={map<const TSWPListStyle *' */ struct *nextTargetTopicNumbers; /* unknown property attribute:  true> >=Q}}}QQ@} */
@property (nonatomic, readonly) unsigned long long pageCount;
@property (nonatomic, readonly) unsigned long long pageNumber;
@property (nonatomic, readonly) TSDLayout *parentLayoutForInlineAttachments;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } position;
@property (nonatomic, readonly, retain) <TSWPOffscreenColumn> *previousTargetLastColumn;
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{TSWPTopicNumberHints={map<const TSWPListStyle *' */ struct *previousTargetTopicNumbers; /* unknown property attribute:  true> >=Q}}}QQ@} */
@property (nonatomic, readonly) bool pushAscendersIntoColumn;
@property (nonatomic, readonly) bool shouldHyphenate;
@property (nonatomic, readonly) bool shrinkTextToFit;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool textIsVertical;
@property (nonatomic, readonly) double textScaleFactor;
@property (nonatomic, readonly) unsigned int verticalAlignment;
@property (nonatomic, readonly) bool wantsLineFragments;

- (void)addAttachmentLayout:(id)arg1;
- (struct CGSize { double x1; double x2; })adjustedInsets;
- (bool)alwaysStartsNewTarget;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (unsigned int)autosizeFlags;
- (bool)caresAboutStorageChanges;
- (unsigned long long)columnCount;
- (id)columnMetricsForCharIndex:(unsigned long long)arg1 outRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)columns;
- (bool)columnsAreLeftToRight;
- (id)currentAnchoredDrawableLayouts;
- (id)currentInlineDrawableLayouts;
- (struct CGSize { double x1; double x2; })currentSize;
- (void)dealloc;
- (id)footnoteHeightMeasurer;
- (id)footnoteMarkProvider;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (id)initWithStorage:(id)arg1;
- (bool)isLastTarget;
- (bool)isLayoutOffscreen;
- (unsigned long long)iterativeAttachmentPositioningMaxPassCount;
- (id)layoutForInlineDrawable:(id)arg1;
- (bool)layoutIsValid;
- (void)layoutManager:(id)arg1 didClearDirtyRangeWithDelta:(long long)arg2 afterCharIndex:(unsigned long long)arg3;
- (void)layoutManagerNeedsLayout:(id)arg1;
- (id)layoutMargins;
- (id)lineHintsForTarget:(id)arg1;
- (double)maxAnchorY;
- (unsigned int)maxLineCount;
- (struct CGSize { double x1; double x2; })maxSize;
- (struct CGSize { double x1; double x2; })measuredSizeWithFlags:(unsigned int)arg1;
- (struct CGSize { double x1; double x2; })measuredSizeWithFlags:(unsigned int)arg1 maxSize:(struct CGSize { double x1; double x2; })arg2 layoutParent:(id)arg3 styleProvider:(id)arg4;
- (struct CGSize { double x1; double x2; })minSize;
- (unsigned int)naturalAlignment;
- (int)naturalDirection;
- (id)nextTargetFirstChildHint;
- (id)nextTargetFirstColumn;
- (const /* Warning: unhandled struct encoding: '{TSWPTopicNumberHints={map<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, std::__1::allocator<std::__1::pair<const TSWPListStyle *const, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > >={__tree<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true>, std::__1::allocator<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true> >=Q}}}QQ@}' */ struct TSWPTopicNumberHints { struct map<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, std::__1::allocator<std::__1::pair<const TSWPListStyle *const, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true>, std::__1::allocator<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; }*)nextTargetTopicNumbers;
- (id)pLayoutWithMinSize:(struct CGSize { double x1; double x2; })arg1 maxSize:(struct CGSize { double x1; double x2; })arg2 anchor:(struct CGPoint { double x1; double x2; })arg3 flags:(unsigned int)arg4;
- (unsigned long long)pageCount;
- (unsigned long long)pageNumber;
- (struct CGPoint { double x1; double x2; })position;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 outWidth:(double*)arg3 outGap:(double*)arg4;
- (id)previousTargetLastColumn;
- (const /* Warning: unhandled struct encoding: '{TSWPTopicNumberHints={map<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, std::__1::allocator<std::__1::pair<const TSWPListStyle *const, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > >={__tree<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true>, std::__1::allocator<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true> >=Q}}}QQ@}' */ struct TSWPTopicNumberHints { struct map<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, std::__1::allocator<std::__1::pair<const TSWPListStyle *const, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true>, std::__1::allocator<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; }*)previousTargetTopicNumbers;
- (void)setNeedsDisplayInTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldPositionAttachmentsIteratively;
- (bool)shrinkTextToFit;
- (id)styleProvider;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetRectForCanvasRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)textIsVertical;
- (id)textWrapper;
- (id)validatedLayoutForAnchoredDrawable:(id)arg1;
- (unsigned int)verticalAlignment;
- (bool)wantsLineFragments;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;

@end
