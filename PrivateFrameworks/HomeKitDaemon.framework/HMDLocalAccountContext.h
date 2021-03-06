/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDLocalAccountContext : HMFObject <HMFObject> {
    NSString * _alternateDSID;
    NSString * _identifier;
    NSString * _username;
}

@property (readonly, copy) NSString *alternateDSID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *username;

- (void).cxx_destruct;
- (id)alternateDSID;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)propertyDescription;
- (id)username;

@end
