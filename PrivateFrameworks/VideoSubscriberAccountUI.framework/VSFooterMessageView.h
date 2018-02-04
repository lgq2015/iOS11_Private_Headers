/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSFooterMessageView : UIView <PSHeaderFooterView> {
    VSFontCenter * _fontCenter;
    NSString * _primaryMessage;
    NSString * _secondaryMessage;
    NSString * _tertiaryMessage;
}

@property (nonatomic, retain) VSFontCenter *fontCenter;
@property (nonatomic, copy) NSString *primaryMessage;
@property (nonatomic, copy) NSString *secondaryMessage;
@property (nonatomic, copy) NSString *tertiaryMessage;

- (void).cxx_destruct;
- (void)dealloc;
- (id)fontCenter;
- (id)initWithSpecifier:(id)arg1;
- (double)preferredHeightForWidth:(double)arg1;
- (id)primaryMessage;
- (id)secondaryMessage;
- (void)setFontCenter:(id)arg1;
- (void)setPrimaryMessage:(id)arg1;
- (void)setSecondaryMessage:(id)arg1;
- (void)setTertiaryMessage:(id)arg1;
- (id)tertiaryMessage;
- (void)traitCollectionDidChange:(id)arg1;

@end
