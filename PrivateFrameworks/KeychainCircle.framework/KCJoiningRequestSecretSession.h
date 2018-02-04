/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
 */

@interface KCJoiningRequestSecretSession : NSObject {
    NSData * _challenge;
    KCSRPClientContext * _context;
    unsigned long long  _dsid;
    NSString * _piggy_uuid;
    unsigned long long  _piggy_version;
    NSData * _salt;
    NSObject<KCJoiningRequestSecretDelegate> * _secretDelegate;
    KCAESGCMDuplexSession * _session;
    int  _state;
}

@property (retain) NSData *challenge;
@property (readonly) KCSRPClientContext *context;
@property (readonly) unsigned long long dsid;
@property (retain) NSString *piggy_uuid;
@property unsigned long long piggy_version;
@property (retain) NSData *salt;
@property (readonly) NSObject<KCJoiningRequestSecretDelegate> *secretDelegate;
@property (readonly) KCAESGCMDuplexSession *session;
@property (readonly) int state;

+ (id)sessionWithSecretDelegate:(id)arg1 dsid:(unsigned long long)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)challenge;
- (id)context;
- (id)copyResponseForChallenge:(id)arg1 salt:(id)arg2 secret:(id)arg3 error:(id*)arg4;
- (id)copyResponseForSecret:(id)arg1 error:(id*)arg2;
- (id)description;
- (unsigned long long)dsid;
- (id)handleChallenge:(id)arg1 error:(id*)arg2;
- (id)handleChallenge:(id)arg1 secret:(id)arg2 error:(id*)arg3;
- (id)handleChallengeData:(id)arg1 secret:(id)arg2 error:(id*)arg3;
- (id)handleVerification:(id)arg1 error:(id*)arg2;
- (id)initWithSecretDelegate:(id)arg1 dsid:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithSecretDelegate:(id)arg1 dsid:(unsigned long long)arg2 rng:(struct ccrng_state { int (*x1)(); }*)arg3 error:(id*)arg4;
- (id)initialMessage:(id*)arg1;
- (bool)isDone;
- (id)piggy_uuid;
- (unsigned long long)piggy_version;
- (id)processMessage:(id)arg1 error:(id*)arg2;
- (id)salt;
- (id)secretDelegate;
- (id)session;
- (void)setChallenge:(id)arg1;
- (void)setPiggy_uuid:(id)arg1;
- (void)setPiggy_version:(unsigned long long)arg1;
- (void)setSalt:(id)arg1;
- (bool)setupSession:(id*)arg1;
- (int)state;
- (id)stateString;

@end