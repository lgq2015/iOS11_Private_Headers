/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing
 */

@interface _SSBSafeHashCache : NSObject {
    struct unique_ptr<SafeBrowsing::SafeHashCache, std::__1::default_delete<SafeBrowsing::SafeHashCache> > { 
        struct __compressed_pair<SafeBrowsing::SafeHashCache *, std::__1::default_delete<SafeBrowsing::SafeHashCache> > { 
            struct SafeHashCache {} *__first_; 
        } __ptr_; 
    }  _cache;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addHashesForURL:(id)arg1;
- (void)clear;
- (bool)containsHashesForURL:(id)arg1;
- (id)init;

@end
