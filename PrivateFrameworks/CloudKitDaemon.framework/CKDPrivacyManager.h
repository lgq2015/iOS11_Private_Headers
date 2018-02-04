/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPrivacyManager : NSObject {
    NSObject<OS_dispatch_queue> * _privacyManagerQueue;
    NSMutableSet * _requests;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *privacyManagerQueue;
@property (nonatomic, retain) NSMutableSet *requests;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_init;
- (void)_resetPrivacySettingsForAppContainerTuple:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)privacyManagerQueue;
- (id)requests;
- (void)resetPrivacySettingsWithCompletionHandler:(id /* block */)arg1;
- (void)setPrivacyManagerQueue:(id)arg1;
- (void)setRequests:(id)arg1;

@end
