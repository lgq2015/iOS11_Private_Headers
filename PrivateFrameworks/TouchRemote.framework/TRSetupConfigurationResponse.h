/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRSetupConfigurationResponse : TRResponseMessage {
    bool  _needsNetwork;
    NSSet * _unauthenticatedAccountServices;
}

@property (nonatomic) bool needsNetwork;
@property (nonatomic, copy) NSSet *unauthenticatedAccountServices;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_stringFromAccountServices:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)needsNetwork;
- (void)setNeedsNetwork:(bool)arg1;
- (void)setUnauthenticatedAccountServices:(id)arg1;
- (id)unauthenticatedAccountServices;

@end
