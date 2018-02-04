/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFLibrarySearchableIndexClientState : NSObject {
    NSString * _systemBuildVersion;
    long long  _transaction;
    NSDate * _transactionDate;
    NSNumber * _transactionValue;
}

@property (nonatomic, copy) NSString *systemBuildVersion;
@property (nonatomic) long long transaction;
@property (nonatomic, retain) NSDate *transactionDate;
@property (nonatomic, readonly) NSNumber *transactionValue;

+ (id)clientState;
+ (id)clientStateFromData:(id)arg1;

- (id)archiveRepresentation;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (void)setSystemBuildVersion:(id)arg1;
- (void)setTransaction:(long long)arg1;
- (void)setTransactionDate:(id)arg1;
- (id)systemBuildVersion;
- (long long)transaction;
- (id)transactionDate;
- (id)transactionValue;

@end
