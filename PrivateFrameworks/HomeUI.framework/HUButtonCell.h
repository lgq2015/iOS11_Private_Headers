/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUButtonCell : HUTitleDescriptionCell {
    bool  _destructive;
    long long  _textAlignment;
    bool  _textColorFollowsTintColor;
}

@property (nonatomic, retain) NSString *descriptionText;
@property (getter=isDestructive, nonatomic) bool destructive;
@property (nonatomic) long long textAlignment;
@property (nonatomic) bool textColorFollowsTintColor;

- (void)didMoveToSuperview;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isDestructive;
- (void)prepareForReuse;
- (void)setDestructive:(bool)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColorFollowsTintColor:(bool)arg1;
- (long long)textAlignment;
- (bool)textColorFollowsTintColor;
- (void)tintColorDidChange;
- (void)updateTitle;

@end
