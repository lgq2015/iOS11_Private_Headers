/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

@interface WBSAnalyticsLogger : NSObject {
    AWDServerConnection * _awdServer;
    NSMutableDictionary * _pageLoadStartTimes;
}

@property (nonatomic, readonly) AWDServerConnection *awdServer;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

+ (id)sharedLogger;

- (void).cxx_destruct;
- (id)awdServer;
- (void)ckBookmarkSyncFinishedWithResult:(long long)arg1 error:(id)arg2;
- (void)didAutoFillCustomContactSetShowingMeCard:(bool)arg1;
- (void)didFailToMigrateToCKBookmarksAsPrimaryMigrator:(bool)arg1 error:(id)arg2;
- (void)didReceiveInvalidMessageFromWebProcess:(id)arg1;
- (void)didSelectContactAutoFillSet:(int)arg1 hasPreviouslyCustomizedSet:(bool)arg2;
- (void)didShowContactAutoFillSetsWithMeCardSets:(bool)arg1 showingPreviouslyCustomizedSet:(bool)arg2;
- (void)didStartMigratingToCKBookmarksAsPrimaryMigrator:(bool)arg1 localState:(long long)arg2 remoteState:(long long)arg3;
- (void)didSuccessfullyMigrateToCKBookmarksAsPrimaryMigrator:(bool)arg1;
- (void)didToggleDomainSpecificAutomaticReader:(bool)arg1;
- (void)didToggleGloballyUseAutomaticReader:(bool)arg1;
- (id)init;
- (void)pageLoadCompleted:(unsigned long long)arg1;
- (void)pageLoadCompleted:(unsigned long long)arg1 withErrorCode:(long long)arg2;
- (void)pageLoadStarted:(unsigned long long)arg1;
- (bool)registerQueriableMetric:(unsigned int)arg1 callback:(id /* block */)arg2;
- (void)safeBrowsingUserActionAfterSeeingWarning:(int)arg1;
- (void)safeBrowsingWarningPageShown:(int)arg1;
- (void)showedAutoFillQuickTypeSuggestionWithCategory:(int)arg1 formProperty:(id)arg2;
- (void)submitAutomaticReaderActivation:(int)arg1;
- (void)submitVersioningMetricWithVersion:(id)arg1 variant:(int)arg2;
- (void)unableToSilentlyMigrateToCKBookmarksWithReason:(int)arg1;
- (void)userTappedAutoFillQuickTypeSuggestionWithCategory:(int)arg1 formProperty:(id)arg2;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (void)_sf_authenticatedForAutoFillWithCategory:(int)arg1 onPageLoad:(bool)arg2 status:(int)arg3 client:(int)arg4;
- (void)_sf_authenticatedForAutoFillWithCategory:(int)arg1 onPageLoad:(bool)arg2 status:(int)arg3 error:(id)arg4 client:(int)arg5;
- (void)_sf_enteredTwoUpUsingMethod:(int)arg1;
- (void)_sf_launchedOrResumedSafariWhileInPrivateBrowsing:(bool)arg1;
- (void)_sf_longTappedOnSafariToolbarButton:(int)arg1;
- (void)_sf_longTappedOnSafariViewControllerToolbarButton:(int)arg1;
- (void)_sf_reportAutoFillRequiresAuthenticationPreference:(bool)arg1;
- (void)_sf_safariViewControllerDidDismissWithMethod:(int)arg1;
- (void)_sf_safariViewControllerDidPresentFromHostApp:(id)arg1;
- (void)_sf_tappedOnSafariToolbarButton:(int)arg1;
- (void)_sf_tappedOnSafariViewControllerToolbarButton:(int)arg1;
- (void)_sf_twoFingerTappedLinkWithOutcome:(int)arg1;

@end
