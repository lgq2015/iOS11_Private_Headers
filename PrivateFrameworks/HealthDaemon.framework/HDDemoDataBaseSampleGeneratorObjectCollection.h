/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDemoDataBaseSampleGeneratorObjectCollection : NSObject {
    NSMutableArray * _objectsFromPhone;
    NSMutableDictionary * _objectsFromPhoneApps;
    NSMutableArray * _objectsFromWatch;
    NSMutableDictionary * _workoutUUIDToAssocatedObjectUUIDs;
}

- (void).cxx_destruct;
- (void)addObjectFromPhone:(id)arg1;
- (void)addObjectFromWatch:(id)arg1;
- (void)addObjects:(id)arg1 fromPhoneAppWithBundleIdentifier:(id)arg2;
- (void)addObjectsFromPhone:(id)arg1;
- (void)addObjectsFromWatch:(id)arg1;
- (void)enumerateWorkoutAssociations:(id /* block */)arg1;
- (id)init;
- (id)objectsFromPhone;
- (id)objectsFromPhoneApps;
- (id)objectsFromWatch;
- (void)setAssociatedObjectUUIDs:(id)arg1 forWorkoutUUID:(id)arg2;

@end
