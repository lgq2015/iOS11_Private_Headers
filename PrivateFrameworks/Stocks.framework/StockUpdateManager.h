/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface StockUpdateManager : NSObject <StockUpdaterDelegate> {
    NSMutableArray * _activeUpdaters;
    BackgroundStockUpdater * _backgroundUpdater;
    NSMutableArray * _inactiveUpdaters;
    bool  _postingRemoteUpdateNotification;
    NSHashTable * _updateObservers;
}

@property (nonatomic, readonly) NSURLSession *backgroundSession;
@property (nonatomic, readonly) BackgroundStockUpdater *backgroundUpdater;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_enumerateObserversRespondingToSelector:(SEL)arg1 usingBlock:(id /* block */)arg2;
- (void)_kickoffUpdater:(id)arg1 forStocks:(id)arg2 comprehensive:(bool)arg3 forceUpdate:(bool)arg4 completion:(id /* block */)arg5;
- (void)_stocksDidReload;
- (void)_updateStocksBasic:(id)arg1 forced:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)_updateStocksBasic:(id)arg1 inUpdater:(id)arg2 forced:(bool)arg3 withCompletion:(id /* block */)arg4;
- (void)_updaterDidCancelOrFinish:(id)arg1;
- (void)addUpdateObserver:(id)arg1;
- (id)availableStockUpdater;
- (id)backgroundSession;
- (void)backgroundUpdateAllStocksBasic:(id)arg1 earliestBeginDate:(id)arg2;
- (id)backgroundUpdater;
- (void)cancel;
- (void)dealloc;
- (void)failWithError:(id)arg1;
- (bool)hadError;
- (id)init;
- (bool)isLoading;
- (void)reestablishBackgroundSessionForManager:(id)arg1 stocks:(id)arg2 withFinishEventsHandler:(id /* block */)arg3;
- (void)removeUpdateObserver:(id)arg1;
- (void)reset;
- (void)resetUpdaters;
- (void)stockUpdater:(id)arg1 didFailWithError:(id)arg2 whileUpdatingStocks:(id)arg3 comprehensive:(bool)arg4;
- (void)stockUpdater:(id)arg1 didRequestUpdateForStocks:(id)arg2 isComprehensive:(bool)arg3;
- (void)stockUpdater:(id)arg1 didUpdateStocks:(id)arg2 isComprehensive:(bool)arg3;
- (void)stocksDidUpdateRemotely;
- (void)updateAllStocksBasic;
- (void)updateAllStocksBasic:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)updateAllStocksBasicWithCompletion:(id /* block */)arg1;
- (void)updateStaleStocksBasicWithCompletion:(id /* block */)arg1;
- (void)updateStockBasicWithCompletion:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)updateStockComprehensive:(id)arg1;
- (void)updateStockComprehensive:(id)arg1 forced:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)updateStockComprehensive:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)updateStocksComprehensive:(id)arg1;

@end
