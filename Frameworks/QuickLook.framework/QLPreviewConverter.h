/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPreviewConverter : NSObject {
    bool  _dataGatheringSucceeded;
    bool  _dataPhaseFinished;
    NSObject<OS_dispatch_io> * _io_write;
    NSDictionary * _options;
    QLPreviewParts * _previewParts;
    NSURL * _tmpFileURL;
    long long  _totalWrittenBytes;
}

@property (nonatomic, readonly) NSString *previewFileName;
@property (nonatomic, readonly) QLPreviewParts *previewParts;
@property (nonatomic, readonly) NSURLRequest *previewRequest;
@property (nonatomic, readonly) NSURLResponse *previewResponse;
@property (nonatomic, readonly) NSString *previewUTI;

+ (id)_csvMIMETypes;
+ (id)_csvUTIs;
+ (id)_iWorkMIMETypes;
+ (id)_iWorkUTIs;
+ (id)_lpdfUTIs;
+ (id)_officeMIMETypes;
+ (id)_officeUTIs;
+ (id)_rtfMIMETypes;
+ (id)_rtfUTIs;
+ (id)_spreadSheetMIMETypes;
+ (id)_spreadSheetUTIs;
+ (bool)canConvertDocumentType:(id)arg1;
+ (id)convertibleMIMETypes;
+ (id)convertibleUTIs;
+ (bool)isCSVDocumentType:(id)arg1;
+ (bool)isIWorkDocumentType:(id)arg1;
+ (bool)isLPDFDocumentType:(id)arg1;
+ (bool)isOfficeDocumentType:(id)arg1;
+ (bool)isRTFDocumentType:(id)arg1;
+ (bool)isSafeRequest:(id)arg1;
+ (bool)isSafeURL:(id)arg1;
+ (bool)isSpreadSheetDocumentType:(id)arg1;

- (void).cxx_destruct;
- (void)_closeIOCahnnel;
- (void)_createDispatchIOChannel;
- (void)_register;
- (void)_writeDataArrayIntoStream:(id)arg1;
- (void)appendData:(id)arg1;
- (void)appendDataArray:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (void)finishConverting;
- (void)finishedAppendingData;
- (bool)htmlErrorDisabled;
- (id)initWithConnection:(id)arg1 delegate:(id)arg2 response:(id)arg3 options:(id)arg4;
- (id)initWithData:(id)arg1 name:(id)arg2 uti:(id)arg3 options:(id)arg4;
- (id)initWithURL:(id)arg1 uti:(id)arg2 options:(id)arg3;
- (bool)isCancelled;
- (bool)isComputed;
- (id)previewFileName;
- (id)previewParts;
- (id)previewRequest;
- (id)previewResponse;
- (id)previewUTI;
- (id)safeRequestForRequest:(id)arg1;
- (void)setHtmlErrorDisabled:(bool)arg1;

@end
