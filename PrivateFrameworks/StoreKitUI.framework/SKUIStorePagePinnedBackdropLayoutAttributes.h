/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIStorePagePinnedBackdropLayoutAttributes : UICollectionViewLayoutAttributes <NSCopying> {
    UIColor * _backdropColor;
    NSString * _backdropGroupName;
    long long  _backdropStyle;
    bool  _hidesBackdropView;
    double  _transitionProgress;
}

@property (nonatomic, retain) UIColor *backdropColor;
@property (nonatomic, copy) NSString *backdropGroupName;
@property (nonatomic) long long backdropStyle;
@property (nonatomic) bool hidesBackdropView;
@property (nonatomic) double transitionProgress;

- (void).cxx_destruct;
- (id)backdropColor;
- (id)backdropGroupName;
- (long long)backdropStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)hidesBackdropView;
- (void)setBackdropColor:(id)arg1;
- (void)setBackdropGroupName:(id)arg1;
- (void)setBackdropStyle:(long long)arg1;
- (void)setHidesBackdropView:(bool)arg1;
- (void)setTransitionProgress:(double)arg1;
- (double)transitionProgress;

@end
