/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicProfileAlbumsDataSource : MusicMediaQueryDataSource {
    NSArray * _sectionEntities;
    struct vector<_NSRange, std::__1::allocator<_NSRange> > { 
        struct _NSRange {} *__begin_; 
        struct _NSRange {} *__end_; 
        struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { 
            struct _NSRange {} *__first_; 
        } __end_cap_; 
    }  _sectionRanges;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_invalidateCalculatedEntities;
- (id)entities;
- (id)localizedSectionTitleAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfSectionAtIndex:(unsigned long long)arg1;
- (id)sectionEntities;
- (bool)showsIndexBar;
- (bool)usesSections;

@end
