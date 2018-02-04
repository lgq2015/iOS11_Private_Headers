/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLActivityItemProvider : NSObject <UIActivityItemSource> {
    QLItem * _activityPreviewItem;
    QLPreviewPrinter * _printer;
}

@property (retain) QLItem *activityPreviewItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) QLPreviewPrinter *printer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_pdfPreviewDataAtURL:(id)arg1;
- (id)activityPreviewItem;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (id)mainItem;
- (id)printInfo;
- (id)printer;
- (void)setActivityPreviewItem:(id)arg1;
- (void)setPrinter:(id)arg1;

@end
