/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSTransactionLogMessage : NSObject {
    NSString * _accountUniqueID;
    NSString * _fromID;
    NSString * _loginID;
    NSString * _serviceName;
}

@property (nonatomic, readonly) NSString *accountUniqueID;
@property (nonatomic, readonly) NSString *fromID;
@property (nonatomic, readonly) NSString *loginID;
@property (nonatomic, readonly) NSString *serviceName;

+ (id)transactionLogMessageFromDictionaryRepresentation:(id)arg1;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_initWithAccountUniqueID:(id)arg1 fromID:(id)arg2 loginID:(id)arg3 serviceName:(id)arg4;
- (id)accountUniqueID;
- (id)dictionaryRepresentation;
- (id)fromID;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)loginID;
- (id)serviceName;

@end
