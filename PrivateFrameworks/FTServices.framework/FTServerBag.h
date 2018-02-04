/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface FTServerBag : NSObject {
    long long  _type;
}

@property (readonly) bool allowSelfSignedCertificates;
@property (readonly) bool allowUnsignedBags;
@property (readonly) NSString *apsEnvironmentName;
@property (readonly) NSURL *bagURL;
@property (readonly) bool isInDebilitatedMode;
@property (readonly) bool isLoaded;
@property (readonly) bool isLoading;
@property (readonly) bool isServerAvailable;

+ (id)_sharedInstance;
+ (id)_sharedInstanceForType:(long long)arg1;
+ (id)sharedInstance;
+ (id)sharedInstanceForBagType:(long long)arg1;

- (id)_bag;
- (id)_cachedBag;
- (bool)allowSelfSignedCertificates;
- (bool)allowUnsignedBags;
- (id)apsEnvironmentName;
- (id)bagURL;
- (void)dealloc;
- (void)forceBagLoad;
- (id)initWithBagType:(long long)arg1;
- (bool)isInDebilitatedMode;
- (bool)isLoaded;
- (bool)isLoading;
- (bool)isServerAvailable;
- (id)objectForKey:(id)arg1;
- (void)startBagLoad;
- (id)urlWithKey:(id)arg1;

@end
