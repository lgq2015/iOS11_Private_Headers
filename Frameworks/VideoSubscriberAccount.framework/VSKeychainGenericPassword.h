/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSKeychainGenericPassword : VSKeychainItem

@property (nonatomic, copy) NSString *accessGroup;
@property (nonatomic, copy) NSString *account;
@property (nonatomic, copy) NSString *comment;
@property (nonatomic, readonly, copy) NSDate *creationDate;
@property (nonatomic, copy) NSNumber *creatorCode;
@property (nonatomic, copy) NSString *generic;
@property (getter=isInvisible, nonatomic) bool invisible;
@property (nonatomic, copy) NSString *itemDescription;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, readonly, copy) NSDate *modificationDate;
@property (getter=isNegative, nonatomic) bool negative;
@property (nonatomic, copy) NSString *service;
@property (getter=isSynchronizable, nonatomic) bool synchronizable;
@property (nonatomic, copy) NSNumber *typeCode;

- (id)_faultWhileAccessingPrimitiveValueForKey:(id)arg1;
- (void)_notifyWhileSettingPrimitiveValue:(id)arg1 forKey:(id)arg2;
- (id)accessGroup;
- (id)account;
- (id)comment;
- (id)creationDate;
- (id)creatorCode;
- (id)generic;
- (id)init;
- (bool)isInvisible;
- (bool)isNegative;
- (bool)isSynchronizable;
- (id)itemDescription;
- (id)label;
- (id)modificationDate;
- (id)service;
- (void)setAccessGroup:(id)arg1;
- (void)setAccount:(id)arg1;
- (void)setComment:(id)arg1;
- (void)setCreatorCode:(id)arg1;
- (void)setGeneric:(id)arg1;
- (void)setInvisible:(bool)arg1;
- (void)setItemDescription:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setNegative:(bool)arg1;
- (void)setService:(id)arg1;
- (void)setSynchronizable:(bool)arg1;
- (void)setTypeCode:(id)arg1;
- (id)typeCode;

@end
