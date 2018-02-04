/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCReadingListEntry : NSObject {
    NSString * _articleID;
    NSDate * _dateAdded;
    NSString * _identifier;
    unsigned long long  _origin;
}

@property (nonatomic, readonly, copy) NSString *articleID;
@property (nonatomic, readonly) CKRecord *asCKRecord;
@property (nonatomic, readonly) NSDate *dateAdded;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) unsigned long long origin;

- (void).cxx_destruct;
- (id)articleID;
- (id)asCKRecord;
- (id)dateAdded;
- (id)dictionaryRepresentation;
- (id)identifier;
- (id)initWithEntryID:(id)arg1 articleID:(id)arg2 dateAdded:(id)arg3 origin:(unsigned long long)arg4;
- (id)initWithEntryID:(id)arg1 dictionaryRepresentation:(id)arg2;
- (unsigned long long)origin;

@end
