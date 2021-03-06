/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDAssetRecord : NSObject {
    NSMutableDictionary * _itemsByRecordKey;
    CKRecordID * _recordID;
    NSString * _recordType;
    NSMutableDictionary * _sectionItemsByRecordKey;
    NSNumber * _sizeUpperBoundNumber;
}

@property (nonatomic, readonly) NSArray *allMMCSItems;
@property (nonatomic, readonly) NSArray *allMMCSSectionItems;
@property (nonatomic, retain) NSMutableDictionary *itemsByRecordKey;
@property (nonatomic, readonly) CKRecordID *recordID;
@property (nonatomic, readonly) NSString *recordType;
@property (nonatomic, retain) NSMutableDictionary *sectionItemsByRecordKey;
@property (readonly) unsigned int sizeUpperBound;
@property (nonatomic, retain) NSNumber *sizeUpperBoundNumber;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)addMMCSItem:(id)arg1;
- (void)addMMCSSectionItem:(id)arg1;
- (id)allMMCSAndSectionItems;
- (id)allMMCSAndSectionItemsWithRecordKey:(id)arg1;
- (id)allMMCSItems;
- (id)allMMCSSectionItems;
- (id)allRecordKeys;
- (id)description;
- (id)firstMMCSItemError;
- (id)firstMMCSSectionItemError;
- (id)initWithRecordType:(id)arg1 recordID:(id)arg2;
- (bool)isPackageSectionRecord;
- (id)itemsByRecordKey;
- (id)recordID;
- (id)recordType;
- (id)sectionItemsByRecordKey;
- (void)setItemsByRecordKey:(id)arg1;
- (void)setSectionItemsByRecordKey:(id)arg1;
- (void)setSizeUpperBoundNumber:(id)arg1;
- (unsigned int)sizeUpperBound;
- (id)sizeUpperBoundNumber;

@end
