/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
 */

@interface _ICQAlertSpecification : NSObject {
    NSString * _altLockScreenMessage;
    NSString * _altMessage;
    long long  _defaultButtonIndex;
    bool  _disableLockScreenAlert;
    NSMutableDictionary * _linkForButtonIndex;
    NSString * _lockScreenMessage;
    NSString * _lockScreenTitle;
    NSString * _message;
    NSDictionary * _serverDict;
    NSString * _title;
}

@property (nonatomic, retain) NSString *altLockScreenMessage;
@property (nonatomic, retain) NSString *altMessage;
@property (nonatomic) long long defaultButtonIndex;
@property (nonatomic) bool disableLockScreenAlert;
@property (retain) NSMutableDictionary *linkForButtonIndex;
@property (nonatomic, retain) NSString *lockScreenMessage;
@property (nonatomic, retain) NSString *lockScreenTitle;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) NSDictionary *serverDict;
@property (nonatomic, retain) NSString *title;

+ (id)alertSpecificationDictionarySampleForLevel:(long long)arg1;
+ (id)alertSpecificationSampleForLevel:(long long)arg1;

- (void).cxx_destruct;
- (void)_setLinks:(id)arg1 defaultIndex:(unsigned long long)arg2;
- (id)altLockScreenMessage;
- (id)altMessage;
- (long long)defaultButtonIndex;
- (bool)disableLockScreenAlert;
- (id)init;
- (id)initWithServerDictionary:(id)arg1;
- (id)linkForButtonIndex;
- (id)linkForButtonIndex:(long long)arg1;
- (id)lockScreenMessage;
- (id)lockScreenTitle;
- (id)message;
- (id)serverDict;
- (void)setAltLockScreenMessage:(id)arg1;
- (void)setAltMessage:(id)arg1;
- (void)setDefaultButtonIndex:(long long)arg1;
- (void)setDisableLockScreenAlert:(bool)arg1;
- (void)setLink:(id)arg1 forButtonIndex:(long long)arg2;
- (void)setLink:(id)arg1 forButtonIndex:(long long)arg2 defaultButton:(bool)arg3;
- (void)setLinkForButtonIndex:(id)arg1;
- (void)setLockScreenMessage:(id)arg1;
- (void)setLockScreenTitle:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setServerDict:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
