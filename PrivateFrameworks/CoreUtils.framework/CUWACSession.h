/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUWACSession : NSObject {
    bool  _activateCalled;
    NSString * _configuration;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    EasyConfigDevice * _easyConfigDevice;
    struct { 
        double secondsToGetLinkUpOnDestination; 
        int wifiJoinDestinationAPError; 
        unsigned char destinationNetworkPSKInKeychain; 
        unsigned char hitJoiningDestinationAPTimeout; 
        int rssiOfDestinationAP; 
        unsigned int snrOfDestinationAP; 
        unsigned int channelOfDestinationAP; 
    }  _easyConfigPostConfigMetrics;
    int  _easyConfigPostConfigState;
    struct { 
        double startTime; 
        unsigned char userChangedFriendlyName; 
        unsigned char playPasswordSet; 
        unsigned char adminPasswordSet; 
        unsigned char destinationNetworkRecommendationUsed; 
        double secondsToGetLinkUpOnSWAP; 
        int wifiJoinSWAPError; 
        unsigned char hitJoiningTargetSWAPTimeout; 
        int rssiOfSWAP; 
        unsigned int snrOfSWAP; 
        unsigned int channelOfSWAP; 
    }  _easyConfigPreConfigMetrics;
    int  _easyConfigPreConfigState;
    int  _finishState;
    bool  _invalidateCalled;
    double  _joinSoftAPStartTime;
    int  _joinSoftAPState;
    NSString * _label;
    NSDictionary * _originalWiFiInfo;
    id /* block */  _progressHandler;
    int  _restoreOriginalWiFiState;
    double  _restoreStartTime;
    int  _saveOriginalWiFiState;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    CUWiFiDevice * _wacDevice;
}

@property (nonatomic, copy) NSString *configuration;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic, retain) CUWiFiDevice *wacDevice;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_progress:(unsigned int)arg1 info:(id)arg2;
- (void)_run;
- (int)_runEasyConfigPostConfig;
- (int)_runEasyConfigPreConfig;
- (void)_runEasyConfigPreConfigStart;
- (void)_runEasyConfigProgress:(int)arg1 info:(id)arg2;
- (int)_runFinish;
- (void)_runFinishRestored:(int)arg1;
- (int)_runJoinSoftAP;
- (void)_runJoinSoftAPFinished:(int)arg1;
- (void)_runJoinSoftAPStart;
- (int)_runRestoreOriginalWiFi;
- (void)_runRestoreOriginalWiFiFinished:(int)arg1;
- (void)_runRestoreOriginalWiFiStart;
- (int)_runSaveOriginalWiFi;
- (void)activate;
- (id)configuration;
- (void)dealloc;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (id)label;
- (id /* block */)progressHandler;
- (void)setConfiguration:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setWacDevice:(id)arg1;
- (id)wacDevice;

@end
