/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
 */

@interface CDBCommonEntityFunctionalityHandler : NSObject {
    NSMutableSet * _destructionObservers;
    NSObject<OS_dispatch_queue> * _lock;
}

@property (nonatomic, retain) NSMutableSet *destructionObservers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *lock;

+ (void)_notifyDestructionObservers:(id)arg1;

- (void).cxx_destruct;
- (void)addDestructionObserver:(struct CalRelation { }*)arg1;
- (void)dealloc;
- (id)destructionObservers;
- (id)init;
- (id)lock;
- (void)notifyOfEntityDestruction;
- (void)removeDestructionObserver:(struct CalRelation { }*)arg1;
- (void)setDestructionObservers:(id)arg1;
- (void)setLock:(id)arg1;

@end
