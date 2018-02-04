/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MXExtensionService : NSObject {
    <_MXExtensionURLHandling> * _URLHandlingDelegate;
    NSUUID * _connectionIdentifier;
    bool  _didSendConnectionTerminationNotifcation;
    _MXExtension * _extensionProxy;
    NSExtension * _realExtension;
    struct UIViewController { Class x1; } * _remoteViewController;
    _MXSerialQueue * _serialQueue;
    unsigned long long  _state;
}

@property (nonatomic) <_MXExtensionURLHandling> *URLHandlingDelegate;
@property (nonatomic, retain) NSUUID *connectionIdentifier;
@property (nonatomic, readonly) _MXExtension *extensionProxy;
@property (nonatomic, retain) NSExtension *realExtension;
@property (nonatomic, retain) UIViewController *remoteViewController;
@property (nonatomic, readonly) NSUUID *serviceIdentifier;
@property (nonatomic) unsigned long long state;

+ (id)extensionCompletionQueue;

- (void).cxx_destruct;
- (id)URLHandlingDelegate;
- (void)_completeOrCancelTransaction:(bool)arg1;
- (void)_connectExtensionWithRemoteViewControllerNeeded:(bool)arg1 Handler:(id /* block */)arg2;
- (id)_errorForIntent:(id)arg1;
- (id)_errorForIntentResponse:(id)arg1 withExpectResponseClass:(Class)arg2;
- (id)_errorForIntentVendorContext:(id)arg1;
- (id)_handleOrConfirmIntent:(id)arg1 expectResponseClass:(Class)arg2 isHandle:(bool)arg3 withCompletion:(id /* block */)arg4;
- (void)cancel;
- (void)cancelTransactionDueToTimeout;
- (void)completeTransaction;
- (id)confirmIntent:(id)arg1 expectResponseClass:(Class)arg2 withCompletion:(id /* block */)arg3;
- (void)connectExtensionWithHandler:(id /* block */)arg1;
- (void)connectExtensionWithRemoteViewControllerNeeded:(bool)arg1 Handler:(id /* block */)arg2;
- (void)connectUIExtensionWithHandler:(id /* block */)arg1;
- (id)connectionIdentifier;
- (id)context;
- (void)dealloc;
- (id)description;
- (void)disconnectExtension;
- (id)extension;
- (id)extensionProxy;
- (void)handleIntent:(id)arg1 expectResponseClass:(Class)arg2 completion:(id /* block */)arg3;
- (id)handleIntent:(id)arg1 expectResponseClass:(Class)arg2 withCompletion:(id /* block */)arg3;
- (id)handleRequest:(id)arg1 requestDispatcher:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)initWithExtensionProxy:(id)arg1;
- (id)intentResponseObserverProxy;
- (int)processIdentifier;
- (id)realExtension;
- (struct UIViewController { Class x1; }*)remoteViewController;
- (id)resolveIntentSlot:(id)arg1 forIntent:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)serviceIdentifier;
- (void)setConnectionIdentifier:(id)arg1;
- (void)setIntentResponseObserverProxy:(id)arg1;
- (void)setRealExtension:(id)arg1;
- (void)setRemoteViewController:(struct UIViewController { Class x1; }*)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setURLHandlingDelegate:(id)arg1;
- (id)startSendingUpdatesForIntent:(id)arg1 toObserver:(id)arg2;
- (id)startSendingUpdatesForRequest:(id)arg1 requestDispatcher:(id)arg2 toObserver:(id)arg3;
- (unsigned long long)state;
- (void)stopSendingUpdatesForIntent:(id)arg1;
- (void)stopSendingUpdatesForRequest:(id)arg1 requestDispatcher:(id)arg2;
- (id)vendorContextWithErrorHandler:(id /* block */)arg1;

@end
