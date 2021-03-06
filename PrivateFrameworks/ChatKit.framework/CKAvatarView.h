/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAvatarView : CNAvatarView {
    NSString * _preferredHandle;
    UIViewController * _presentingViewController;
}

@property (nonatomic) NSString *preferredHandle;
@property (nonatomic) UIViewController *presentingViewController;

- (void).cxx_destruct;
- (id)init;
- (id)preferredHandle;
- (id)presentingViewController;
- (void)setHighlighted:(bool)arg1;
- (void)setPreferredHandle:(id)arg1;
- (void)setPresentingViewController:(id)arg1;

@end
