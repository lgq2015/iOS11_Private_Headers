/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSgPTPFDPtPPort : TSgPTPNetworkPort

@property (nonatomic, readonly) BOOL localPDelayLogMeanInterval;
@property (nonatomic, readonly) BOOL remotePDelayLogMeanInterval;
@property (nonatomic, readonly) TSgPTPPortStatistics *statistics;

+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;

- (BOOL)localPDelayLogMeanInterval;
- (BOOL)remotePDelayLogMeanInterval;
- (id)statistics;

@end
