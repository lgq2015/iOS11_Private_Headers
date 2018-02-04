/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

@interface FAFamilyRequest : AAFamilyRequest {
    ACAccount * _appleAccount;
}

@property (nonatomic, retain) ACAccount *appleAccount;

- (void).cxx_destruct;
- (void)_configureRequest:(id)arg1 includePayload:(bool)arg2;
- (id)appleAccount;
- (id)initWithGrandSlamSigner:(id)arg1;
- (void)setAppleAccount:(id)arg1;

@end
