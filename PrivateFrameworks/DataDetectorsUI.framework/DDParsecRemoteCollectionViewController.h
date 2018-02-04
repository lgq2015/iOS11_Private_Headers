/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDParsecRemoteCollectionViewController : _UIRemoteViewController <DDParsecHostVCInterface> {
    <DDParsecHostVCInterface> * _hostSideDelegate;
    bool  _receivedInteractionDidFinish;
}

@property <DDParsecHostVCInterface> *hostSideDelegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (bool)canBecomeFirstResponder;
- (void)getStatusBarHidden:(id /* block */)arg1;
- (id)hostSideDelegate;
- (void)interactionEnded;
- (void)interactionEndedWithPunchout:(bool)arg1;
- (void)openParsecURL:(id)arg1;
- (void)openTrailerPunchout:(id)arg1;
- (void)setHostSideDelegate:(id)arg1;
- (void)showingErrorView:(bool)arg1;
- (void)showingFTE:(bool)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
