/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface _BRContainerItem : BRQueryItem <NSCopying, NSSecureCoding> {
    NSString * _containerID;
    NSString * _localizedName;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)capabilities;
- (id)containerDisplayName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)filename;
- (id)fp_appContainerBundleIdentifier;
- (bool)fp_isContainer;
- (id)initWithCoder:(id)arg1;
- (id)initWithQueryItem:(id)arg1 container:(id)arg2 zoneRowID:(id)arg3;
- (id)itemIdentifier;
- (id)parentItemIdentifier;
- (id)typeIdentifier;

@end
