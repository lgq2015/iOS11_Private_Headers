/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSgPTPFDEtEPort : TSgPTPNetworkPort

@property (nonatomic, readonly) TSgPTPPortStatistics *statistics;

+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;

- (id)statistics;

@end
