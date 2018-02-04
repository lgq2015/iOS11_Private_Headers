/* made by EzioChiu.
 */

@protocol CAMTransientAssetConvertible <NSObject>

@required

- (NSString *)burstIdentifier;
- (NSDate *)captureDate;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })irisStillDisplayTime;
- (NSString *)irisStillImageUUID;
- (NSURL *)irisVideoPersistenceURL;
- (bool)isExpectingPairedVideo;
- (unsigned long long)mediaSubtypes;
- (unsigned long long)mediaType;
- (unsigned long long)numberOfRepresentedAssets;
- (NSURL *)persistenceURL;
- (UIImage *)placeholderImage;
- (unsigned short)sessionIdentifier;
- (NSDictionary *)stillImageMetadata;
- (NSString *)uuid;

@end
