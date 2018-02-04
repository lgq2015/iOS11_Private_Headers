/* made by EzioChiu
   Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

@interface RPBroadcastExtensionViewController : UIViewController <NSXPCListenerDelegate> {
    RPBroadcastHandler * _broadcastHandler;
}

@property (nonatomic, retain) RPBroadcastHandler *broadcastHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)broadcastExtensionContext;
- (id)broadcastHandler;
- (void)completeSetupWithBroadcastURL:(id)arg1;
- (id)initWithBroadcastHandler:(id)arg1;
- (void)setBroadcastHandler:(id)arg1;
- (void)updateBroadcastHandlerListenerEndpoint:(id /* block */)arg1;

@end
