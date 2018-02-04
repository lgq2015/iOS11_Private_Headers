/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCWebAccessEntry : NSObject {
    NSString * _email;
    NSString * _identifier;
    NSDate * _lastRetryAttemptTime;
    NSString * _purchaseID;
    NSString * _purchaseReceipt;
    NSString * _tagID;
}

@property (nonatomic, copy) NSString *email;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDate *lastRetryAttemptTime;
@property (nonatomic, copy) NSString *purchaseID;
@property (nonatomic, copy) NSString *purchaseReceipt;
@property (nonatomic, copy) NSString *tagID;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)email;
- (id)identifier;
- (id)initWithEntryID:(id)arg1 dictionaryRepresentation:(id)arg2;
- (id)initWithEntryID:(id)arg1 tagID:(id)arg2 purchaseID:(id)arg3 lastRetryAttemptTime:(id)arg4 email:(id)arg5 purchaseReceipt:(id)arg6;
- (id)lastRetryAttemptTime;
- (id)purchaseID;
- (id)purchaseReceipt;
- (void)setEmail:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLastRetryAttemptTime:(id)arg1;
- (void)setPurchaseID:(id)arg1;
- (void)setPurchaseReceipt:(id)arg1;
- (void)setTagID:(id)arg1;
- (id)tagID;

@end
