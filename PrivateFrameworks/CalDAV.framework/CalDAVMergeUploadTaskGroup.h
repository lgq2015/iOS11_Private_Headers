/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVMergeUploadTaskGroup : CoreDAVTaskGroup {
    <CalDAVCalendar> * _calendar;
    <CalDAVPrincipal> * _principal;
    bool  _shouldTrySyncTokenForBulkUpload;
    CalDAVBulkUploadTaskGroup * _uploadTaskGroup;
}

@property (nonatomic, retain) <CalDAVCalendar> *calendar;
@property (nonatomic, retain) <CalDAVPrincipal> *principal;
@property (nonatomic) bool shouldTrySyncTokenForBulkUpload;
@property (nonatomic, retain) CalDAVBulkUploadTaskGroup *uploadTaskGroup;

- (void).cxx_destruct;
- (void)_performBulkUpload;
- (void)_performRegularUpload;
- (id)calendar;
- (void)cancelTaskGroup;
- (id)dataContentType;
- (void)dealloc;
- (id)initWithCalendar:(id)arg1 principal:(id)arg2 accountInfoProvider:(id)arg3 taskManager:(id)arg4;
- (id)principal;
- (void)setCalendar:(id)arg1;
- (void)setPrincipal:(id)arg1;
- (void)setShouldTrySyncTokenForBulkUpload:(bool)arg1;
- (void)setUploadTaskGroup:(id)arg1;
- (bool)shouldTrySyncTokenForBulkUpload;
- (void)startTaskGroup;
- (id)uploadTaskGroup;

@end
