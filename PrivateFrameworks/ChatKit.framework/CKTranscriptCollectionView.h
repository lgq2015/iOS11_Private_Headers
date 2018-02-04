/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptCollectionView : CKEditableCollectionView {
    bool  _dynamicsDisabled;
    bool  _ignoresContentOffsetChanges;
}

@property (nonatomic) bool dynamicsDisabled;
@property (nonatomic) bool ignoresContentOffsetChanges;

- (bool)dynamicsDisabled;
- (bool)ignoresContentOffsetChanges;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 collectionViewLayout:(id)arg2;
- (void)layoutSubviews;
- (void)reloadData;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDynamicsDisabled:(bool)arg1;
- (void)setIgnoresContentOffsetChanges:(bool)arg1;

@end
