/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKBrowserPluginCell : CKBrowserCell {
    UIImageView * _browserImage;
    IMBalloonPlugin * _plugin;
}

@property (nonatomic, retain) UIImageView *browserImage;
@property (nonatomic, retain) IMBalloonPlugin *plugin;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_setImageForPlugin:(id)arg1;
- (void)_updateShinyStatus;
- (id)browserImage;
- (id)iconView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)plugin;
- (void)setBrowserImage:(id)arg1;
- (void)setPlugin:(id)arg1;
- (void)setSelected:(bool)arg1;

@end
