/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVContainerQueryTask : CoreDAVTask {
    Class  _appSpecificDataItemClass;
    NSString * _appSpecificDataProp;
    NSString * _appSpecificNamespace;
    NSString * _appSpecificQueryCommand;
    unsigned long long  _searchLimit;
    NSSet * _searchTerms;
}

@property (nonatomic) <CoreDAVContainerQueryTaskDelegate> *delegate;

+ (id)_copySearchTermsFromSearchString:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithSearchTerms:(id)arg1 searchLimit:(unsigned long long)arg2 atURL:(id)arg3 appSpecificDataItemClass:(Class)arg4;
- (void)addFiltersToXMLData:(id)arg1;
- (id)copyDefaultParserForContentType:(id)arg1;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)initWithSearchString:(id)arg1 searchLimit:(unsigned long long)arg2 atURL:(id)arg3 appSpecificDataItemClass:(Class)arg4;
- (id)initWithSearchTerms:(id)arg1 searchLimit:(unsigned long long)arg2 atURL:(id)arg3 appSpecificDataItemClass:(Class)arg4;
- (id)requestBody;

@end
