/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVSRVLookupTask : CoreDAVTask {
    NSArray * _fetchedRecords;
    struct __CFHost { } * _host;
    NSString * _serviceString;
}

@property (nonatomic, retain) NSArray *fetchedRecords;
@property (nonatomic) struct __CFHost { }*host;
@property (nonatomic, retain) NSString *serviceString;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)fetchedRecords;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (struct __CFHost { }*)host;
- (id)initWithServiceString:(id)arg1;
- (void)performCoreDAVTask;
- (id)serviceString;
- (void)setFetchedRecords:(id)arg1;
- (void)setHost:(struct __CFHost { }*)arg1;
- (void)setServiceString:(id)arg1;

@end
