/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface jprL7AuZZkLkFoBK : NSObject {
    NSString * _FPANSuffix;
    NSData * _challengeResponse;
    unsigned long long  _eventFrequency;
    NSData * _hostChallenge;
    NSSet * _identities;
    NSData * _nonce;
    NSString * _phoneNumber;
    NSString * _seid;
    NSString * _serverEndpointIdentifier;
}

@property (nonatomic, retain) NSString *FPANSuffix;
@property (nonatomic, retain) NSData *challengeResponse;
@property (nonatomic) unsigned long long eventFrequency;
@property (nonatomic, retain) NSData *hostChallenge;
@property (nonatomic, retain) NSSet *identities;
@property (nonatomic, retain) NSData *nonce;
@property (nonatomic, retain) NSString *phoneNumber;
@property (nonatomic, retain) NSString *seid;
@property (nonatomic, retain) NSString *serverEndpointIdentifier;

- (void).cxx_destruct;
- (id)FPANSuffix;
- (id)challengeResponse;
- (unsigned long long)eventFrequency;
- (id)hostChallenge;
- (id)identities;
- (id)initWithNonce:(id)arg1 hostChallenge:(id)arg2 challengeResponse:(id)arg3 seid:(id)arg4;
- (id)initWithNonce:(id)arg1 serverEndpointIdentifier:(id)arg2 hostChallenge:(id)arg3 challengeResponse:(id)arg4 seid:(id)arg5;
- (id)initWithServerEndpointIdentifier:(id)arg1;
- (id)nonce;
- (id)phoneNumber;
- (id)seid;
- (id)serverEndpointIdentifier;
- (void)setChallengeResponse:(id)arg1;
- (void)setEventFrequency:(unsigned long long)arg1;
- (void)setFPANSuffix:(id)arg1;
- (void)setHostChallenge:(id)arg1;
- (void)setIdentities:(id)arg1;
- (void)setNonce:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setSeid:(id)arg1;
- (void)setServerEndpointIdentifier:(id)arg1;

@end
