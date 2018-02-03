/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIViewServiceSessionManager : NSObject <NSXPCListenerDelegate> {
    int  _connectionNotificationToken;
    NSXPCListener * _listener;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _sessions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)__serviceSessionManager;
+ (bool)hasActiveSessions;
+ (void)startViewServiceSessionManagerAsPlugin:(bool)arg1;

- (void).cxx_destruct;
- (void)_configureSessionForConnection:(id)arg1;
- (bool)_hasActiveSessions;
- (id)_initAsPlugIn:(bool)arg1;
- (void)_registerSessionForDefaultDeputies:(id)arg1;
- (void)_startListener;
- (void)_startListenerWithName:(id)arg1;
- (void)_startOrStopSystemsForBackgroundRunning;
- (void)dealloc;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end