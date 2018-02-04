/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPreferenceClient.framework/AppPreferenceClient
 */

@interface APRIntentStreamUpdateClient : NSObject <APRIntentStreamUpdateInterface> {
    NSXPCConnection * _xpcConnection;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)notifyAboutIntentStreamChangeWithReply:(id /* block */)arg1;

@end
