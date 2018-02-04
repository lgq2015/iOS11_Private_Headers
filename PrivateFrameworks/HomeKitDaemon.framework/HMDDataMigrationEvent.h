/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDataMigrationEvent : HMDLogEvent <HMDAWDLogEvent> {
    AWDHomeKitDataModelMigration * _metric;
    unsigned long long  _migrationEnd;
    unsigned long long  _migrationStart;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AWDHomeKitDataModelMigration *metric;
@property (nonatomic, readonly) unsigned long long migrationEnd;
@property (nonatomic, readonly) unsigned long long migrationStart;
@property (readonly) Class superclass;

+ (id)uuid;

- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (id)init;
- (id)metric;
- (id)metricForAWD;
- (void)migrationCompleted;
- (unsigned long long)migrationDurationInMilliseconds;
- (unsigned long long)migrationEnd;
- (unsigned long long)migrationStart;

@end
