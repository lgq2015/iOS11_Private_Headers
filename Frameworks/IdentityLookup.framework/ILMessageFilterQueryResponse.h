/* made by EzioChiu
   Image: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
 */

@interface ILMessageFilterQueryResponse : NSObject <NSSecureCoding> {
    long long  _action;
}

@property (nonatomic) long long action;

+ (bool)supportsSecureCoding;

- (long long)action;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToQueryResponse:(id)arg1;
- (void)setAction:(long long)arg1;

@end