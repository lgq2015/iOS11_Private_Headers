/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
 */

@interface _ICQButtonSpecification : NSObject {
    NSString * _buttonFormat;
    ICQLink * _buttonLink;
    NSDictionary * _linkForBundleIdentifier;
    NSDictionary * _serverDict;
}

@property (nonatomic, readonly) NSString *buttonFormat;
@property (nonatomic, readonly) ICQLink *buttonLink;
@property (nonatomic, retain) NSDictionary *linkForBundleIdentifier;

+ (id)buttonSpecificationSampleForLevel:(long long)arg1;

- (void).cxx_destruct;
- (id)buttonFormat;
- (id)buttonLink;
- (id)initWithServerDictionary:(id)arg1;
- (id)linkForBundleIdentifier;
- (id)linkForBundleIdentifier:(id)arg1;
- (void)setLinkForBundleIdentifier:(id)arg1;

@end
