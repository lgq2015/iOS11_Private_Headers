/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKComposeNavbarManager : NSObject {
    CKNavbarCanvasViewController * _avatarNavbarCanvasViewController;
    CKComposeNavbarManagerContentView * _contentView;
    CKComposeNavbarCanvasViewController * _defaultNavbarCanvasViewController;
}

@property (nonatomic, retain) CKNavbarCanvasViewController *avatarNavbarCanvasViewController;
@property (nonatomic, readonly) UIButton *cancelButton;
@property (nonatomic, retain) CKComposeNavbarManagerContentView *contentView;
@property (nonatomic, retain) CKComposeNavbarCanvasViewController *defaultNavbarCanvasViewController;

- (void).cxx_destruct;
- (void)_setupAvatarNavBarViewControllerWithConversation:(id)arg1 shouldShowBackButtonView:(bool)arg2;
- (void)_setupDefaultNavbarCanvasViewController;
- (id)avatarNavbarCanvasViewController;
- (id)cancelButton;
- (void)commitTransitionAnimationWithConversation:(id)arg1 shouldShowBackButtonView:(bool)arg2;
- (id)contentView;
- (id)defaultNavbarCanvasViewController;
- (id)init;
- (void)setAvatarNavbarCanvasViewController:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setDefaultNavbarCanvasViewController:(id)arg1;
- (void)updateTitle:(id)arg1 animated:(bool)arg2;

@end
