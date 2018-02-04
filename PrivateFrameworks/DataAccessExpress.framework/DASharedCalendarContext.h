/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@interface DASharedCalendarContext : NSObject {
    NSString * _accountID;
    NSString * _calendarID;
    id /* block */  _completionBlock;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _shouldSyncCalendar;
}

@property (nonatomic, readonly) NSString *accountID;
@property (nonatomic, readonly) NSString *calendarID;
@property (nonatomic, readonly, copy) id /* block */ completionBlock;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool shouldSyncCalendar;

- (void).cxx_destruct;
- (id)accountID;
- (id)calendarID;
- (id /* block */)completionBlock;
- (void)finishedWithError:(id)arg1;
- (id)initWithCalendarID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 completionBlock:(id /* block */)arg4;
- (id)queue;
- (void)setShouldSyncCalendar:(bool)arg1;
- (bool)shouldSyncCalendar;

@end
