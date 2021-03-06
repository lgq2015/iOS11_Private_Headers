/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRemoteAccountMessageDestination : HMFMessageDestination {
    HMDAccount * _account;
    bool  _multicast;
}

@property (nonatomic, readonly) HMDAccount *account;
@property (getter=isMulticast, nonatomic, readonly) bool multicast;

+ (id)allMessageDestinations;
+ (id)shortDescription;

- (void).cxx_destruct;
- (id)account;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (unsigned long long)hash;
- (id)initWithTarget:(id)arg1;
- (id)initWithTarget:(id)arg1 account:(id)arg2 multicast:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isMulticast;
- (id)shortDescription;

@end
