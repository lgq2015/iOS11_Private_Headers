/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
 */

@interface BPSWatchView : UIView {
    NSString * _screenImageName;
    NSString * _screenImageSearchBundleIdentifier;
    unsigned long long  _sizeOverride;
    unsigned long long  _style;
    NSString * _styleVersionSuffix;
    BPSRemoteImageView * _watchImageView;
    UIImageView * _watchScreenImageView;
}

@property (nonatomic, copy) NSString *screenImageName;
@property (nonatomic, retain) NSString *screenImageSearchBundleIdentifier;
@property (nonatomic) unsigned long long sizeOverride;
@property (nonatomic) unsigned long long style;
@property (nonatomic, copy) NSString *styleVersionSuffix;
@property (nonatomic, retain) BPSRemoteImageView *watchImageView;
@property (nonatomic, readonly) UIImageView *watchScreenImageView;

- (void).cxx_destruct;
- (void)applyScreenStyle;
- (unsigned long long)deviceSize;
- (id)image;
- (id)initWithStyle:(unsigned long long)arg1;
- (id)initWithStyle:(unsigned long long)arg1 allowsMaterialFallback:(bool)arg2;
- (id)initWithStyle:(unsigned long long)arg1 andVersionModifier:(id)arg2;
- (id)initWithStyle:(unsigned long long)arg1 versionModifier:(id)arg2 allowsMaterialFallback:(bool)arg3;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)overrideMaterial:(unsigned long long)arg1 size:(unsigned long long)arg2;
- (id)screenImageName;
- (id)screenImageSearchBundleIdentifier;
- (struct CGSize { double x1; double x2; })screenImageSize;
- (void)setScreenImageName:(id)arg1;
- (void)setScreenImageSearchBundleIdentifier:(id)arg1;
- (void)setSizeOverride:(unsigned long long)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setStyleVersionSuffix:(id)arg1;
- (void)setWatchImageView:(id)arg1;
- (unsigned long long)sizeOverride;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)style;
- (id)styleVersionSuffix;
- (id)watchAssetBundle;
- (id)watchImageView;
- (id)watchScreenImageView;

@end
