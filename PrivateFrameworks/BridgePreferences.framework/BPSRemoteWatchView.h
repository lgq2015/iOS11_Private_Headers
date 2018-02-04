/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
 */

@interface BPSRemoteWatchView : UIView {
    NSString * _advertisingName;
    PBBridgeAssetsManager * _assetManager;
    unsigned long long  _style;
    BPSWatchView * _watch;
    UIImageView * _watchScreen;
}

@property (nonatomic, copy) NSString *advertisingName;
@property (nonatomic, retain) PBBridgeAssetsManager *assetManager;
@property (nonatomic) unsigned long long style;
@property (nonatomic, retain) BPSWatchView *watch;
@property (nonatomic, retain) UIImageView *watchScreen;

- (void).cxx_destruct;
- (id)advertisingName;
- (id)assetManager;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAdvertisingName:(id)arg1;
- (void)setAdvertisingName:(id)arg1 andStyle:(unsigned long long)arg2;
- (void)setAssetManager:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setWatch:(id)arg1;
- (void)setWatchScreen:(id)arg1;
- (unsigned long long)style;
- (id)watch;
- (id)watchScreen;

@end
