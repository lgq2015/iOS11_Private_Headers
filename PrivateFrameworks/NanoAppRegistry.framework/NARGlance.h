/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoAppRegistry.framework/NanoAppRegistry
 */

@interface NARGlance : NSObject <NSSecureCoding> {
    NSString * _appID;
    NSString * _displayName;
    NSString * _glanceID;
    NSDictionary * _localizedDisplayNameMap;
}

@property (nonatomic, copy) NSString *appID;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *glanceID;
@property (nonatomic, copy) NSDictionary *localizedDisplayNameMap;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appID;
- (id)debugDescription;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)glanceID;
- (id)initWithCoder:(id)arg1;
- (id)localizedDisplayNameMap;
- (void)setAppID:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setGlanceID:(id)arg1;
- (void)setLocalizedDisplayNameMap:(id)arg1;

@end
