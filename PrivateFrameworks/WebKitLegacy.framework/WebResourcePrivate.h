/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebResourcePrivate : NSObject {
    struct RefPtr<WebCore::ArchiveResource> { 
        struct ArchiveResource {} *m_ptr; 
    }  coreResource;
}

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithCoreResource:(struct Ref<WebCore::ArchiveResource> { struct ArchiveResource {} *x1; }*)arg1;

@end
