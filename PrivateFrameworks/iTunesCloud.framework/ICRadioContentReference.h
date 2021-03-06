/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICRadioContentReference : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic, readonly) long long contentType;
@property (nonatomic, readonly, copy) NSDictionary *matchDictionary;

+ (id)storeItemWithIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (long long)contentType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)matchDictionary;

@end
