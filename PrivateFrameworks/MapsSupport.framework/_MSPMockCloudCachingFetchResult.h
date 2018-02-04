/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface _MSPMockCloudCachingFetchResult : NSObject <MSPCloudCachingFetchResult> {
    NSDictionary * _deletedRecordNamesByRecordType;
    NSDictionary * _records;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSDictionary *deletedRecordNamesByRecordType;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *records;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)deletedRecordNamesByRecordType;
- (id)initWithRecords:(id)arg1 deletionsByRecordType:(id)arg2;
- (id)records;

@end
