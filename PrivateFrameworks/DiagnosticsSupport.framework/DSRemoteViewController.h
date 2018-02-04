/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
 */

@interface DSRemoteViewController : _UIRemoteViewController <DSRemoteViewControllerInterface> {
    <DSRemoteViewControllerDelegate> * _delegate;
    float  _originalScreenBrightness;
    DSResponder * _responder;
}

@property (nonatomic) <DSRemoteViewControllerDelegate> *delegate;
@property (nonatomic) float originalScreenBrightness;
@property (nonatomic, retain) DSResponder *responder;

+ (id)exportedInterface;
+ (id)requestViewControllerWithConnectionHandler:(id /* block */)arg1;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)_stringForReason:(unsigned long long)arg1;
- (id)_viewServiceInterface;
- (id)delegate;
- (float)originalScreenBrightness;
- (void)requiredSerialNumbers:(id)arg1;
- (id)responder;
- (void)selectableSerialNumbers:(id)arg1;
- (void)sessionToken:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOriginalScreenBrightness:(float)arg1;
- (void)setResponder:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewServiceDidEnableVolumeHUD:(bool)arg1;
- (void)viewServiceDidFinishWithReason:(unsigned long long)arg1;
- (void)viewServiceDidSetScreenToBrightness:(float)arg1 animate:(bool)arg2;
- (void)viewServiceDidSuspend;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
