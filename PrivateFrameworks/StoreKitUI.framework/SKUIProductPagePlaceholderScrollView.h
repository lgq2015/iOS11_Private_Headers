/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIProductPagePlaceholderScrollView : UIScrollView {
    bool  _isPad;
    double  _offset;
    UIView * _placeholderView;
}

@property (nonatomic) bool isPad;
@property (nonatomic) double offset;
@property (nonatomic, retain) UIView *placeholderView;

- (void).cxx_destruct;
- (bool)isPad;
- (void)layoutSubviews;
- (double)offset;
- (id)placeholderView;
- (void)setIsPad:(bool)arg1;
- (void)setOffset:(double)arg1;
- (void)setPlaceholderView:(id)arg1;

@end
