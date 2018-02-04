/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIIncompatibleAppView : UIView {
    NSMutableArray * _buttons;
    UIImageView * _iconView;
    UILabel * _messageLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIImage *iconImage;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)addButtonWithTitle:(id)arg1;
- (id)iconImage;
- (void)layoutSubviews;
- (id)message;
- (void)removeButtonTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)setBackgroundColor:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
