/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIComposeTextFieldListView : UIView {
    <SKUIComposeTextFieldListViewDelegate> * _delegate;
    NSMutableArray * _fields;
    bool  _isValid;
    long long  _style;
}

@property (nonatomic, readonly) long long composeReviewStyle;
@property (nonatomic) <SKUIComposeTextFieldListViewDelegate> *delegate;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) UIResponder *initialFirstResponder;

- (void).cxx_destruct;
- (void)_updateValidity;
- (long long)composeReviewStyle;
- (void)composeTextFieldValidityChanged:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (double)height;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (id)initialFirstResponder;
- (bool)isValid;
- (void)layoutSubviews;
- (void)reloadData;
- (void)setDelegate:(id)arg1;
- (id)textForFieldAtIndex:(unsigned long long)arg1;

@end
