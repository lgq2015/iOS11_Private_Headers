/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIProfilePictureStore : NSObject {
    ACAccount * _account;
    ACAccountStore * _accountStore;
    bool  _didBeginUsingAddressBookSingleton;
    AAGrandSlamSigner * _grandSlamSigner;
    long long  _monogramType;
    CNMonogrammer * _monogrammer;
    NSOperationQueue * _networkingQueue;
    double  _pictureDiameter;
}

@property (nonatomic) long long monogramType;
@property (nonatomic) double pictureDiameter;
@property (nonatomic) long long pictureStyle;

+ (long long)CNMonogrammerStyleFromAAUIMonogramType:(long long)arg1;
+ (long long)aauiMonogramTypeForABStyle:(long long)arg1;
+ (long long)abMonogramStyleForAAUIType:(long long)arg1;

- (void).cxx_destruct;
- (id)_correctlySizedImageFromImage:(id)arg1;
- (id)_fallbackProfilePictureForPersonWithFirstName:(id)arg1 lastName:(id)arg2;
- (void)_familyMember:(id)arg1 rawImageAndCropRect:(id /* block */)arg2;
- (id)_familyMemberPersonPicture:(id)arg1;
- (void)_fetchAndCacheRawImageAndCropRectWithRequest:(id)arg1 personID:(id)arg2 completion:(id /* block */)arg3;
- (void)_fetchProfilePictureForAccountOwnerFromServer:(id)arg1 serverCacheTag:(id)arg2 completion:(id /* block */)arg3;
- (void)_fetchProfilePictureForFamilyMemberFromServer:(id)arg1 serverCacheTag:(id)arg2 completion:(id /* block */)arg3;
- (void)_fetchProfilePictureSupersetWithRequest:(id)arg1 personID:(id)arg2 completion:(id /* block */)arg3;
- (void)_fetchProfilePictureWithRequest:(id)arg1 personID:(id)arg2 completion:(id /* block */)arg3;
- (void)_invalidateMonogrammer;
- (id)_meCardPicture;
- (void)_meCardRawImageAndCropRect:(id /* block */)arg1;
- (id)_monogramContactImage:(id)arg1;
- (id)_monogramPersonImage:(void*)arg1;
- (id)_monogrammer;
- (void*)_onAddressBookQueue_copyPersonWithImageDataMatchingFamilyMember:(id)arg1;
- (void*)_onAddressBookQueue_copyPersonWithImageDataMatchingFamilyMemberEmailAddress:(id)arg1;
- (void*)_onAddressBookQueue_copyPersonWithImageDataMatchingFamilyMemberFirstAndLastNames:(id)arg1;
- (bool)_onAddressBookQueue_peopleLinkedToMeCardContainsRecordID:(int)arg1;
- (bool)_onAddressBookQueue_personSyncsWithiCloud:(void*)arg1;
- (id)_profilePictureForFamilyMemberWithoutMonogramFallback:(id)arg1;
- (id)_profilePictureForPicture:(id)arg1 crop:(bool)arg2 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 cacheable:(bool)arg4;
- (void)_updateServerProfilePictureForAccountOwner:(id)arg1 cropRect:(id)arg2;
- (void)_updateServerProfilePictureWithRequest:(id)arg1;
- (id)cacheablePictureForPicture:(id)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)dealloc;
- (void)fetchProfilePictureForAccountOwner:(id /* block */)arg1;
- (void)fetchProfilePictureForFamilyMember:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchRawImageAndCropRectForAccountOwner:(id /* block */)arg1;
- (void)fetchRawImageAndCropRectForFamilyMember:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithAppleAccount:(id)arg1 grandSlamAccount:(id)arg2 accountStore:(id)arg3;
- (id)initWithAppleAccount:(id)arg1 grandSlamSigner:(id)arg2;
- (id)initWithAppleAccount:(id)arg1 store:(id)arg2;
- (id)initWithGrandSlamSigner:(id)arg1;
- (long long)monogramType;
- (double)pictureDiameter;
- (long long)pictureStyle;
- (id)profilePictureForAccountOwner;
- (id)profilePictureForAccountOwnerWithoutMonogramFallback;
- (id)profilePictureForFamilyMember:(id)arg1;
- (id)profilePictureForFamilyMemberWithFirstName:(id)arg1 lastName:(id)arg2 email:(id)arg3;
- (id)profilePictureForPicture:(id)arg1;
- (id)profilePictureForPicture:(id)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setMonogramType:(long long)arg1;
- (void)setPictureDiameter:(double)arg1;
- (void)setPictureStyle:(long long)arg1;
- (void)setProfilePictureForAccountOwner:(id)arg1;
- (void)setProfilePictureForAccountOwner:(id)arg1 cropRect:(id)arg2;

@end
