/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIAccountRefresher : NSObject {
    <EKUIAccountRefresherDelegate> * _delegate;
    CalendarModel * _model;
    NSDate * _refreshStartDate;
    bool  _refreshing;
    NSSet * _refreshingSources;
    bool  _sourcesCurrentlySyncing;
}

@property (nonatomic, readonly) bool allAccountsOffline;
@property (nonatomic) <EKUIAccountRefresherDelegate> *delegate;
@property (nonatomic, readonly) bool refreshing;
@property (nonatomic, readonly) NSSet *refreshingSources;

- (void).cxx_destruct;
- (bool)_allSourcesRefreshed;
- (bool)_areAnySourcesCurrentlySyncing;
- (void)_beginMaximumTimeElapsedTimeout;
- (void)_beginSyncStartTimeout;
- (void)_cancelMaximumTimeElapsedTimeout;
- (void)_cancelSyncStartTimeout;
- (void)_eventStoreChanged:(id)arg1;
- (void)_refreshControlMaximumVisibleTimeElapsed;
- (void)_syncCompleted;
- (void)_syncDidEnd;
- (void)_syncDidStart;
- (void)_syncStartTimeoutExpired;
- (bool)allAccountsOffline;
- (id)delegate;
- (id)initWithCalendarModel:(id)arg1;
- (void)refresh;
- (bool)refreshing;
- (id)refreshingSources;
- (void)setDelegate:(id)arg1;
- (bool)sourceFinishedRefreshing:(id)arg1;

@end
