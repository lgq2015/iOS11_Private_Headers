/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTransitMessageCell : MKCustomSeparatorTableViewCell {
    NSLayoutConstraint * _bottomConstraint;
    _MKUILabel * _messageLabel;
    NSLayoutConstraint * _topConstraint;
}

@property (nonatomic, copy) NSString *messageText;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange;
- (void)_updateConstraintValues;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)messageText;
- (void)setMessageText:(id)arg1;

@end
