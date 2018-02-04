/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKCircleRequestPayload : NSObject <NSSecureCoding> {
    NSString * _altDSID;
    unsigned long long  _circleStep;
    long long  _clientErrorCode;
    NSData * _clientInfo;
    NSDictionary * _responseInfo;
    AKPushMessage * _responseMessage;
    NSString * _serverInfo;
    NSString * _transactionId;
}

@property (nonatomic, retain) NSString *altDSID;
@property (nonatomic) unsigned long long circleStep;
@property (nonatomic) long long clientErrorCode;
@property (nonatomic, retain) NSData *clientInfo;
@property (nonatomic, retain) NSDictionary *responseInfo;
@property (nonatomic, retain) AKPushMessage *responseMessage;
@property (nonatomic, retain) NSString *serverInfo;
@property (nonatomic, readonly) NSString *serverMachineId;
@property (nonatomic, retain) NSString *transactionId;

+ (id)payloadWithMessage:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)altDSID;
- (unsigned long long)circleStep;
- (long long)clientErrorCode;
- (id)clientInfo;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isAcceptingPayload;
- (bool)isRequestingPayload;
- (id)replyPayload;
- (id)responseInfo;
- (id)responseMessage;
- (id)serverInfo;
- (id)serverMachineId;
- (void)setAltDSID:(id)arg1;
- (void)setCircleStep:(unsigned long long)arg1;
- (void)setClientErrorCode:(long long)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setResponseInfo:(id)arg1;
- (void)setResponseMessage:(id)arg1;
- (void)setServerInfo:(id)arg1;
- (void)setTransactionId:(id)arg1;
- (id)transactionId;

@end
