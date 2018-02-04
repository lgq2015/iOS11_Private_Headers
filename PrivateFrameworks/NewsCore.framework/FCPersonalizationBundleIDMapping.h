/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPersonalizationBundleIDMapping : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _bundleIDMapping;
    NTPBBundleIDMapping * _pbBundleIDMapping;
}

@property (nonatomic, retain) NSDictionary *bundleIDMapping;
@property (nonatomic, readonly) unsigned long long count;

+ (id)decendingSpecificityBundleIDsForBundleID:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIDMapping;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPBBundleIDMapping:(id)arg1;
- (void)setBundleIDMapping:(id)arg1;
- (id)tagScoresForBundleID:(id)arg1;

@end
