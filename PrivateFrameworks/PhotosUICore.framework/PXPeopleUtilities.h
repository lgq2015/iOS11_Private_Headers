/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleUtilities : NSObject

+ (id)_daysDictionary;
+ (bool)_hasRecentlyHandledBootstrapForPerson:(id)arg1;
+ (id /* block */)_manualOrderComparator;
+ (id /* block */)_otherPeopleComparator;
+ (id)_peopleHomeFetchResultForPersonType:(long long)arg1;
+ (void)_setDaysDictionary:(id)arg1;
+ (id)alertControllerForRemovingNumberOfPeople:(long long)arg1 completionBlock:(id /* block */)arg2;
+ (id)alertControllerForResettingPeopleWithCompletion:(id /* block */)arg1;
+ (id)assetCollectionListFetchResultForPerson:(id)arg1;
+ (id)bootstrapViewControllerForContext:(id)arg1 delegate:(id)arg2;
+ (bool)changePeople:(id)arg1 toPersonType:(long long)arg2 error:(id*)arg3;
+ (id)changePerson:(id)arg1 toPersonType:(long long)arg2;
+ (id /* block */)comparatorForFetchType:(unsigned long long)arg1;
+ (id)createDetailsForPerson:(id)arg1;
+ (bool)facesSyncFeatureEnabled;
+ (id)identifiersForPeople:(id)arg1;
+ (bool)isPersonHiddenFromPeopleHome:(id)arg1;
+ (long long)manualOrderForInsertingAtEndOfSectionWithType:(long long)arg1;
+ (void)markHandledBootstrapForPerson:(id)arg1;
+ (void)mergePersons:(id)arg1 withPerson:(id)arg2;
+ (id)modelObjectsFromPersonItemArray:(id)arg1;
+ (id)personWithLocalIdentifier:(id)arg1;
+ (id)personWithPersonUri:(id)arg1;
+ (id)sharedContactStore;
+ (bool)shouldShowBootstrapForPerson:(id)arg1;
+ (bool)showBootstrapIfNeededWithContext:(id)arg1 fromParentVC:(id)arg2;
+ (bool)showBootstrapIfNeededWithContext:(id)arg1 fromParentVC:(id)arg2 delegate:(id)arg3;
+ (bool)showBootstrapIfNeededWithContext:(id)arg1 fromParentVC:(id)arg2 force:(bool)arg3 delegate:(id)arg4;

@end
