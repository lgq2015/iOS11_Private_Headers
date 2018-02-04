/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAlertController : UIAlertController <CKAdaptivePresentedControllerProtocol> {
    <CKAlertControllerDelegate> * _alertDelegate;
}

@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic) <CKAlertControllerDelegate> *alertDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addAction:(id)arg1;
- (id)alertDelegate;
- (bool)allowsRotation;
- (bool)preserveModalPresentationStyle;
- (void)setAlertDelegate:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (bool)wantsWindowedPresentation;

@end
