/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface _SBFVibrantTableViewHeaderFooterView : UITableViewHeaderFooterView {
    _UIBackdropView * _backdrop;
    NSString * _backdropGroupName;
    long long  _graphicsQuality;
    UIView * _plusDView;
    bool  _wantsPlusDLayer;
}

@property (nonatomic, copy) NSString *backdropGroupName;
@property (nonatomic) long long graphicsQuality;
@property (nonatomic) bool wantsPlusDLayer;

+ (id)defaultBackgroundColorForGraphicsQuality:(long long)arg1;

- (void).cxx_destruct;
- (id)backdropGroupName;
- (long long)graphicsQuality;
- (id)initWithCoder:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (long long)initialGraphicsQuality;
- (void)setBackdropGroupName:(id)arg1;
- (void)setFloating:(bool)arg1;
- (void)setGraphicsQuality:(long long)arg1;
- (void)setWantsPlusDLayer:(bool)arg1;
- (bool)wantsPlusDLayer;

@end
