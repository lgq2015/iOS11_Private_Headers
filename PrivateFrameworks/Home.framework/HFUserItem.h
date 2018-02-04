/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFUserItem : HFItem <HFHomeKitItemProtocol, NSCopying> {
    HMHome * _home;
    HMUser * _user;
    HFUserNameFormatter * _userNameFormatter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) unsigned long long nameStyle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HMUser *user;
@property (nonatomic, readonly) HFUserNameFormatter *userNameFormatter;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)home;
- (id)homeKitObject;
- (id)init;
- (id)initWithHome:(id)arg1 user:(id)arg2 nameStyle:(unsigned long long)arg3;
- (unsigned long long)nameStyle;
- (id)user;
- (id)userNameFormatter;

@end
