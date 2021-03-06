/* made by EzioChiu
   Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
 */

@interface INUIRemoteViewController : _UIRemoteViewController <INUIExtensionHostContextDelegate, _INUIRemoteViewControllerHosting> {
    NSExtension * _activeExtension;
    <NSCopying> * _currentRequestIdentifier;
    <INUIRemoteViewControllerDelegate> * _delegate;
    _INUIExtensionHostContext * _extensionHostContext;
}

@property (nonatomic, retain) NSExtension *activeExtension;
@property (nonatomic, retain) <NSCopying> *currentRequestIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <INUIRemoteViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INUIExtensionHostContext *extensionHostContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_requestRemoteViewControllerForSnippetExtensionInteraction:(id)arg1 delegate:(id)arg2 connectionHandler:(id /* block */)arg3;
+ (void)attemptToConnectToRemoteViewControllerForRemainingExtensions:(id)arg1 delegate:(id)arg2 connectionHandler:(id /* block */)arg3;
+ (id)exportedInterface;
+ (void)requestRemoteViewControllerForInteraction:(id)arg1 delegate:(id)arg2 connectionHandler:(id /* block */)arg3;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)_errorHandlingServiceViewControllerProxy;
- (void)_queryRepresentedPropertiesWithCompletion:(id /* block */)arg1;
- (id)activeExtension;
- (void)configureForParameters:(id)arg1 ofInteraction:(id)arg2 context:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)configureForParameters:(id)arg1 ofInteraction:(id)arg2 interactiveBehavior:(unsigned long long)arg3 context:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)configureWithInteraction:(id)arg1 context:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)configureWithInteraction:(id)arg1 context:(unsigned long long)arg2 errorHandlingCompletion:(id /* block */)arg3;
- (id)currentRequestIdentifier;
- (id)delegate;
- (id)disconnect;
- (id)extensionHostContext;
- (void)extensionHostContext:(id)arg1 wantsToHandleIntent:(id)arg2;
- (void)requestCancellation;
- (void)serviceViewControllerDesiresConstrainedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setActiveExtension:(id)arg1;
- (void)setCurrentRequestIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExtensionHostContext:(id)arg1;
- (void)updateExtensionContextStateWithCompletion:(id /* block */)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
