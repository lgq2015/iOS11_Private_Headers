/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDResidentUserModel : HMDUserModel

@property (nonatomic, retain) NSNumber *configState;
@property (nonatomic, retain) NSString *deviceIdentifier;
@property (nonatomic, retain) NSString *displayName;

+ (id)properties;

@end
