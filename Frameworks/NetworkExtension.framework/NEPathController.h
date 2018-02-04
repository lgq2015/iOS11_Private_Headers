/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEPathController : NSObject <NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    long long  _cellularFallbackFlags;
    bool  _enabled;
    NSArray * _pathRules;
    NSArray * _payloadAppRules;
}

@property long long cellularFallbackFlags;
@property (getter=isEnabled) bool enabled;
@property (readonly) bool hasNonDefaultRules;
@property (copy) NSArray *pathRules;
@property (copy) NSArray *payloadAppRules;

+ (id)copyAggregatePathRules;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)cellularFallbackFlags;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyPathRuleBySigningIdentifier:(id)arg1;
- (id)copyPathRuleSigningIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasNonDefaultRules;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (id)pathRules;
- (id)payloadAppRules;
- (bool)removePathRuleBySigningIdentifier:(id)arg1;
- (void)setCellularFallbackFlags:(long long)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setPathRules:(id)arg1;
- (void)setPayloadAppRules:(id)arg1;

@end