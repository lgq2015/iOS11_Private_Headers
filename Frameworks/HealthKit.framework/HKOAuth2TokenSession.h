/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKOAuth2TokenSession : NSObject <NSCopying, NSSecureCoding> {
    NSString * _code;
    NSString * _query;
}

@property (nonatomic, readonly, copy) NSString *code;
@property (nonatomic, readonly, copy) NSString *query;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)code;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCode:(id)arg1 query:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)query;

@end
