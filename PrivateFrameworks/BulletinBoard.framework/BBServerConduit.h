/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBServerConduit : NSObject <BBServerConduitClientInterface> {
    NSXPCConnection * _connection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientInterface;
+ (id)serverInterface;
+ (id)sharedConduit;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)sendMessageToDataProviderSectionID:(id)arg1 name:(id)arg2 userInfo:(id)arg3;
- (void)weeAppWithBundleID:(id)arg1 getHiddenFromUser:(id /* block */)arg2;
- (void)weeAppWithBundleID:(id)arg1 setHiddenFromUser:(bool)arg2;

@end
