/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVPropertyFindBaseTask : CoreDAVTask {
    CoreDAVMultiStatusItem * _multiStatus;
    NSSet * _propertiesToFind;
}

@property (nonatomic, retain) CoreDAVMultiStatusItem *multiStatus;
@property (nonatomic, retain) NSSet *propertiesToFind;

- (void).cxx_destruct;
- (id)additionalHeaderValues;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)description;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)getTotalFailureError;
- (id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2;
- (id)multiStatus;
- (id)parseHints;
- (id)propertiesToFind;
- (void)setMultiStatus:(id)arg1;
- (void)setPropertiesToFind:(id)arg1;
- (id)successfulValueForNameSpace:(id)arg1 elementName:(id)arg2;
- (void)updateMultiStatusFromResponse;

@end
