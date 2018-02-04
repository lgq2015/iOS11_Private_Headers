/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXNameLoadingContext : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleIdentifier;
    NSArray * _recipients;
}

+ (id)globalContext;
+ (id)nameLoadingContextWithBundleIdentifier:(id)arg1;
+ (id)nameLoadingContextWithRecipients:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1 recipients:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNameLoadingContext:(id)arg1;
- (bool)isGlobalContext;

@end
