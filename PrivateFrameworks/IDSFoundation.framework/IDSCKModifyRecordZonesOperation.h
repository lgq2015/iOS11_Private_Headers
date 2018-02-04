/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSCKModifyRecordZonesOperation : IDSCKDatabaseOperation {
    id /* block */  _modifyRecordZonesCompletionBlock;
    NSArray * _recordZoneIDsToDelete;
    NSArray * _recordZonesToSave;
}

@property (nonatomic, copy) id /* block */ modifyRecordZonesCompletionBlock;
@property (nonatomic, copy) NSArray *recordZoneIDsToDelete;
@property (nonatomic, copy) NSArray *recordZonesToSave;

+ (Class)__class;
+ (id)alloc;

- (void).cxx_destruct;
- (id /* block */)modifyRecordZonesCompletionBlock;
- (id)recordZoneIDsToDelete;
- (id)recordZonesToSave;
- (void)setModifyRecordZonesCompletionBlock:(id /* block */)arg1;
- (void)setRecordZoneIDsToDelete:(id)arg1;
- (void)setRecordZonesToSave:(id)arg1;

@end
