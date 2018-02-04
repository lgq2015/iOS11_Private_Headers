/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

@interface _OSLogIndexFile : NSObject <_OSLogIndexTimeRangable> {
    unsigned char  _bootu;
    bool  _catalogsScanned;
    _OSLogChunkFileReference * _cfr;
    _OSLogChunkStore * _cs;
    unsigned long long  _et;
    unsigned long long  _ot;
}

@property (nonatomic, readonly) const char *bootUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long endTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long oldestTime;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_loadCatalogMetadata;
- (bool)_loadHeaderMetadata:(id)arg1;
- (const char *)bootUUID;
- (unsigned long long)endTime;
- (id)initWithChunkStore:(id)arg1 error:(id*)arg2;
- (id)initWithTraceFile:(id)arg1 error:(id*)arg2;
- (id)map:(id*)arg1;
- (unsigned long long)oldestTime;

@end
