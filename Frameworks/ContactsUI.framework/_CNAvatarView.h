/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface _CNAvatarView : UIView {
    <_CNAvatarViewDelegate> * _delegate;
    NSArray * _likenessProviders;
    NSArray * _likenessViews;
    NSArray * _subviewsConstraints;
}

@property (nonatomic) <_CNAvatarViewDelegate> *delegate;
@property (nonatomic, retain) NSArray *likenessProviders;
@property (nonatomic, copy) NSArray *likenessViews;
@property (nonatomic, copy) NSArray *subviewsConstraints;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (id)delegate;
- (id)likenessProviders;
- (id)likenessViews;
- (void)setDelegate:(id)arg1;
- (void)setLikenessProviders:(id)arg1;
- (void)setLikenessViews:(id)arg1;
- (void)setSubviewsConstraints:(id)arg1;
- (void)setupSubviews;
- (id)subviewsConstraints;
- (void)updateConstraints;

@end
