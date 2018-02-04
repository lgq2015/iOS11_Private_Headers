/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAPriorityManager : NSObject {
    NSMapTable * _clientsToPriorityRequests;
    int  _currentPriority;
    long long  _foregroundDataclasses;
}

@property (nonatomic, retain) NSMapTable *clientsToPriorityRequests;
@property (nonatomic, readonly) int currentPriority;
@property (nonatomic) long long foregroundDataclasses;

+ (id)sharedManager;
+ (void)vendPriorityManagers;

- (void).cxx_destruct;
- (void)_SBApplicationStateChanged:(id)arg1;
- (int)_recalculatePriority;
- (void)_setForegroundDataclasses:(long long)arg1;
- (void)_setNewPriority;
- (id)appIDsToDataclasses;
- (void)bumpDataclassesToUIPriority:(long long)arg1;
- (id)clientsToPriorityRequests;
- (int)currentPriority;
- (void)dealloc;
- (long long)foregroundDataclasses;
- (id)init;
- (void)requestPriority:(int)arg1 forClient:(id)arg2 dataclasses:(long long)arg3;
- (void)setClientsToPriorityRequests:(id)arg1;
- (void)setForegroundDataclasses:(long long)arg1;
- (id)stateString;

@end
