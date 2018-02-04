/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMAction : NSObject <HMObjectMerge> {
    HMActionSet * _actionSet;
    unsigned long long  _actionType;
    NSObject<OS_dispatch_queue> * _clientQueue;
    HMDelegateCaller * _delegateCaller;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSUUID * _uniqueIdentifier;
    NSUUID * _uuid;
}

@property (nonatomic) HMActionSet *actionSet;
@property (nonatomic) unsigned long long actionType;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) HMDelegateCaller *delegateCaller;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, retain) NSUUID *uuid;

+ (id)_actionWithInfo:(id)arg1 home:(id)arg2;
+ (id)_lookupActionWithInfo:(id)arg1 inArray:(id)arg2;

- (void).cxx_destruct;
- (void)_configure:(id)arg1 actionSet:(id)arg2 clientQueue:(id)arg3 delegateCaller:(id)arg4;
- (bool)_handleUpdates:(id)arg1;
- (void)_invalidate;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)_serializeForAdd;
- (id)actionSet;
- (unsigned long long)actionType;
- (id)clientQueue;
- (id)delegateCaller;
- (id)init;
- (id)propertyQueue;
- (void)setActionSet:(id)arg1;
- (void)setActionType:(unsigned long long)arg1;
- (void)setClientQueue:(id)arg1;
- (void)setDelegateCaller:(id)arg1;
- (void)setPropertyQueue:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uniqueIdentifier;
- (id)uuid;

@end
