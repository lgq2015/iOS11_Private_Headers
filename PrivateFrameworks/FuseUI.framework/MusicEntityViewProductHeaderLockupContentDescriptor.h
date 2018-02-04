/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityViewProductHeaderLockupContentDescriptor : MusicEntityViewContentDescriptor {
    MusicEntityViewContentArtworkDescriptor * _backgroundArtworkDescriptor;
    UIColor * _backgroundOverlayTintColor;
    long long  _buttonsBackdropOverlayBlendMode;
    UIColor * _buttonsTintColor;
    MusicEntityViewContentTextDescriptor * _editableTextDescriptor;
    MusicEntityViewContentTextDescriptor * _editableTextHeaderDescriptor;
    bool  _wantsAddSongsButton;
    bool  _wantsBackgroundBlur;
    bool  _wantsBackgroundImage;
    bool  _wantsCameraButtonWhenEditing;
    bool  _wantsEditButton;
    bool  _wantsLikeDislikeButton;
    bool  _wantsRefreshActivityIndicator;
    bool  _wantsRefreshButton;
    NSString * _wantsShareButtonProperty;
}

@property (nonatomic, retain) MusicEntityViewContentArtworkDescriptor *backgroundArtworkDescriptor;
@property (nonatomic, copy) UIColor *backgroundOverlayTintColor;
@property (nonatomic) long long buttonsBackdropOverlayBlendMode;
@property (nonatomic, copy) UIColor *buttonsTintColor;
@property (nonatomic, retain) MusicEntityViewContentTextDescriptor *editableTextDescriptor;
@property (nonatomic, retain) MusicEntityViewContentTextDescriptor *editableTextHeaderDescriptor;
@property (nonatomic) bool wantsAddSongsButton;
@property (nonatomic) bool wantsBackgroundBlur;
@property (nonatomic) bool wantsBackgroundImage;
@property (nonatomic) bool wantsCameraButtonWhenEditing;
@property (nonatomic) bool wantsEditButton;
@property (nonatomic) bool wantsLikeDislikeButton;
@property (nonatomic) bool wantsRefreshActivityIndicator;
@property (nonatomic) bool wantsRefreshButton;
@property (nonatomic, copy) NSString *wantsShareButtonProperty;

- (void).cxx_destruct;
- (id)backgroundArtworkDescriptor;
- (id)backgroundOverlayTintColor;
- (long long)buttonsBackdropOverlayBlendMode;
- (id)buttonsTintColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)editableTextDescriptor;
- (id)editableTextHeaderDescriptor;
- (void)setBackgroundArtworkDescriptor:(id)arg1;
- (void)setBackgroundOverlayTintColor:(id)arg1;
- (void)setButtonsBackdropOverlayBlendMode:(long long)arg1;
- (void)setButtonsTintColor:(id)arg1;
- (void)setEditableTextDescriptor:(id)arg1;
- (void)setEditableTextHeaderDescriptor:(id)arg1;
- (void)setWantsAddSongsButton:(bool)arg1;
- (void)setWantsBackgroundBlur:(bool)arg1;
- (void)setWantsBackgroundImage:(bool)arg1;
- (void)setWantsCameraButtonWhenEditing:(bool)arg1;
- (void)setWantsEditButton:(bool)arg1;
- (void)setWantsLikeDislikeButton:(bool)arg1;
- (void)setWantsRefreshActivityIndicator:(bool)arg1;
- (void)setWantsRefreshButton:(bool)arg1;
- (void)setWantsShareButtonProperty:(id)arg1;
- (bool)wantsAddSongsButton;
- (bool)wantsBackgroundBlur;
- (bool)wantsBackgroundImage;
- (bool)wantsCameraButtonWhenEditing;
- (bool)wantsEditButton;
- (bool)wantsLikeDislikeButton;
- (bool)wantsRefreshActivityIndicator;
- (bool)wantsRefreshButton;
- (id)wantsShareButtonProperty;

@end
