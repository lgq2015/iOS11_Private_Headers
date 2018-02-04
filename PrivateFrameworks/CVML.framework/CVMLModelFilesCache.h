/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLModelFilesCache : NSObject {
    struct unique_ptr<cvml::util::model_file_cache, std::__1::default_delete<cvml::util::model_file_cache> > { 
        struct __compressed_pair<cvml::util::model_file_cache *, std::__1::default_delete<cvml::util::model_file_cache> > { 
            struct model_file_cache {} *__first_; 
        } __ptr_; 
    }  m_impl;
}

+ (id)sharedInstance;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;
- (id)load:(id)arg1;
- (void)purgeAll;
- (void)unload:(id)arg1;

@end