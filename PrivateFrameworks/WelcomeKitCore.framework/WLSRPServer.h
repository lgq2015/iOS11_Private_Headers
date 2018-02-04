/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

@interface WLSRPServer : NSObject {
    NSData * _hashOfProofOfMatch_HAMK;
    NSData * _salt_s;
    NSData * _serverPublicKey_B;
    struct srp_st { int x1; int x2; struct cstr_st {} *x3; void *x4; void *x5; struct cstr_st {} *x6; void *x7; void *x8; void *x9; void *x10; void *x11; void *x12; struct cstr_st {} *x13; struct srp_meth_st {} *x14; void *x15; void *x16; void *x17; int (*x18)(); struct srp_server_lu_st {} *x19; } * _session;
    NSData * _sharedKey_K;
}

@property (nonatomic, readonly) NSData *hashOfProofOfMatch_HAMK;
@property (nonatomic, readonly) NSData *salt_s;
@property (nonatomic, readonly) NSData *serverPublicKey_B;
@property (nonatomic, readonly) NSData *sharedKey_K;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)didReceiveClientPublicKey_A:(id)arg1 proofOfMatch_M:(id)arg2;
- (id)hashOfProofOfMatch_HAMK;
- (id)hmacDataForData:(id)arg1;
- (id)initWithUsername:(id)arg1 password:(id)arg2;
- (bool)isHmacData:(id)arg1 validForData:(id)arg2;
- (id)salt_s;
- (id)serverPublicKey_B;
- (id)sharedKey_K;

@end
