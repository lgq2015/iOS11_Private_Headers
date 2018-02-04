/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUMomentDescriptor : NSObject <NSSecureCoding> {
    NSString * _photosAssetIdentifier;
}

@property (nonatomic, readonly) NSURL *photoViewingAppURL;
@property (nonatomic, readonly, copy) NSString *photosAssetIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhotosAppAssetIdentifier:(id)arg1;
- (id)photoViewingAppURL;
- (id)photosAssetIdentifier;

@end