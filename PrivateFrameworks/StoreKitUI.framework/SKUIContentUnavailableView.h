/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIContentUnavailableView : SKUIViewReuseView <SKUIViewElementView> {
    UIControl * _button;
    SKUIButtonViewElement * _buttonElement;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    SKUIImageViewElement * _imageElement;
    SKUIImageView * _imageView;
    SKUIAttributedStringView * _messageView;
    SKUIAttributedStringView * _titleView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_attributedStringWithButton:(id)arg1 context:(id)arg2;
+ (id)_attributedStringWithMessageLabel:(id)arg1 context:(id)arg2;
+ (id)_attributedStringWithTitleLabel:(id)arg1 context:(id)arg2;
+ (struct CGSize { double x1; double x2; })preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize { double x1; double x2; })sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (double)_baselineOffsetForView:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (double)_firstBaselineOffsetForView:(id)arg1;
- (void)layoutSubviews;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;

@end
