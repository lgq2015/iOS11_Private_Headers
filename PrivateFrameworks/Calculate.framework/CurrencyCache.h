/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Calculate.framework/Calculate
 */

@interface CurrencyCache : NSObject <NSXMLParserDelegate> {
    NSDictionary * _currencyData;
    NSString * _currentCurrency;
    NSNumber * _currentRate;
    NSMutableString * _currentString;
    NSDate * _lastRefreshDate;
    NSMutableDictionary * _mutableCurrencyCache;
    NSObject<OS_dispatch_queue> * _serializer;
    unsigned long long  _uuid;
}

@property (nonatomic, retain) NSDictionary *currencyData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *lastRefreshDate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serializer;
@property (readonly) Class superclass;
@property (readonly) unsigned long long uuid;

+ (id)shared;

- (void)_loadPersistedCurrencyCache;
- (void)_queue_loadPersistedCurrencyCache;
- (void)_queue_persistCurrencyCache;
- (bool)_queue_refresh;
- (id)currencyData;
- (void)dealloc;
- (id)init;
- (id)lastRefreshDate;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (bool)refresh;
- (bool)refreshWithTimeOut:(float)arg1;
- (id)serializer;
- (void)setCurrencyData:(id)arg1;
- (void)setLastRefreshDate:(id)arg1;
- (void)setSerializer:(id)arg1;
- (unsigned long long)uuid;

@end
