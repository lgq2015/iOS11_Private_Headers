/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCDASampleSyncEntity : HDSampleSyncEntity

+ (id)_objectWithCodable:(id)arg1;
+ (Class)healthEntityClass;
+ (int)nanoSyncObjectType;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (bool)supportsSpeculativeNanoSyncChanges;
+ (long long)syncEntityType;

@end