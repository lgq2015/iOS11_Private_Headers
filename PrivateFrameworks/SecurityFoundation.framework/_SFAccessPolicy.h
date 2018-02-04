/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface _SFAccessPolicy : NSObject <NSCopying, NSSecureCoding> {
    id  _accessPolicyInternal;
}

@property (nonatomic, copy) NSArray *accessControlList;
@property (nonatomic, copy) NSString *accessGroup;
@property (nonatomic) struct { long long x1; struct { unsigned long long x_2_1_1; long long x_2_1_2; } x2; } accessibility;
@property (nonatomic, readonly) const struct __CFDictionary { }*secAccessibilityAttributes;
@property (nonatomic) long long sharingPolicy;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessControlList;
- (id)accessGroup;
- (struct { long long x1; struct { unsigned long long x_2_1_1; long long x_2_1_2; } x2; })accessibility;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAccessibility:(struct { long long x1; struct { unsigned long long x_2_1_1; long long x_2_1_2; } x2; })arg1 sharingPolicy:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (const struct __CFDictionary { }*)secAccessibilityAttributes;
- (void)setAccessControlList:(id)arg1;
- (void)setAccessGroup:(id)arg1;
- (void)setAccessibility:(struct { long long x1; struct { unsigned long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (void)setSharingPolicy:(long long)arg1;
- (long long)sharingPolicy;

@end
