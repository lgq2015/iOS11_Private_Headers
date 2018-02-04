/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLTransientOrderKey : NSObject {
    NSManagedObjectContext * _moc;
    NSManagedObjectID * _objectID;
    long long  _orderValue;
}

@property (nonatomic, retain) NSManagedObjectContext *moc;
@property (nonatomic, retain) NSManagedObjectID *objectID;
@property (nonatomic) long long orderValue;

- (id)childManagedObject;
- (void)dealloc;
- (id)description;
- (id)moc;
- (id)objectID;
- (long long)orderValue;
- (id)secondaryOrderSortKey;
- (void)setMoc:(id)arg1;
- (void)setObjectID:(id)arg1;
- (void)setOrderValue:(long long)arg1;

@end
