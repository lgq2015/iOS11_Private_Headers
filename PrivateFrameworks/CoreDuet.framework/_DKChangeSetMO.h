/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKChangeSetMO : NSManagedObject

@property (nonatomic, retain) NSData *changeSet;
@property (nonatomic, copy) NSString *ckForeignKey;
@property (nonatomic, copy) NSString *ckRecordID;
@property (nonatomic, retain) NSData *ckRecordSystemFields;
@property (nonatomic, copy) NSString *deviceIdentifier;
@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, copy) NSNumber *sequenceNumber;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic, copy) NSNumber *version;

+ (id)fetchAdditionChangeSetRequest;
+ (id)fetchDeletionChangeSetRequest;

@end
