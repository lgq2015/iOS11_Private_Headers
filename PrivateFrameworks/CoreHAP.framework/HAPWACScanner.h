/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPWACScanner : HMFObject {
    HAPWACScanRequest * _activeRequest;
    NSMutableArray * _pendingRequests;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _scanInProgres;
    struct __WiFiManagerClient { } * _wifiManagerRef;
    bool  _wifiScheduleWithRunLoop;
}

@property (nonatomic, retain) HAPWACScanRequest *activeRequest;
@property (nonatomic, retain) NSMutableArray *pendingRequests;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (getter=isScanInProgress, nonatomic, readonly) bool scanInProgres;
@property (nonatomic) struct __WiFiManagerClient { }*wifiManagerRef;
@property (nonatomic) bool wifiScheduleWithRunLoop;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)__nextRequest;
- (id)__pendingRequestWithUUID:(id)arg1;
- (void)__runRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)__stopScanRequests;
- (id)activeRequest;
- (bool)activeScan;
- (void)addRequest:(id)arg1;
- (void)cancelRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (id)init;
- (id)initPrivate;
- (bool)isScanInProgress;
- (id)pendingRequests;
- (id)queue;
- (void)scanForWACAndExtractSetupDictWithNumberOfScans:(unsigned long long)arg1 andCompletion:(id /* block */)arg2;
- (void)setActiveRequest:(id)arg1;
- (void)setPendingRequests:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setWifiManagerRef:(struct __WiFiManagerClient { }*)arg1;
- (void)setWifiScheduleWithRunLoop:(bool)arg1;
- (void)stopScanRequests;
- (struct __WiFiManagerClient { }*)wifiManagerRef;
- (bool)wifiScheduleWithRunLoop;

@end
