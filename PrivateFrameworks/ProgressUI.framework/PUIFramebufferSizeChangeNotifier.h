/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProgressUI.framework/ProgressUI
 */

@interface PUIFramebufferSizeChangeNotifier : NSObject <FBSDisplayObserving> {
    FBSDisplayMonitor * _displayMonitor;
    NSMutableArray * _listeners;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_onMainQueue_notifyListeners;
- (id)addListener:(id /* block */)arg1;
- (void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)displayMonitor:(id)arg1 didUpdateIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)removeListener:(id)arg1;

@end
