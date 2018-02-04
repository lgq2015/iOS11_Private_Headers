/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@interface AUAudioUnitViewService : UIViewController <AUAudioUnitRemoteViewProtocol> {
    AURemoteExtensionContext * _extensionContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property AURemoteExtensionContext *extensionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)_connectChildView:(id /* block */)arg1;
- (void)connectToContextWithSessionID:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)exportedInterface;
- (id)extensionContext;
- (void)loadView;
- (id)remoteViewControllerInterface;
- (void)setExtensionContext:(id)arg1;

@end
