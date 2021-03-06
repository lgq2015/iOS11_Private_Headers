/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface YQLRequest : NSObject <NSURLSessionDataDelegate> {
    NSURLSessionTask * _dataTask;
    NSURLSession * _defaultSession;
    NSMutableData * _rawData;
    NSURLRequest * _request;
    bool  _taggedAsInvalid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=hasBeenTaggedAsInvalid, nonatomic) bool taggedAsInvalid;

+ (void)appendDebugString:(id)arg1;
+ (void)saveDebugString;
+ (void)setShouldGenerateOfflineData:(bool)arg1;
+ (bool)shouldGenerateOfflineData;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (id)YQLCountryCode;
- (id)YQLLanguageCode;
- (void)_createDefaultSession;
- (id)_yahooDoppelganger_taskForRequest:(id)arg1 delegate:(id)arg2;
- (id)aggregateDictionaryDomain;
- (id)arrayWithDictionaryKeyPath:(id)arg1 inJSONObject:(id)arg2 wrapResultIfDictionary:(bool)arg3;
- (void)cancel;
- (void)cancelAndInvalidate;
- (void)dealloc;
- (id)dictionaryWithDictionaryKeyPath:(id)arg1 inJSONObject:(id)arg2;
- (void)didParseData;
- (void)failToParseWithData:(id)arg1;
- (void)failToParseWithDataSeriesDictionary:(id)arg1;
- (void)failWithError:(id)arg1;
- (bool)hasBeenTaggedAsInvalid;
- (id)init;
- (bool)isLoading;
- (void)loadRequest:(id)arg1;
- (id)objectOfClass:(Class)arg1 withDictionaryKeyPath:(id)arg2 inJSONObject:(id)arg3;
- (id)objectWithDictionaryKeyPath:(id)arg1 inJSONObject:(id)arg2;
- (void)parseData:(id)arg1;
- (void)setTaggedAsInvalid:(bool)arg1;
- (id)taskForRequest:(id)arg1 delegate:(id)arg2;

@end
