/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileLookup.framework/MobileLookup
 */

@interface MLULookupItem : NSObject {
    NSArray * _attachments;
    unsigned long long  _currentAttachmentIndex;
    struct __DDResult { } * _ddResult;
    NSDictionary * _documentProperties;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _focusRange;
    MLULookupItemContent * _previewContent;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _proposedRange;
    bool  _resolved;
    NSString * _text;
    NSURL * _url;
}

@property (retain) NSDictionary *documentProperties;
@property (nonatomic, retain) MLULookupItemContent *previewContent;

- (void).cxx_destruct;
- (bool)_resolveAttachments:(id)arg1 currentAttachmentIndex:(unsigned long long)arg2;
- (bool)_resolveText:(id)arg1 focusRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)_resolveURL:(id)arg1 DDResult:(struct __DDResult { }*)arg2 focusRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)commit;
- (unsigned long long)commitType;
- (void)commitWithTransitionForPreviewViewController:(id)arg1 inViewController:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (id)documentProperties;
- (id)initWithAttachments:(id)arg1 currentAttachment:(unsigned long long)arg2;
- (id)initWithURL:(id)arg1 dataDetectorsResult:(struct __DDResult { }*)arg2 text:(id)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)previewContent;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })proposedRange;
- (bool)resolve;
- (void)setDocumentProperties:(id)arg1;
- (void)setPreviewContent:(id)arg1;
- (id)viewControllerToPresent;
- (id)webUrlToPresent;

@end
