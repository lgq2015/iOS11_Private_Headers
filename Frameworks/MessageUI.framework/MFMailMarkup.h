/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMailMarkup : NSObject {
    <MFMailMarkupDelegate> * _delegate;
    MURemoteViewController * markupViewController;
}

@property (nonatomic) <MFMailMarkupDelegate> *delegate;
@property MURemoteViewController *markupViewController;

+ (id)markupIcon;

- (void)_handleMarkupData:(id)arg1 forAttachment:(id)arg2;
- (void)_handleMarkupImage:(id)arg1 forAttachment:(id)arg2;
- (void)_processMarkupURL:(id)arg1 forAttachment:(id)arg2;
- (void)_requestMarkupData:(id)arg1 forAttachment:(id)arg2;
- (void)_requestMarkupImage:(id)arg1 forAttachment:(id)arg2;
- (void)_requestMarkupURL:(id)arg1 forAttachment:(id)arg2;
- (id)delegate;
- (void)exitMarkupWithReplacementAttachment:(id)arg1 targetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)handleReturnedMarkupItems:(id)arg1 forAttachment:(id)arg2;
- (id)initWithMarkupDelegate:(id)arg1;
- (void)markupAttachment:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 maskRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)markupViewController;
- (void)setDelegate:(id)arg1;
- (void)setMarkupViewController:(id)arg1;

@end
