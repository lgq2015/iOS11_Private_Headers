/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMBusinessNameManager : NSObject {
    NSMutableDictionary * _cache;
    NSLock * _lock;
    NSMutableDictionary * _pendingRequests;
}

@property (retain) NSMutableDictionary *cache;
@property (retain) NSLock *lock;
@property (retain) NSMutableDictionary *pendingRequests;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)businessNameForUID:(id)arg1 updateHandler:(id /* block */)arg2;
- (id)cache;
- (id)init;
- (id)lock;
- (id)pendingRequests;
- (void)setCache:(id)arg1;
- (void)setLock:(id)arg1;
- (void)setPendingRequests:(id)arg1;

@end
