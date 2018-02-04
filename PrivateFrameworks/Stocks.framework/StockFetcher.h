/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface StockFetcher : NSObject <SymbolValidatorDelegate> {
    id /* block */  _completionHandler;
    double  _timeoutDuration;
    NSTimer * _timeoutTimer;
    SymbolValidator * _validator;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property double timeoutDuration;
@property (nonatomic, retain) NSTimer *timeoutTimer;
@property (retain) SymbolValidator *validator;

- (void).cxx_destruct;
- (void)attemptRemoteFetchOfStockWithSymbol:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cleanUpAndReportResult:(id)arg1;
- (id /* block */)completionHandler;
- (void)fetchStockWithSymbol:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithValidator:(id)arg1;
- (void)remoteFetchTimedOut;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setTimeoutDuration:(double)arg1;
- (void)setTimeoutTimer:(id)arg1;
- (void)setValidator:(id)arg1;
- (void)symbolValidator:(id)arg1 didFailWithError:(id)arg2;
- (void)symbolValidator:(id)arg1 didValidateSymbols:(id)arg2;
- (double)timeoutDuration;
- (id)timeoutTimer;
- (id)validator;

@end
