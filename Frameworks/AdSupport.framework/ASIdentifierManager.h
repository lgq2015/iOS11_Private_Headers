/* made by EzioChiu
   Image: /System/Library/Frameworks/AdSupport.framework/AdSupport
 */

@interface ASIdentifierManager : NSObject

@property (nonatomic, readonly) NSUUID *advertisingIdentifier;
@property (getter=isAdvertisingTrackingEnabled, nonatomic, readonly) bool advertisingTrackingEnabled;

+ (id)sharedManager;

- (id)advertisingIdentifier;
- (bool)isAdvertisingTrackingEnabled;

@end
