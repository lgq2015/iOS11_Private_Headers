/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXUIPeopleBootstrapFlowController : PXPeopleBootstrapFlowController {
    PXPeopleBootstrapConfirmationViewController * _confirmationViewController;
    PXPeopleBootstrapFinalViewController * _finalViewController;
}

@property (nonatomic, retain) PXPeopleBootstrapConfirmationViewController *confirmationViewController;
@property (nonatomic, retain) PXPeopleBootstrapFinalViewController *finalViewController;
@property (nonatomic, readonly) PHPerson *sourcePerson;

- (void).cxx_destruct;
- (void)_addToPeopleAlbumWithChangeRequest:(id)arg1;
- (void)_favoritePersonWithChangeRequest:(id)arg1;
- (void)_mergePerson:(id)arg1 toPerson:(id)arg2;
- (void)_namePerson:(id)arg1 toContact:(id)arg2 withChangeRequest:(id)arg3;
- (void)_namePerson:(id)arg1 toString:(id)arg2 withChangeRequest:(id)arg3;
- (void)_namePerson:(id)arg1 withChangeRequest:(id)arg2;
- (id)_postNamingViewController;
- (void)_removeFromPeopleAlbumWithChangeRequest:(id)arg1;
- (void)_unfavoritePersonWithChangeRequest:(id)arg1;
- (void)computeViewControllersForBootstrapFlow;
- (id)confirmationViewController;
- (void)done:(id)arg1;
- (id)finalViewController;
- (void)recomputeViewControllersForChangeInKeyPath:(id)arg1;
- (void)setConfirmationViewController:(id)arg1;
- (void)setFinalViewController:(id)arg1;
- (id)sourcePerson;

@end
