/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface StocksWatchPreferences : NSObject {
    bool  _changeColorSwapped;
    unsigned long long  _textDirection;
    NPSDomainAccessor * _watchDefaults;
}

@property (nonatomic) long long complicationDisplayMode;
@property (nonatomic) NSString *defaultStockSymbol;

+ (void)initialize;
+ (id)sharedPreferences;

- (void).cxx_destruct;
- (long long)complicationDisplayMode;
- (void)dealloc;
- (id)defaultStockSymbol;
- (id)init;
- (void)reactivateWatchNPSAccessor;
- (void)setComplicationDisplayMode:(long long)arg1;
- (void)setDefaultStockSymbol:(id)arg1;
- (void)syncChartInterval;
- (void)syncKey:(id)arg1;
- (void)syncRowDataType;
- (void)syncSelectedStock;
- (void)syncStocksList;

@end
