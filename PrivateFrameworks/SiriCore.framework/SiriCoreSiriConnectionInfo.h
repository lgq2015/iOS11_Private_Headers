/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

@interface SiriCoreSiriConnectionInfo : NSObject {
    NSString * _aceHost;
    NSString * _assistantIdentifier;
    NSString * _connectionId;
    SAConnectionPolicyRoute * _connectionPolicyRoute;
    bool  _imposePolicyBan;
    NSString * _languageCode;
    NSString * _peerAssistantIdentifier;
    bool  _prefersWWAN;
    bool  _requiresURLSession;
    bool  _skipEdge;
    bool  _skipPeer;
    NSError * _skipPeerErrorReason;
    double  _timeout;
    NSURL * _url;
}

@property (nonatomic, copy) NSString *aceHost;
@property (nonatomic, copy) NSString *assistantIdentifier;
@property (nonatomic, copy) NSString *connectionId;
@property (nonatomic, copy) SAConnectionPolicyRoute *connectionPolicyRoute;
@property (nonatomic) bool imposePolicyBan;
@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic, copy) NSString *peerAssistantIdentifier;
@property (nonatomic) bool prefersWWAN;
@property (nonatomic) bool requiresURLSession;
@property (nonatomic) bool skipEdge;
@property (nonatomic) bool skipPeer;
@property (nonatomic, copy) NSError *skipPeerErrorReason;
@property (nonatomic) double timeout;
@property (nonatomic, copy) NSURL *url;

- (void).cxx_destruct;
- (void)_appendPotentiallyNilString:(id)arg1 toMutableString:(id)arg2;
- (id)aceHost;
- (id)assistantIdentifier;
- (id)connectionId;
- (id)connectionPolicyRoute;
- (id)description;
- (bool)imposePolicyBan;
- (id)languageCode;
- (id)peerAssistantIdentifier;
- (bool)prefersWWAN;
- (bool)requiresURLSession;
- (void)setAceHost:(id)arg1;
- (void)setAssistantIdentifier:(id)arg1;
- (void)setConnectionId:(id)arg1;
- (void)setConnectionPolicyRoute:(id)arg1;
- (void)setImposePolicyBan:(bool)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setPeerAssistantIdentifier:(id)arg1;
- (void)setPrefersWWAN:(bool)arg1;
- (void)setRequiresURLSession:(bool)arg1;
- (void)setSkipEdge:(bool)arg1;
- (void)setSkipPeer:(bool)arg1;
- (void)setSkipPeerErrorReason:(id)arg1;
- (void)setTimeout:(double)arg1;
- (void)setUrl:(id)arg1;
- (bool)skipEdge;
- (bool)skipPeer;
- (id)skipPeerErrorReason;
- (double)timeout;
- (id)url;

@end
