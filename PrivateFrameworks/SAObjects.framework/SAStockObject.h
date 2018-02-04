/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAStockObject : SADomainObject

@property (nonatomic, copy) NSNumber *averageDailyVolume;
@property (nonatomic, copy) NSNumber *change;
@property (nonatomic, copy) NSNumber *changePercent;
@property (nonatomic, copy) NSString *chartData;
@property (nonatomic, copy) NSString *currency;
@property (nonatomic, copy) NSString *displayStyle;
@property (nonatomic, copy) NSNumber *dividendYield;
@property (nonatomic, copy) NSNumber *earningsPerShare;
@property (nonatomic, copy) NSString *exchange;
@property (nonatomic, copy) NSNumber *fiftyTwoWeekHigh;
@property (nonatomic, copy) NSNumber *fiftyTwoWeekLow;
@property (nonatomic, copy) NSNumber *high;
@property (nonatomic, copy) NSString *link;
@property (nonatomic, copy) NSNumber *low;
@property (nonatomic, copy) NSString *marketCap;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSNumber *open;
@property (nonatomic, copy) NSNumber *peRatio;
@property (nonatomic, copy) NSNumber *prevClose;
@property (nonatomic, copy) NSNumber *price;
@property (nonatomic, copy) NSNumber *realTimeChange;
@property (nonatomic, copy) NSNumber *realTimeChangePercent;
@property (nonatomic, copy) NSNumber *realTimePrice;
@property (nonatomic, copy) NSNumber *realTimeTS;
@property (nonatomic, copy) NSArray *requests;
@property (nonatomic, copy) NSNumber *status;
@property (nonatomic, copy) NSArray *stockNews;
@property (nonatomic, copy) NSString *symbol;
@property (nonatomic, copy) NSNumber *timeStamp;
@property (nonatomic, copy) NSNumber *volume;
@property (nonatomic, copy) NSString *yearRange;

+ (id)object;
+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;

- (id)averageDailyVolume;
- (id)change;
- (id)changePercent;
- (id)chartData;
- (id)currency;
- (id)displayStyle;
- (id)dividendYield;
- (id)earningsPerShare;
- (id)encodedClassName;
- (id)exchange;
- (id)fiftyTwoWeekHigh;
- (id)fiftyTwoWeekLow;
- (id)groupIdentifier;
- (id)high;
- (id)link;
- (id)low;
- (id)marketCap;
- (id)name;
- (id)open;
- (id)peRatio;
- (id)prevClose;
- (id)price;
- (id)realTimeChange;
- (id)realTimeChangePercent;
- (id)realTimePrice;
- (id)realTimeTS;
- (id)requests;
- (void)setAverageDailyVolume:(id)arg1;
- (void)setChange:(id)arg1;
- (void)setChangePercent:(id)arg1;
- (void)setChartData:(id)arg1;
- (void)setCurrency:(id)arg1;
- (void)setDisplayStyle:(id)arg1;
- (void)setDividendYield:(id)arg1;
- (void)setEarningsPerShare:(id)arg1;
- (void)setExchange:(id)arg1;
- (void)setFiftyTwoWeekHigh:(id)arg1;
- (void)setFiftyTwoWeekLow:(id)arg1;
- (void)setHigh:(id)arg1;
- (void)setLink:(id)arg1;
- (void)setLow:(id)arg1;
- (void)setMarketCap:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOpen:(id)arg1;
- (void)setPeRatio:(id)arg1;
- (void)setPrevClose:(id)arg1;
- (void)setPrice:(id)arg1;
- (void)setRealTimeChange:(id)arg1;
- (void)setRealTimeChangePercent:(id)arg1;
- (void)setRealTimePrice:(id)arg1;
- (void)setRealTimeTS:(id)arg1;
- (void)setRequests:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setStockNews:(id)arg1;
- (void)setSymbol:(id)arg1;
- (void)setTimeStamp:(id)arg1;
- (void)setVolume:(id)arg1;
- (void)setYearRange:(id)arg1;
- (id)status;
- (id)stockNews;
- (id)symbol;
- (id)timeStamp;
- (id)volume;
- (id)yearRange;

@end
