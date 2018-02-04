/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

@interface CDPRemoteValidationEscapeOffer : NSObject {
    NSString * _escapeOfferName;
    NSMutableArray * _escapeOptions;
    NSString * _message;
    UIViewController * _presentingViewController;
    NSString * _title;
}

@property (nonatomic, retain) NSString *escapeOfferName;
@property (nonatomic, retain) NSString *message;
@property (nonatomic) UIViewController *presentingViewController;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)_actionFromEscapeOption:(id)arg1;
- (long long)_styleForEscapeOption:(id)arg1;
- (void)addEscapeOptionsObject:(id)arg1;
- (void)dismissOfferAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)escapeOfferName;
- (id)escapeOptions;
- (void)handleEscapeAction:(id)arg1;
- (id)init;
- (id)message;
- (id)presentingViewController;
- (void)setEscapeOfferName:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
