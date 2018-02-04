/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPRelayResponseMessage : HMFObject {
    NSData * _body;
    HAPRelayRequestMessage * _request;
    long long  _statusCode;
    unsigned long long  _type;
}

@property (nonatomic, retain) NSData *body;
@property (getter=isEncrypted, nonatomic, readonly) bool encrypted;
@property (nonatomic, readonly) HAPRelayRequestMessage *request;
@property (nonatomic, readonly) long long statusCode;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (bool)_deserializeResponseMessage:(id)arg1;
- (id)body;
- (id)debugDescription;
- (id)description;
- (id)initWithRequest:(id)arg1 serializedMessage:(id)arg2;
- (bool)isEncrypted;
- (id)request;
- (void)setBody:(id)arg1;
- (id)shortDescription;
- (long long)statusCode;
- (unsigned long long)type;

@end
