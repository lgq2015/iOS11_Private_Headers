/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
 */

@interface MSAudioProgressView : UIView {
    UIImageView * _bufferingImageView;
    NSObject<OS_dispatch_source> * _bufferingTimer;
    bool  _highlighted;
    SUPlayerStatus * _playerStatus;
    MSPieImageView * _progressView;
    UIImageView * _stopImageView;
}

@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, copy) SUPlayerStatus *playerStatus;

- (void)_cancelBufferingTimer;
- (id)_newBufferingImageView;
- (id)_newProgressView;
- (void)_showBufferingImageView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (void)layoutSubviews;
- (id)playerStatus;
- (void)setHighlighted:(bool)arg1;
- (void)setPlayerStatus:(id)arg1;

@end
