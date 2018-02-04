/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface SFAccessControlEntry : NSObject <NSCopying, NSSecureCoding> {
    id  _accessControlEntryInternal;
}

@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic) bool canRead;
@property (nonatomic) bool canWrite;
@property (getter=isOwner, nonatomic) bool owner;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (bool)canRead;
- (bool)canWrite;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBundleID:(id)arg1 owner:(bool)arg2 canRead:(bool)arg3 canWrite:(bool)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isOwner;
- (void)setBundleID:(id)arg1;
- (void)setCanRead:(bool)arg1;
- (void)setCanWrite:(bool)arg1;
- (void)setOwner:(bool)arg1;

@end
