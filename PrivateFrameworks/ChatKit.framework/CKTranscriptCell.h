/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptCell : CKEditableCollectionViewCell {
    double  _associatedItemOffset;
    double  _drawerPercentRevealed;
    BOOL  _orientation;
    bool  _wantsDrawerLayout;
}

@property (nonatomic) double associatedItemOffset;
@property (nonatomic) double drawerPercentRevealed;
@property (nonatomic) BOOL orientation;
@property (nonatomic) bool wantsDrawerLayout;

- (void)addFilter:(id)arg1;
- (double)associatedItemOffset;
- (void)clearFilters;
- (void)configureForChatItem:(id)arg1;
- (double)drawerPercentRevealed;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)layoutSubviewsForAlignmentContents;
- (void)layoutSubviewsForContents;
- (void)layoutSubviewsForDrawer;
- (BOOL)orientation;
- (void)performHide:(id /* block */)arg1;
- (void)performInsertion:(id /* block */)arg1;
- (void)performReload:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)performRemoval:(id /* block */)arg1;
- (void)performReveal:(id /* block */)arg1;
- (void)prepareForReuse;
- (void)setAssociatedItemOffset:(double)arg1;
- (void)setDrawerPercentRevealed:(double)arg1;
- (void)setOrientation:(BOOL)arg1;
- (void)setWantsDrawerLayout:(bool)arg1;
- (bool)wantsDrawerLayout;

@end
