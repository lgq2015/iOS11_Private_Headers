/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVCRateController : NSObject {
    AVCBasebandCongestionDetector * _basebandCongestionDetector;
    unsigned int  _burstPacketLoss;
    struct AVCRateControlConfig { 
        unsigned int mode; 
        unsigned int localRadioAccessTechnology; 
        unsigned int remoteRadioAccessTechnology; 
        unsigned int maxBitrate; 
        unsigned int minBitrate; 
    }  _configuration;
    unsigned int  _dumpID;
    AVCRateControlFeedbackController * _feedbackController;
    bool  _isBasebandEnabled;
    bool  _isDumpFileEnabled;
    bool  _isNetworkCongested;
    bool  _isPeriodicLoggingEnabled;
    void * _logBasebandDump;
    void * _logDump;
    void * _logFeedbackDump;
    VCRateControlMediaController * _mediaController;
    unsigned int  _packetLossPercentage;
    unsigned int  _rateChangeCounter;
    <VCRateControlAlgorithm> * _rateControlAlgorithm;
    id  _rateControllerDelegate;
    NSObject<OS_dispatch_queue> * _rateControllerQueue;
    unsigned int  _roundTripTimeMilliseconds;
    AVCStatisticsCollector * _statisticsCollector;
    unsigned int  _targetBitrate;
}

@property (nonatomic, retain) AVCBasebandCongestionDetector *basebandCongestionDetector;
@property (nonatomic, retain) AVCRateControlFeedbackController *feedbackController;
@property (nonatomic, retain) VCRateControlMediaController *mediaController;
@property (nonatomic, retain) AVCStatisticsCollector *statisticsCollector;
@property (nonatomic, readonly) unsigned int targetBitrate;

- (id)basebandCongestionDetector;
- (void)configure:(struct AVCRateControlConfig { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1;
- (void)configureAlgorithmWithRestart:(bool)arg1;
- (void)configureWithOperatingMode:(int)arg1 isLocalCellular:(bool)arg2 localCellTech:(int)arg3 isRemoteCellular:(bool)arg4 remoteCellTech:(int)arg5 bitrateCap:(unsigned int)arg6;
- (void)createBasebandLogDumpFile;
- (void)createLogDumpFiles:(unsigned int)arg1;
- (void)createVCRateControlAlgorithmWithConfiguration:(struct VCRateControlAlgorithmConfig { unsigned int *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; int x23; double x24; double x25; double x26; double x27; double x28; double x29; double x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; bool x35; int x36; bool x37; double x38; double x39; double x40; double x41; double x42; double x43; double x44; double x45; double x46; double x47; })arg1;
- (void)dealloc;
- (void)doRateControlWithBasebandStatistics:(struct { int x1; double x2; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; double x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; BOOL x_1_2_10[64]; } x_3_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; } x_3_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; unsigned int x_3_2_4; } x_3_1_3; struct { bool x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; double x_4_2_4; unsigned int x_4_2_5; } x_3_1_4; struct { unsigned int x_5_2_1; unsigned int x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; double x_5_2_5; } x_3_1_5; struct { unsigned int x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; double x_6_2_4; } x_3_1_6; struct { unsigned int x_7_2_1; unsigned int x_7_2_2; double x_7_2_3; } x_3_1_7; struct { unsigned int x_8_2_1; unsigned int x_8_2_2; double x_8_2_3; } x_3_1_8; struct { unsigned int x_9_2_1; unsigned int x_9_2_2; unsigned int x_9_2_3; unsigned int x_9_2_4; } x_3_1_9; } x3; })arg1;
- (void)doRateControlWithStatistics:(struct { int x1; double x2; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; double x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; BOOL x_1_2_10[64]; } x_3_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; } x_3_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; unsigned int x_3_2_4; } x_3_1_3; struct { bool x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; double x_4_2_4; unsigned int x_4_2_5; } x_3_1_4; struct { unsigned int x_5_2_1; unsigned int x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; double x_5_2_5; } x_3_1_5; struct { unsigned int x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; double x_6_2_4; } x_3_1_6; struct { unsigned int x_7_2_1; unsigned int x_7_2_2; double x_7_2_3; } x_3_1_7; struct { unsigned int x_8_2_1; unsigned int x_8_2_2; double x_8_2_3; } x_3_1_8; struct { unsigned int x_9_2_1; unsigned int x_9_2_2; unsigned int x_9_2_3; unsigned int x_9_2_4; } x_3_1_9; } x3; })arg1;
- (id)feedbackController;
- (id)indicatorFromRadioTech:(unsigned int)arg1;
- (id)initWithDelegate:(id)arg1 dumpID:(unsigned int)arg2;
- (int)initialBitrateTierFromLearntBitrateWithLocalTechnology:(unsigned int)arg1 remoteTech:(unsigned int)arg2 defaultTier:(int)arg3;
- (int)maxTierBelowBitrate:(unsigned int)arg1 maxTierIndex:(int)arg2 minTierIndex:(int)arg3;
- (id)mediaController;
- (int)minTierAboveBitrate:(unsigned int)arg1 maxTierIndex:(int)arg2 minTierIndex:(int)arg3;
- (void)printBasebandNotificationStatistics:(struct { int x1; double x2; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; double x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; BOOL x_1_2_10[64]; } x_3_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; } x_3_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; unsigned int x_3_2_4; } x_3_1_3; struct { bool x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; double x_4_2_4; unsigned int x_4_2_5; } x_3_1_4; struct { unsigned int x_5_2_1; unsigned int x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; double x_5_2_5; } x_3_1_5; struct { unsigned int x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; double x_6_2_4; } x_3_1_6; struct { unsigned int x_7_2_1; unsigned int x_7_2_2; double x_7_2_3; } x_3_1_7; struct { unsigned int x_8_2_1; unsigned int x_8_2_2; double x_8_2_3; } x_3_1_8; struct { unsigned int x_9_2_1; unsigned int x_9_2_2; unsigned int x_9_2_3; unsigned int x_9_2_4; } x_3_1_9; } x3; })arg1;
- (void)printFeedbackMessage:(struct { int x1; double x2; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; double x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; BOOL x_1_2_10[64]; } x_3_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; } x_3_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; unsigned int x_3_2_4; } x_3_1_3; struct { bool x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; double x_4_2_4; unsigned int x_4_2_5; } x_3_1_4; struct { unsigned int x_5_2_1; unsigned int x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; double x_5_2_5; } x_3_1_5; struct { unsigned int x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; double x_6_2_4; } x_3_1_6; struct { unsigned int x_7_2_1; unsigned int x_7_2_2; double x_7_2_3; } x_3_1_7; struct { unsigned int x_8_2_1; unsigned int x_8_2_2; double x_8_2_3; } x_3_1_8; struct { unsigned int x_9_2_1; unsigned int x_9_2_2; unsigned int x_9_2_3; unsigned int x_9_2_4; } x_3_1_9; } x3; })arg1;
- (unsigned int)radioAccessTechnologyFromAVConferenceCellTech:(int)arg1 isCellular:(bool)arg2;
- (unsigned int)rateControlModeFromAVConferenceOperatingMode:(int)arg1;
- (void)releaseLogDumpFiles;
- (void)reportNetworkStatistics;
- (void)reportTargetBitrateChange:(unsigned int)arg1 rateChangeCounter:(unsigned int)arg2;
- (void)setBasebandCongestionDetector:(id)arg1;
- (void)setDefaultAlgorithmConfiguration:(struct VCRateControlAlgorithmConfig { unsigned int *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; int x23; double x24; double x25; double x26; double x27; double x28; double x29; double x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; bool x35; int x36; bool x37; double x38; double x39; double x40; double x41; double x42; double x43; double x44; double x45; double x46; double x47; }*)arg1;
- (void)setFeedbackController:(id)arg1;
- (void)setMediaController:(id)arg1;
- (void)setStatisticsCollector:(id)arg1;
- (id)statisticsCollector;
- (unsigned int)targetBitrate;

@end
