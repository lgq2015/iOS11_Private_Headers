/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNMutableContainer : CNContainer

@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) int iOSLegacyIdentifier;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) CNContainer *snapshot;
@property (nonatomic) long long type;

- (void)adoptValuesFromAndSetSnapshot:(id)arg1;
- (id)copy;
- (id)freeze;
- (id)freezeWithSelfAsSnapshot;
- (id)identifier;
- (bool)isEnabled;
- (id)name;
- (void)setEnabled:(bool)arg1;
- (void)setIOSLegacyIdentifier:(int)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSnapshot:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
