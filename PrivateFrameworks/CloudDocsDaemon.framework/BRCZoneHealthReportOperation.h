/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCZoneHealthReportOperation : _BRCOperation <BRCOperationSubclass> {
    BRCAccountSession * _session;
    bool  shouldPerformAnotherBatch;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_reportRecords:(id)arg1 requestID:(unsigned long long)arg2;
- (id)initWithSession:(id)arg1;
- (void)main;
- (bool)shouldPerformAnotherBatch;
- (bool)shouldRetryForError:(id)arg1;

@end
