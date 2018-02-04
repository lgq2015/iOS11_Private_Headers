/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPersonalizationWhitelist : NSObject <NSCopying, NSSecureCoding> {
    NTPBPersonalizationWhitelist * _pbWhitelist;
    NSSet * _portraitDisabledTagIDs;
    NSDictionary * _whitelist;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSDictionary *defaultTags;
@property (nonatomic, readonly) NSDictionary *optionalTags;
@property (nonatomic, retain) NSSet *portraitDisabledTagIDs;
@property (nonatomic, retain) NSDictionary *whitelist;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)defaultTags;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPBPersonalizationWhitelist:(id)arg1;
- (id)optionalTags;
- (id)portraitDisabledTagIDs;
- (void)setPortraitDisabledTagIDs:(id)arg1;
- (void)setWhitelist:(id)arg1;
- (id)whitelist;

@end
