/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPRelayRequestMessage : HMFObject {
    NSData * _body;
    HMFBlockOperation * _operation;
    NSMutableSet * _requestIdentifiers;
    double  _timeout;
    unsigned short  _transactionIdentifier;
    unsigned long long  _type;
}

@property (nonatomic, readonly, copy) NSData *body;
@property (getter=isEncrypted, nonatomic, readonly) bool encrypted;
@property (getter=isFinished, nonatomic, readonly) bool finished;
@property (nonatomic) HMFBlockOperation *operation;
@property (nonatomic, readonly) NSSet *requestIdentifiers;
@property (nonatomic, readonly) bool sent;
@property (nonatomic, readonly) double timeout;
@property (nonatomic) unsigned short transactionIdentifier;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (void)addRequestIdentifier:(id)arg1;
- (id)body;
- (id)debugDescription;
- (id)description;
- (id)initWithRequestData:(id)arg1 messageType:(unsigned long long)arg2 timeout:(double)arg3;
- (bool)isEncrypted;
- (bool)isFinished;
- (id)operation;
- (id)requestIdentifiers;
- (bool)sent;
- (void)setOperation:(id)arg1;
- (void)setTransactionIdentifier:(unsigned short)arg1;
- (id)shortDescription;
- (double)timeout;
- (unsigned short)transactionIdentifier;
- (unsigned long long)type;

@end
