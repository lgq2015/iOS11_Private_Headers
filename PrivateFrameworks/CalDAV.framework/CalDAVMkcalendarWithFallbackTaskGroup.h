/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVMkcalendarWithFallbackTaskGroup : CoreDAVTaskGroup {
    NSSet * _fallbackElements;
    NSDictionary * _headersToOverride;
    NSSet * _primaryElements;
    NSDictionary * _responseHeaders;
    bool  _shouldSupportVEVENT;
    bool  _shouldSupportVTODO;
    NSURL * _url;
}

@property (nonatomic, retain) NSSet *fallbackElements;
@property (nonatomic, retain) NSDictionary *headersToOverride;
@property (nonatomic, retain) NSDictionary *responseHeaders;
@property (nonatomic) bool shouldSupportVEVENT;
@property (nonatomic) bool shouldSupportVTODO;

- (void).cxx_destruct;
- (void)_mkcalendarAfterFailureCount:(unsigned long long)arg1;
- (id)fallbackElements;
- (id)headersToOverride;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 primaryPropertiesToSet:(id)arg3 fallbackPropertiesToSet:(id)arg4 atURL:(id)arg5;
- (id)responseHeaders;
- (void)setFallbackElements:(id)arg1;
- (void)setHeadersToOverride:(id)arg1;
- (void)setResponseHeaders:(id)arg1;
- (void)setShouldSupportVEVENT:(bool)arg1;
- (void)setShouldSupportVTODO:(bool)arg1;
- (bool)shouldSupportVEVENT;
- (bool)shouldSupportVTODO;
- (void)startTaskGroup;

@end
