/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessoryAdvertisement : NSObject {
    HMAccessoryCategory * _category;
    NSString * _identifier;
    NSString * _name;
}

@property (nonatomic, readonly) HMAccessoryCategory *category;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (id)category;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)name;

@end
