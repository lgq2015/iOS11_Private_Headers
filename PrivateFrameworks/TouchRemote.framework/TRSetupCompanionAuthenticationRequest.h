/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRSetupCompanionAuthenticationRequest : TRRequestMessage {
    ACAccount * _account;
    AKDevice * _companionDevice;
    NSSet * _targetedAccountServices;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) AKDevice *companionDevice;
@property (nonatomic, retain) NSSet *targetedAccountServices;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)account;
- (id)companionDevice;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAccount:(id)arg1;
- (void)setCompanionDevice:(id)arg1;
- (void)setTargetedAccountServices:(id)arg1;
- (id)targetedAccountServices;

@end
