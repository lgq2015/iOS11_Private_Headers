/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUContactManager : NSObject {
    NSDictionary * _cachedContactByEmails;
    CNContactStore * _contactStore;
    double  _monogramDiameter;
    CNMonogrammer * _monogrammer;
}

@property (nonatomic, copy) NSDictionary *cachedContactByEmails;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic) double monogramDiameter;
@property (nonatomic, retain) CNMonogrammer *monogrammer;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)cachedContactByEmails;
- (id)contactForEmailAddress:(id)arg1 keysToFetch:(id)arg2;
- (id)contactStore;
- (void)contactStoreDidChange:(id)arg1;
- (void)dealloc;
- (id)init;
- (double)monogramDiameter;
- (id)monogrammer;
- (void)setCachedContactByEmails:(id)arg1;
- (void)setMonogramDiameter:(double)arg1;
- (void)setMonogrammer:(id)arg1;
- (id)userDataFromEmail:(id)arg1 monogramDiameter:(double)arg2;

@end
