/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface ChartUpdater : YQLRequest {
    StockChartData * _currentChartData;
    <ChartUpdaterDelegate> * _delegate;
    long long  _interval;
    Stock * _stock;
    id /* block */  _updateCompletionHandler;
}

@property (nonatomic) <ChartUpdaterDelegate> *delegate;
@property (readonly) long long interval;

+ (id)_rangeStringForInterval:(long long)arg1;

- (void).cxx_destruct;
- (id)aggregateDictionaryDomain;
- (void)cancel;
- (id)dataSeries;
- (id)delegate;
- (void)didParseData;
- (void)failWithError:(id)arg1;
- (long long)interval;
- (void)parseData:(id)arg1;
- (void)parseDataSeriesDictionary:(id)arg1;
- (void)parseDataSeriesDictionary:(id)arg1 interval:(long long)arg2;
- (void)setDelegate:(id)arg1;
- (bool)updateChartForStock:(id)arg1 interval:(long long)arg2;
- (bool)updateChartForStock:(id)arg1 interval:(long long)arg2 withCompletion:(id /* block */)arg3;

@end
