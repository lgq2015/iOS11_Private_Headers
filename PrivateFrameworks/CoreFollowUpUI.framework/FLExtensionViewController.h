/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
 */

@interface FLExtensionViewController : UIViewController <FLExtensionRemoteContextInterface, NSExtensionRequestHandling> {
    NSExtensionContext * _context;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)finishProcessing;
- (void)followUpPerformUpdateWithCompletionHandler:(id /* block */)arg1;
- (id)hostInterface;
- (void)processFollowUpItem:(id)arg1 selectedAction:(id)arg2 completion:(id /* block */)arg3;
- (void)viewDidAppear:(bool)arg1;

@end
