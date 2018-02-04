/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPParagraph : CPRegion {
    unsigned long long  alignment;
    bool  below;
    id  flowProperties;
    bool  hasDropCap;
    CPListItem * listItem;
    bool  noIndentation;
    double  preformatWidth;
}

@property (nonatomic, retain) CPListItem *listItem;

- (void)accept:(id)arg1;
- (unsigned long long)alignment;
- (bool)below;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)explode;
- (id)flowProperties;
- (bool)hasDropCap;
- (unsigned long long)index;
- (id)init;
- (bool)isBoxRegion;
- (bool)isGraphicalRegion;
- (bool)isImageRegion;
- (bool)isListItemRegion;
- (bool)isParagraphRegion;
- (bool)isPreformattedWithUnitWidth:(double*)arg1;
- (bool)isRowRegion;
- (bool)isShapeRegion;
- (bool)isTextRegion;
- (id)listItem;
- (bool)noIndentation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })reducedBounds;
- (double)selectionBottom;
- (void)setAlignment:(unsigned long long)arg1;
- (void)setBelow:(bool)arg1;
- (void)setFlowProperties:(id)arg1;
- (void)setHasDropCap:(bool)arg1;
- (void)setIsImageRegion:(bool)arg1;
- (void)setIsTextRegion:(bool)arg1;
- (void)setListItem:(id)arg1;
- (void)setNoIndentation:(bool)arg1;

@end
