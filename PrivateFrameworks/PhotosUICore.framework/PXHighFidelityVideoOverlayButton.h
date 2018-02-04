/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXHighFidelityVideoOverlayButton : UIView <PXVideoOverlayButton> {
    SEL  _action;
    _UIBackdropView * _backdropView;
    UIButton * _button;
    UIImageView * _overlayPlayBackground;
    long long  _style;
    id  _target;
}

- (void).cxx_destruct;
- (void)_playButtonActivate:(id)arg1;
- (void)_playButtonDeactivate:(id)arg1;
- (void)_playButtonTapped:(id)arg1;
- (id)initWithStyle:(long long)arg1 allowBackdropStatisticsSupression:(bool)arg2;
- (void)layoutSubviews;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (long long)style;

@end
