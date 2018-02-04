/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTAWDMetric : NSObject {
    PBCodable * _metric;
    AWDMetricContainer * _metricContainer;
}

@property (nonatomic, readonly, retain) PBCodable *metric;

+ (id)metricForDelayWithID:(unsigned int)arg1 class:(Class)arg2;
+ (id)metricForDelayWithID:(unsigned int)arg1 class:(Class)arg2 sectionID:(id)arg3 publisherMatchID:(id)arg4 companionPublicationDate:(id)arg5 isGizmoDate:(bool)arg6 startTime:(id)arg7 now:(id)arg8;
+ (id)metricForDelayWithID:(unsigned int)arg1 class:(Class)arg2 sectionID:(id)arg3 publisherMatchID:(id)arg4 companionPublicationDate:(id)arg5 startTime:(id)arg6 now:(id)arg7;
+ (id)metricForDelayWithID:(unsigned int)arg1 class:(Class)arg2 sectionID:(id)arg3 publisherMatchID:(id)arg4 companionPublicationDate:(id)arg5 startTime:(id)arg6 now:(id)arg7 connectionStatus:(unsigned long long)arg8;
+ (id)metricForDelayWithID:(unsigned int)arg1 class:(Class)arg2 sectionID:(id)arg3 publisherMatchID:(id)arg4 companionPublicationDate:(id)arg5 startTime:(id)arg6 now:(id)arg7 connectionStatus:(unsigned long long)arg8 hasPublicationDate:(bool)arg9;
+ (void)submitMetricForDelayAckFromSecondaryDeviceWithSectionID:(id)arg1 publisherMatchID:(id)arg2 companionPublicationDate:(id)arg3 startTime:(id)arg4 connectionStatus:(unsigned long long)arg5 origConnectionStatus:(unsigned long long)arg6 timedOut:(bool)arg7;
+ (void)submitMetricForDelayToSyncWithStartTime:(id)arg1 initial:(bool)arg2;
+ (void)submitMetricForDelayWithID:(unsigned int)arg1 class:(Class)arg2 sectionID:(id)arg3 publisherMatchID:(id)arg4 companionPublicationDate:(id)arg5 isGizmoDate:(bool)arg6 startTime:(id)arg7;
+ (void)submitMetricForDelayWithID:(unsigned int)arg1 class:(Class)arg2 sectionID:(id)arg3 publisherMatchID:(id)arg4 companionPublicationDate:(id)arg5 startTime:(id)arg6;
+ (void)submitMetricForDelayWithID:(unsigned int)arg1 class:(Class)arg2 sectionID:(id)arg3 publisherMatchID:(id)arg4 companionPublicationDate:(id)arg5 startTime:(id)arg6 connectionStatus:(unsigned long long)arg7;
+ (void)submitMetricForDelayWithID:(unsigned int)arg1 class:(Class)arg2 sectionID:(id)arg3 publisherMatchID:(id)arg4 companionPublicationDate:(id)arg5 startTime:(id)arg6 connectionStatus:(unsigned long long)arg7 hasPublicationDate:(bool)arg8;
+ (void)submitMetricForDelayWithID:(unsigned int)arg1 class:(Class)arg2 startTime:(id)arg3;

- (void).cxx_destruct;
- (void)_setDelayFrom:(id)arg1 to:(id)arg2;
- (void)_submit;
- (id)initWithMetricID:(unsigned int)arg1 class:(Class)arg2;
- (id)metric;

@end
