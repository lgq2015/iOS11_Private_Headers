/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Engram.framework/Engram
 */

@interface ENParticipantDevice : NSObject <NSSecureCoding> {
    <ENCypher> * _cypher;
    <ENDevicePublicKey> * _devicePublicKey;
    NSData * _identifier;
}

@property (nonatomic, retain) <ENCypher> *cypher;
@property (nonatomic, readonly) <ENDevicePublicKey> *devicePublicKey;
@property (nonatomic, readonly) NSData *identifier;

// Image: /System/Library/PrivateFrameworks/Engram.framework/Engram

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cypher;
- (id)devicePublicKey;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevicePublicKey:(id)arg1 cypher:(id)arg2 identifier:(id)arg3;
- (void)setCypher:(id)arg1;
- (id)signAndConcealData:(id)arg1 withSender:(id)arg2 cypherIdentifier:(id*)arg3 error:(id*)arg4;
- (id)verifyAndRevealData:(id)arg1 withReceipient:(id)arg2 cypherIdentifier:(id)arg3 error:(id*)arg4;

// Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation

+ (id)participantDeviceFromEndpoint:(id)arg1;

@end
