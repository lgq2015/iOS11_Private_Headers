/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

@interface BYNetworkMonitor : NSObject {
    int  _currentNetworkType;
    NSMutableDictionary * _networkTypeBlocks;
    NSObject<OS_dispatch_queue> * _networkTypeQueue;
    NSHashTable * _observers;
    struct __SCNetworkReachability { } * _reachability;
    bool  _roaming;
}

+ (bool)holdsWiFiAssertion;
+ (void)setHoldsWiFiAssertion:(bool)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_carrierBundleChanged;
- (void)_initNetworkObservation;
- (bool)_isCurrentlyRoaming;
- (int)_networkTypeFromCurrentCellularData;
- (int)_networkTypeFromFlags:(unsigned int)arg1;
- (void)_operatorBundleChanged;
- (void)addObserver:(id)arg1;
- (int)currentNetworkType;
- (void)dealloc;
- (id)init;
- (bool)isCellularDataRoamingEnabled;
- (bool)isCellularRoaming;
- (bool)isNetworkTypeCellular:(int)arg1;
- (void)removeObserver:(id)arg1;
- (void)setCellularRoaming:(bool)arg1;
- (void)setCurrentNetworkType:(int)arg1;
- (void)withMinimumNetworkType:(int)arg1 timeout:(double)arg2 runBlock:(id /* block */)arg3;

@end
