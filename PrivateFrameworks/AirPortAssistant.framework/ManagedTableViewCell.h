/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@interface ManagedTableViewCell : UITableViewCell {
    NSMutableDictionary * _cellDict;
    double  _cellXEdgeInset;
    double  _computedRightmostEditTextInset;
    NSIndexPath * _currentIndexPath;
    double  _forcedRightmostEditTextInset;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _modifiedContentViewFrame;
    double  _neededContentHeight;
    TableViewManager * _parentTableManager;
}

@property (nonatomic, retain) NSMutableDictionary *cellDict;
@property (nonatomic, readonly) double computedRightmostEditTextInset;
@property (nonatomic, retain) NSIndexPath *currentIndexPath;
@property (nonatomic) double forcedRightmostEditTextInset;
@property (nonatomic, readonly) double neededContentHeight;
@property (nonatomic) TableViewManager *parentTableManager;

- (id)accessibilityValue;
- (double)calculateFrameSizeForView:(id)arg1 forItem:(id)arg2 atItemIndex:(unsigned long long)arg3 withRemainingContentWidth:(double)arg4;
- (void)calculatePositionForView:(id)arg1 forItem:(id)arg2 atItemIndex:(unsigned long long)arg3;
- (id)cellDict;
- (double)computedRightmostEditTextInset;
- (id)currentIndexPath;
- (void)dealloc;
- (double)edgeInsetValue:(id)arg1;
- (double)forcedRightmostEditTextInset;
- (double)horizontalSpacingForView:(id)arg1 withItem:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (double)leftInsetForView:(id)arg1 withItem:(id)arg2;
- (double)neededContentHeight;
- (id)parentTableManager;
- (void)prepareForReuse;
- (void)repositionView:(id)arg1 ifOverlapsPreviousView:(id)arg2;
- (double)rightInsetForView:(id)arg1 withItem:(id)arg2;
- (void)setCellDict:(id)arg1;
- (void)setCurrentIndexPath:(id)arg1;
- (void)setForcedRightmostEditTextInset:(double)arg1;
- (void)setParentTableManager:(id)arg1;
- (double)usableContentWidth;
- (double)usableContentWidthForItem:(id)arg1 withVerticalNeighborView:(id)arg2;
- (double)verticalInset;
- (double)verticalSpacingForView:(id)arg1 withItem:(id)arg2;

@end
