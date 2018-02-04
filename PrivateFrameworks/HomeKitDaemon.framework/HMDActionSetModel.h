/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDActionSetModel : HMDBackingStoreModelObject

@property (nonatomic, retain) NSDate *lastExecutionDate;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *type;

+ (id)properties;

@end
