/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

@interface WFRemotePINEntryViewController : _UIRemoteViewController <WFPINEntryViewControllerProtocol> {
    NSObject<WFPINEntryViewControllerProtocol> * _delegate;
}

@property (nonatomic) NSObject<WFPINEntryViewControllerProtocol> *delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)dealloc;
- (id)delegate;
- (bool)isNumericPIN;
- (bool)requiresKeyboard;
- (void)setDelegate:(id)arg1;
- (void)setPageTitle:(id)arg1;
- (void)setURL:(id)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)simplePIN;
- (unsigned long long)supportedInterfaceOrientations;
- (void)userDidCancel;
- (void)userEnteredCorrectPIN;
- (void)viewDidLoad;

@end
