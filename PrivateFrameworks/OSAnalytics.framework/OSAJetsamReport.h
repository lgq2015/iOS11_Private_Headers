/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
 */

@interface OSAJetsamReport : OSAAppleErrorReport <ConcreteReport> {
    unsigned long long  _event_code;
    NSString * _event_reason;
    bool  _isSuspendedOnlyJetsam;
    NSMutableArray * _killedActiveApps;
    unsigned int  _killed_or_suspended_count;
    NSString * _largestActiveApp;
    NSString * _largestProcess;
    struct jetsam_snapshot { unsigned long long x1; unsigned long long x2; unsigned long long x3; struct memorystatus_kernel_stats { unsigned int x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; unsigned int x_4_1_4; unsigned int x_4_1_5; unsigned int x_4_1_6; unsigned int x_4_1_7; unsigned int x_4_1_8; unsigned int x_4_1_9; unsigned int x_4_1_10; unsigned long long x_4_1_11; unsigned long long x_4_1_12; unsigned long long x_4_1_13; unsigned long long x_4_1_14; unsigned long long x_4_1_15; unsigned long long x_4_1_16; BOOL x_4_1_17[80]; } x4; unsigned long long x5; struct jetsam_snapshot_entry { int x_6_1_1; BOOL x_6_1_2[33]; int x_6_1_3; unsigned int x_6_1_4; unsigned int x_6_1_5; unsigned char x_6_1_6[16]; unsigned long long x_6_1_7; unsigned long long x_6_1_8; unsigned long long x_6_1_9; unsigned long long x_6_1_10; unsigned long long x_6_1_11; unsigned long long x_6_1_12; unsigned long long x_6_1_13; unsigned long long x_6_1_14; unsigned long long x_6_1_15; unsigned long long x_6_1_16; unsigned long long x_6_1_17; unsigned long long x_6_1_18; unsigned long long x_6_1_19; unsigned long long x_6_1_20; unsigned long long x_6_1_21; unsigned long long x_6_1_22; unsigned long long x_6_1_23; unsigned long long x_6_1_24; unsigned long long x_6_1_25; unsigned long long x_6_1_26; struct timeval { long long x_27_2_1; int x_27_2_2; } x_6_1_27; } x6[0]; } * _snapshot;
    unsigned long long  _wiredBytes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)_daysSince1970;

- (void).cxx_destruct;
- (void)_getSnapshotWithFlags:(unsigned int)arg1;
- (void)_setDumpedSuspendedJetsamLog;
- (void)acquireJetsamData;
- (bool)alreadyDumpedSuspendedJetsamLogToday;
- (id)appleCareDetails;
- (void)dealloc;
- (void)generateLogAtLevel:(bool)arg1 withBlock:(id /* block */)arg2;
- (id)initWithIncidentID:(id)arg1;
- (bool)isActionable;
- (id)problemType;
- (id)reportNamePrefix;

@end
