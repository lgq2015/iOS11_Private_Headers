/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface CalendarAccountsController : NSObject {
    ACAccountStore * _accountStore;
    NSMutableDictionary * _lastStoreListingRefreshDates;
    NSObject<OS_dispatch_queue> * _refreshQueue;
}

+ (void)initialize;
+ (void)invalidate;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_accountForAccountIdentifier:(id)arg1;
- (void)_accountStoreDidChange:(id)arg1;
- (id)_displayAccountForAccountWithIdentifier:(id)arg1;
- (void)_localeDidChange:(id)arg1;
- (id)_localizedTitleForLocalSourceUsedAtBeginningOfSentence:(bool)arg1;
- (id)accountStore;
- (id)accountTypeTitleForSource:(id)arg1;
- (id)accountTypeTitleForSourceWithExternalId:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)refreshListingForSource:(id)arg1 isUserRequested:(bool)arg2;
- (int)sortOrderForSource:(id)arg1;
- (int)sortOrderForSourceType:(long long)arg1;
- (int)sortOrderForStoreType:(int)arg1;
- (bool)sourceIsManaged:(id)arg1;
- (bool)sourceListingNeedsRefresh:(id)arg1;
- (id)titleForSource:(id)arg1 forBeginningOfSentence:(bool)arg2;

@end
