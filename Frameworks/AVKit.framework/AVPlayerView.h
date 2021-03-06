/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVPlayerView : UIView {
    AVPlayerViewControllerContentView * _contentView;
    bool  _managesContentViewLayout;
    UIScreen * _primaryScreen;
}

@property (nonatomic, readonly) AVPlayerViewControllerContentView *contentView;
@property (nonatomic) bool managesContentViewLayout;
@property (nonatomic) UIScreen *primaryScreen;

- (void).cxx_destruct;
- (id)contentView;
- (void)dealloc;
- (id)initWithContentView:(id)arg1;
- (void)layoutSubviews;
- (bool)managesContentViewLayout;
- (id)primaryScreen;
- (void)setClipsToBounds:(bool)arg1;
- (void)setManagesContentViewLayout:(bool)arg1;
- (void)setPrimaryScreen:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end
