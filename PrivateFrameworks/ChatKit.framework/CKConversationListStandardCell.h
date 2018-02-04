/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKConversationListStandardCell : CKConversationListCell {
    CKAvatarView * _avatarView;
    UIImageView * _unreadIndicatorImageView;
}

+ (id)identifierForConversation:(id)arg1;

- (void).cxx_destruct;
- (void)_calculateLayoutFrames;
- (void)_updateAvatarView;
- (id)avatarView;
- (id)avatarView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
- (bool)avatarView:(id)arg1 shouldShowContact:(id)arg2;
- (id)chevronImageView;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)updateContentsForConversation:(id)arg1;
- (void)updateForEditing:(bool)arg1;
- (void)updateFromLabelWithText:(id)arg1;
- (void)updateUnreadIndicatorWithImage:(id)arg1;

@end
