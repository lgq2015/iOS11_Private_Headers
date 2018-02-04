/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIDownloadsCollectionViewCell : UICollectionViewCell {
    long long  _cellState;
    SKUIDownloadsCellView * _cellView;
    UIImageView * _editIndicator;
}

@property (nonatomic) long long cellState;
@property (nonatomic, readonly) SKUIDownloadsCellView *cellView;

- (void).cxx_destruct;
- (void)_reloadEditState;
- (long long)cellState;
- (id)cellView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setCellState:(long long)arg1;
- (void)setSelected:(bool)arg1;

@end
