/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCPCSChainBatchInfo : NSObject {
    BRCAppLibrary * _appLibrary;
    NSMutableArray * _fullyChainRecordBatch;
    NSMutableDictionary * _fullyChainRecordInfoMap;
    NSMutableDictionary * _halfChainedParentMap;
}

@property (nonatomic, readonly) unsigned long long batchCount;
@property (nonatomic, readonly, copy) NSArray *records;

- (void).cxx_destruct;
- (void)addFullyChainedRecordInfo:(id)arg1;
- (unsigned long long)batchCount;
- (void)chainPreparedRecordBatch:(id)arg1;
- (id)initWithAppLibrary:(id)arg1;
- (id)records;

@end
