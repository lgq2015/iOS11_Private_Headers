/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFLibrarySearchableIndexVerificationData : NSObject <NSCopying> {
    NSNumber * _contentIndexTransactionId;
    NSDate * _dateReceived;
    NSString * _deleted;
    NSNumber * _flags;
    NSNumber * _indexedAsEmptySubject;
    NSString * _subject;
    NSArray * _toEmailAddresses;
    NSDictionary * _userInfo;
}

@property (nonatomic, retain) NSNumber *contentIndexTransactionId;
@property (nonatomic, retain) NSDate *dateReceived;
@property (nonatomic, copy) NSString *deleted;
@property (nonatomic, retain) NSNumber *flags;
@property (nonatomic, retain) NSNumber *indexedAsEmptySubject;
@property (nonatomic, copy) NSString *subject;
@property (nonatomic, copy) NSArray *toEmailAddresses;
@property (nonatomic, copy) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)contentIndexTransactionId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateReceived;
- (id)deleted;
- (id)flags;
- (id)indexedAsEmptySubject;
- (void)setContentIndexTransactionId:(id)arg1;
- (void)setDateReceived:(id)arg1;
- (void)setDeleted:(id)arg1;
- (void)setFlags:(id)arg1;
- (void)setIndexedAsEmptySubject:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setToEmailAddresses:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)subject;
- (id)toEmailAddresses;
- (id)userInfo;

@end
