/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKAppProxy : NSObject <NSSecureCoding> {
    NSString * _bundleIdentifier;
    bool  _isBetaApp;
    bool  _isEntitled;
    bool  _isSystemApp;
    NSNumber * _itemID;
    NSString * _localizedName;
    NSString * _subscriptionInfo;
    bool  _supportsTVApp;
    NSString * _version;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) bool isBetaApp;
@property (nonatomic, readonly) bool isEntitled;
@property (nonatomic, readonly) bool isSystemApp;
@property (nonatomic, readonly, copy) NSNumber *itemID;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, readonly, copy) NSString *subscriptionInfo;
@property (nonatomic, readonly) bool supportsTVApp;
@property (nonatomic, readonly, copy) NSString *version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isBetaApp;
- (bool)isEntitled;
- (bool)isSystemApp;
- (id)itemID;
- (id)localizedName;
- (id)subscriptionInfo;
- (bool)supportsTVApp;
- (id)version;

@end
