/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileLookup.framework/MobileLookup
 */

@interface MLULookupItemContent : NSObject {
    unsigned long long  _commitType;
    NSURL * _commitURL;
    UIViewController * _commitViewController;
    UIViewController * _previewViewController;
    bool  _valid;
}

@property (nonatomic) unsigned long long commitType;
@property (nonatomic, retain) NSURL *commitURL;
@property (nonatomic, retain) UIViewController *commitViewController;
@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, retain) UIViewController *previewViewController;
@property bool valid;

+ (id)contentWithAttachments:(id)arg1 currentAttachmentIndex:(unsigned long long)arg2;
+ (id)contentWithText:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)contentWithURL:(id)arg1 result:(struct __DDResult { }*)arg2 documentProperties:(id)arg3;

- (void).cxx_destruct;
- (id)children;
- (bool)commitPreviewInController:(id)arg1;
- (unsigned long long)commitType;
- (id)commitURL;
- (id)commitViewController;
- (id)contact;
- (void)dismissViewController;
- (id)previewViewController;
- (id)requiredEntitlements;
- (void)setCommitType:(unsigned long long)arg1;
- (void)setCommitURL:(id)arg1;
- (void)setCommitViewController:(id)arg1;
- (void)setPreviewViewController:(id)arg1;
- (void)setValid:(bool)arg1;
- (void)setupViewControllerInCommitMode;
- (bool)valid;
- (bool)wantsSeamlessCommit;

@end
