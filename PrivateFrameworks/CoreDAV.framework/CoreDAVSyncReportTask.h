/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVSyncReportTask : CoreDAVPropertyFindBaseTask {
    bool  _moreToSync;
    NSString * _nextSyncToken;
    NSString * _previousSyncToken;
    bool  _wasInvalidSyncToken;
}

@property (nonatomic, readonly) bool moreToSync;
@property (nonatomic, readonly) NSString *nextSyncToken;
@property (nonatomic, readonly) bool wasInvalidSyncToken;

- (void).cxx_destruct;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)description;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2 withDepth:(int)arg3 previousSyncToken:(id)arg4;
- (bool)moreToSync;
- (id)nextSyncToken;
- (id)notFoundHREFs;
- (id)requestBody;
- (bool)wasInvalidSyncToken;

@end
