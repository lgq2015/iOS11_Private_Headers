/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexText.framework/SilexText
 */

@interface STTextTangierStorage : TSWPStorage {
    NSMutableArray * _attachments;
    bool  _isSelectable;
    NSLocale * _locale;
    NSSet * _rangedExclusionPaths;
    NSObject<OS_dispatch_semaphore> * _semaphore;
    bool  _shouldHyphenate;
    NSCache * _tokenizersCache;
}

@property (nonatomic, retain) NSMutableArray *attachments;
@property (nonatomic) bool isSelectable;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, retain) NSSet *rangedExclusionPaths;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *semaphore;
@property (nonatomic) bool shouldHyphenate;
@property (nonatomic, retain) NSCache *tokenizersCache;

- (void).cxx_destruct;
- (id)attachments;
- (void)dealloc;
- (id)initWithContext:(id)arg1 stylesheet:(id)arg2 storageKind:(int)arg3 string:(id)arg4 locale:(id)arg5;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })insertAttachmentOrFootnote:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)isSelectable;
- (id)locale;
- (id)rangedExclusionPaths;
- (id)semaphore;
- (void)setAttachments:(id)arg1;
- (void)setIsSelectable:(bool)arg1;
- (void)setRangedExclusionPaths:(id)arg1;
- (void)setShouldHyphenate:(bool)arg1;
- (void)setTokenizersCache:(id)arg1;
- (bool)shouldHyphenate;
- (bool)supportsSections;
- (id)tokenizersCache;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })wordAtCharIndex:(unsigned long long)arg1 includePreviousWord:(bool)arg2;

@end
