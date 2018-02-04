/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSDataStoreReceipt : NSObject {
    NSArray * _addedObjects;
    NSArray * _removedObjects;
    NSArray * _replacedObjects;
    NSArray * _replacementObjects;
}

@property (nonatomic, readonly) NSArray *addedObjects;
@property (nonatomic, readonly) NSArray *removedObjects;
@property (nonatomic, readonly) NSArray *replacedObjects;
@property (nonatomic, readonly) NSArray *replacementObjects;

+ (id)receiptWithAddedObjects:(id)arg1 replacedObjects:(id)arg2 replacementObjects:(id)arg3 removedObjects:(id)arg4;

- (void).cxx_destruct;
- (id)addedObjects;
- (bool)hasChanges;
- (id)initWithAddedObjects:(id)arg1 replacedObjects:(id)arg2 replacementObjects:(id)arg3 removedObjects:(id)arg4;
- (id)removedObjects;
- (id)replacedObjects;
- (id)replacementObjects;

@end
