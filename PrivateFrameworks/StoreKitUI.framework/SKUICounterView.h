/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUICounterView : SKUIViewReuseView <SKUIViewElementView> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    SKUICounterViewElement * _counterElement;
    SKUIImageView * _imageView;
    NSNumberFormatter * _numberFormatter;
    UILabel * _numberView;
    SKUICounterTimeView * _timeView;
    NSObject<OS_dispatch_source> * _updateTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (struct CGSize { double x1; double x2; })preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize { double x1; double x2; })sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (void)_addNumberViewWithViewElement:(id)arg1 context:(id)arg2;
- (void)_addTimeViewWithViewElement:(id)arg1 context:(id)arg2;
- (void)_reloadNumberValue;
- (void)_reloadUpdateTimer;
- (void)_startUpdateTimer;
- (void)_stopUpdateTimer;
- (void)_updateTimerAction;
- (unsigned long long)_visibleTimeFieldsForDateFormat:(long long)arg1;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void)setAlpha:(double)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHidden:(bool)arg1;
- (bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;

@end
