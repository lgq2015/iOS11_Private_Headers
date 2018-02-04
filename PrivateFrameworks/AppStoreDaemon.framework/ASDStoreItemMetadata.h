/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDStoreItemMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _propertiesDictionary;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSDictionary *propertiesDictionary;
@property (nonatomic, readonly) long long storeItemIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)propertiesDictionary;
- (long long)storeItemIdentifier;

@end
