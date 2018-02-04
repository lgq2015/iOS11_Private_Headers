/* made by EzioChiu
   Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

@interface RPBroadcastViewController : UIViewController {
    <RPBroadcastViewControllerDelegate> * _delegate;
    RPBroadcastHostViewController * _hostViewController;
    id /* block */  _setupCompletionHandler;
}

@property (nonatomic) <RPBroadcastViewControllerDelegate> *delegate;
@property (nonatomic, retain) RPBroadcastHostViewController *hostViewController;
@property (nonatomic, copy) id /* block */ setupCompletionHandler;

+ (void)getBroadcastExtensionWithBaseIdentifier:(id)arg1 withHandler:(id /* block */)arg2;
+ (void)loadBroadcastViewControllerWithBaseIdentifier:(id)arg1 withCompletion:(id /* block */)arg2;
+ (void)viewControllerForExtension:(id)arg1 inputItems:(id)arg2 completionHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)delegate;
- (id)hostViewController;
- (void)loadView;
- (void)setDelegate:(id)arg1;
- (void)setHostViewController:(id)arg1;
- (void)setSetupCompletionHandler:(id /* block */)arg1;
- (id /* block */)setupCompletionHandler;
- (void)viewDidLoad;

@end
